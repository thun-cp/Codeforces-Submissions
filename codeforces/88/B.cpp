#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n,m,x;
    cin>>n>>m>>x;
    vector<pair<ll,ll>> shift;
    unordered_map<char,vector<pair<ll,ll>>> key;
    for(ll i=1;i<=n;i++){
        string s;
        cin>>s;
        for(ll j=1;j<=m;j++){
            if(s[j-1]=='S') shift.pb({i,j});
            else{
                key[s[j-1]].pb({i,j});
            }
        }
    }
    ll q;
    cin>>q;
    ll ans=0;
    string s;
    cin>>s;
    unordered_map<char,ll> cdist;
    for(char ch='a';ch<='z';ch++){
            ll dist=LONG_MAX;
            if(key.find(ch)==key.end()) continue;
            for(ll z=0;z<key[ch].size();z++){
            pair<ll,ll> keyc=key[ch][z];
            for(auto j:shift) dist=min(dist,(j.first-keyc.first)*(j.first-keyc.first)+(j.second-keyc.second)*(j.second-keyc.second));
            }
            cdist[ch]=dist;
    }
    for(ll i=0;i<q;i++){
        if(islower(s[i])){
            if(key.find(s[i])!=key.end()) continue;
            else{
                ans=-1;
                break;
            }
        }else{
            if(shift.empty()||key.find(tolower(s[i]))==key.end()){
                ans=-1;
                break;
            }else{
                ll dist=cdist[tolower(s[i])];
                if(dist<=x*x) continue;
                else ans++;
            }
            }
        }
    cout<<ans<<endl;

}

int main(){
    solve();
}
