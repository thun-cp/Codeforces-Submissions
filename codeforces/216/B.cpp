#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;
ll n,m;
vector<ll> arr[105];
ll visited[105];
ll color[105];
ll cycle[105];
void dfs(ll u,ll col){
    if(visited[u]) return;
    visited[u]=1;
    color[u]=col;
    for(auto i:arr[u]){
        if(!visited[i]) dfs(i,1-col);
        else if(color[u]==color[i]) cycle[i]=1;
    }
}
void solve(){
    cin>>n>>m;
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        arr[a-1].pb(b-1);
        arr[b-1].pb(a-1);
    }
    for(ll i=0;i<105;i++) color[i]=-1;
    ll co=0;
    for(ll i=0;i<n;i++){
        if(!visited[i]) dfs(i,0);
    }
    for(ll i=0;i<n;i++) if(cycle[i]) co++;
    co/=2;
    if(n%2!=co%2) co++;
    cout<<co<<endl;
}

int main(){
    solve();
}
