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
ll n,m,k;
vector<vi> arr(1005,vi(1005,0));
vector<vi> vis(1005,vi(1005,0));
ll cnt=0;
void fil(ll x,ll y){
    if(x<0||x>n||y<0||y>m) return;
    if(vis[x][y]==-7) return;
    if(arr[x][y]==1){
        cnt++;
        return;
    }
    vis[x][y]=-7;
    fil(x+1,y);
    fil(x-1,y);
    fil(x,y-1);
    fil(x,y+1);
}
void fil2(ll x,ll y){
    if(x<0||x>n||y<0||y>m) return;
    if(vis[x][y]==-7){
        vis[x][y]=cnt;
    }else return;
    if(arr[x][y]==1) return;
    fil2(x+1,y);
    fil2(x-1,y);
    fil2(x,y-1);
    fil2(x,y+1);
}
void solve(){
    cin>>n>>m>>k;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            char c;
            cin>>c;
            if(c=='*') arr[i][j]=1;
        }
    }
    while(k--){
        ll a,b;
        cin>>a>>b;
        a--;b--;
        if(vis[a][b]!=0) cout<<vis[a][b]<<endl;
        else{
            fil(a,b);
            fil2(a,b);
            cnt=0;
            cout<<vis[a][b]<<endl;
        }
    }
    // for(ll i=0;i<n;i++){
    //     for(ll j=0;j<m;j++) cout<<vis[i][j]<<' ';
    //     cout<<endl;
    // }
}

int main(){
    IO;
    // cf
    solve();
    return 0;
}


template<typename A, typename B> ostream& operator<<(ostream &cout, pair<A, B> const &p) { 
    if(dbg){dbg=0;
        return cout << "(" << p.F << ", " << p.S << ")"; 
    }else{
        return cout<<p.F<<' '<<p.S;
    }
        }
template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v) {
    if(dbg){dbg=0;
        cout << "["; for(ll i = 0; i < v.size(); i++) {if (i) cout << ", "; cout << v[i];} return cout << "]";
    }else{
        for(ll i=0;i<v.size()-1;i++) cout<<v[i]<<' ';
        return cout<<v[v.size()-1];
    }
}
template<typename A, typename B> istream& operator>>(istream& cin, pair<A, B> &p) {
   cin >> p.first;
   return cin >> p.second;
}
template<typename A> istream& operator>>(istream& cin, vector<A> &v) {
   for(ll i=0;i<v.size()-1;i++) cin>>v[i];
   return cin >> v[v.size()-1];
}