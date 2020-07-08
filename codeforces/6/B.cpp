#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;
void solve(){
    ll n,m;
    char c;
    cin>>n>>m>>c;
    char arr[105][105];
    for(ll i=0;i<n;i++){
        string s;
        cin>>s;
        for(ll j=0;j<m;j++) arr[i][j]=s[j];
    }
    map<char,ll> vis;
    vis[c]=1;
    ll ans=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(arr[i][j]==c){
                for(ll x=-1;x<=1;x++){
                    for(ll y=-1;y<=1;y++){
                        if(x&&y) continue;
                        if(abs(x)==abs(y)) continue;
                        if(arr[i+x][j+y]=='.') continue;
                        if(i+x<0||i+x>=n||j+y<0||j+y>=m) continue;
                        if(!vis[arr[i+x][j+y]]){
                        vis[arr[i+x][j+y]]=1;
                        ans++;
                        }
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    solve();
}
