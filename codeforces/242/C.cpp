#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define pb push_back
#define mp make_pair
#define endl '\n'
#define F first
#define S second
#define cf ll testcases;cin>>testcases;while(testcases--)
using namespace std;
typedef long long ll;
typedef long double ld;
int dx[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};
void solve(){
    ll x0,y0,x1,y1;
    cin>>x0>>y0>>x1>>y1;
    map<pair<ll,ll>,ll> cords;
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        ll r,a,b;
        cin>>r>>a>>b;
        for(ll j=a;j<=b;j++) cords[{r,j}]=1;
    }
    map<pair<ll,ll>,ll> vis;
    queue<tuple<ll,ll,ll>> q;
    q.push({x0,y0,0});
    ll ans=-1;
    vis[{x0,y0}]=1;
    while(!q.empty()){
        ll xt,yt,dist;
        tie(xt,yt,dist)=q.front();
        q.pop();
        if(xt==x1&&yt==y1){
            ans=dist;
            break;
        }
        for(ll i=0;i<8;i++){
            ll xt1=xt+dx[i],yt1=yt+dy[i];
            if(cords[{xt1,yt1}]){
                if(!vis[{xt1,yt1}]){
                    q.push({xt1,yt1,dist+1});
                    vis[{xt1,yt1}]=1;
                }
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    solve();
}
