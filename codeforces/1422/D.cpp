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

ll comp(pair<ll,pair<ll,ll>> a,pair<ll,pair<ll,ll>> b){
    return a.S.F<b.S.F;
}

void solve(){
    ll n,m;
    cin>>n>>m;
    ll sx,sy,fx,fy;
    cin>>sx>>sy>>fx>>fy;
    vector<pair<ll,pair<ll,ll>>> tp(m);
    for(ll i=1;i<=m;i++){
        ll x,y;
        cin>>x>>y;
        tp[i-1]={x,{y,i}};
    }
    vector<vp> adj(100005);
    sort(all(tp));
    for(ll i=0;i<m-1;i++){
        ll val=tp[i+1].F-tp[i].F;
        adj[tp[i].S.S].pb({val,tp[i+1].S.S});
        adj[tp[i+1].S.S].pb({val,tp[i].S.S});
    }
    sort(all(tp),comp);
    for(ll i=0;i<m-1;i++){
        ll val=tp[i+1].S.F-tp[i].S.F;
        adj[tp[i].S.S].pb({val,tp[i+1].S.S});
        adj[tp[i+1].S.S].pb({val,tp[i].S.S});
    }
    for(ll i=0;i<m;i++){
        ll val=min(abs(tp[i].F-sx),abs(tp[i].S.F-sy));
        adj[0].pb({val,tp[i].S.S});
        adj[tp[i].S.S].pb({val,0});
        ll val2=abs(tp[i].F-fx)+abs(tp[i].S.F-fy);
        adj[m+1].pb({val2,tp[i].S.S});
        adj[tp[i].S.S].pb({val2,m+1});
    }
    ll val=abs(fx-sx)+abs(fy-sy);
    adj[0].pb({val,m+1});
    adj[m+1].pb({val,0});
    vi dis(m+2,LLONG_MAX);
    dis[0]=0;
    set<pair<ll,ll>> q;
    q.insert({0,0});
    while(!q.empty()){
        auto u=*q.begin();
        q.erase(u);
        for(auto v:adj[u.S]){
            if(dis[v.S]>u.F+v.F){
                q.erase({dis[v.S],v.S});
                dis[v.S]=u.F+v.F;
                q.insert({dis[v.S],v.S});
            }
        }
    }
    // for(ll i=0;i<m+2;i++){
    //     cou<<adj[i]<<endl;
    // }
    //cout<<dis<<endl;
    cout<<dis[m+1]<<endl;
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