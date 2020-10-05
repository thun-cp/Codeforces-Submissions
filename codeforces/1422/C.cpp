// #pragma comment(linker, "/stack:200000000")
// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC optimization("unroll-loops")

#include "bits/stdc++.h"
#define pb push_back
#define mp make_pair
#define mt make_tuple
//#define endl '\n'
#define F first
#define S second
#define IO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define cf ll testcases;cin>>testcases;while(testcases--)
#define prn(x) if(x) cout<<"YES"<<endl; else cout<<"NO"<<endl;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define minel(x) (*min_element(all(x)))
#define maxel(x) (*max_element(all(x)))
#define cou dbg=1;cout
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pi;
typedef vector<ll> vi;
typedef vector<ld> vd;
typedef vector<pi> vp;
ll dbg=0;
template<typename A, typename B> ostream& operator<<(ostream &cout, pair<A, B> const &p);
template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v);
template<typename A, typename B> istream& operator>>(istream& cin, pair<A, B> &p);
template<typename A> istream& operator>>(istream& cin, vector<A> &v);
int dx[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};
ll MOD=1e9+7;
ll poww(ll a,ll b){
    if(b==0) return 1;
    else if(b&1) return a*poww(a,b-1)%MOD;
    else{
        ll ans=poww(a,b/2)%MOD;
        return ans*ans%MOD;
    }
}

void solve(){
    string s;
    cin>>s;
    ll n=s.length();
    vi mods(n+5,0);
    ll fir=2;
    mods[0]=1;
    for(ll i=1;i<=n;i++){
        mods[i]=(mods[i-1]+fir*poww(10,fir-1))%MOD;
        fir++;
    }
    //cou<<mods<<endl;
    vi arr(n);
    for(ll i=0;i<n;i++) arr[i]=s[i]-48;
    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=((arr[i]*(i+1)*i/2)%MOD)*poww(10,n-i-1)%MOD;
        sum%=MOD;
        ll left=n-i-1;
        //cout<<left<<' ';
        if(left==0) continue;
        ll num=(arr[i]*mods[left-1])%MOD;
        //cout<<num<<endl;
        sum+=num;
        sum%=MOD;
        left--;
    }
    cout<<sum<<endl;

}

int main(){
    IO;
    // cf
    solve();
    return 0;
}


template<typename A, typename B> ostream& operator<<(ostream &cout, pair<A, B> const &p) {
    if(dbg){
        return cout << "(" << p.F << ", " << p.S << ")";
    }else{
        return cout<<p.F<<' '<<p.S;
    }
        dbg=0;}
template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v) {
    if(dbg){
        cout << "["; for(ll i = 0; i < v.size(); i++) {if (i) cout << ", "; cout << v[i];} return cout << "]";
    }else{
        for(ll i=0;i<v.size()-1;i++) cout<<v[i]<<' ';
        return cout<<v[v.size()-1];
    dbg=0;}
}
template<typename A, typename B> istream& operator>>(istream& cin, pair<A, B> &p) {
   cin >> p.first;
   return cin >> p.second;
}
template<typename A> istream& operator>>(istream& cin, vector<A> &v) {
   for(ll i=0;i<v.size()-1;i++) cin>>v[i];
   return cin >> v[v.size()-1];
}
