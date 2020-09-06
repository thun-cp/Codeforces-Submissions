// #pragma comment(linker, "/stack:200000000")
// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC optimization("unroll-loops")

#include "bits/stdc++.h"
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define endl '\n'
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

void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll found=1;
    ll is=0,os=0,qs=0;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++) arr[i]=s[i]-'0';
    ll st=0,fn=n,inc=1,sto=n-k,inc2=k;
    for(ll test=0;test<2;test++){
        for(ll i=st;i!=fn;i+=inc){
            if(i==sto) break;
            if(arr[i]==15&&arr[i+inc2]==15) continue;
            else if(arr[i]==15) arr[i]=arr[i+inc2];
            else if(arr[i+inc2]==15) arr[i+inc2]=arr[i];
            else if(arr[i]!=arr[i+inc2]) found=0;
        }
        st=n-1,fn=-1,inc=-1,sto=k-1,inc2=-k;
    }
    for(ll i=0;i<k;i++){
        if(arr[i]==1) is++;
        else if(arr[i]==0) os++;
        else qs++;
    }
    if((is!=k/2&&is+qs<k/2)||(os!=k/2&&os+qs<k/2)) found=0;
    for(ll i=k;i<n;i++) if(arr[i]!=arr[i-k]) found=0;
    if(found) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    IO;
    cf
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