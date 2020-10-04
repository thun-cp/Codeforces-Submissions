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

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<vi> arr(n,vi(m,0));
    cin>>arr;
    ll ans=0;
    for(ll i=0;i<(n+1)/2;i++){
        for(ll j=0;j<(m+1)/2;j++){
           ll a=i,b=j,c=n-i-1,d=m-j-1;
           if(a==c&&b==d) continue;
           if(a==c||b==d){
               ans+=abs(arr[a][b]-arr[c][d]);
               continue;
           }
           ll ans1=abs(arr[a][d]-arr[a][b])+abs(arr[c][b]-arr[a][b])+abs(arr[c][d]-arr[a][b]);
           ll ans2=abs(arr[a][d]-arr[a][b])+abs(arr[c][b]-arr[a][d])+abs(arr[c][d]-arr[a][d]);
           ll ans3=abs(arr[a][d]-arr[c][b])+abs(arr[c][b]-arr[a][b])+abs(arr[c][d]-arr[c][b]);
           ll ans4=abs(arr[a][d]-arr[c][d])+abs(arr[c][b]-arr[c][d])+abs(arr[c][d]-arr[a][b]);
           ans+=min({ans1,ans2,ans3,ans4});
        }
    }
    cout<<ans<<endl;
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
