#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n;
    string s;
    cin>>n>>s;
    vector<pair<ll,ll>> vec;
    ll c=1;
    for(ll i=1;i<=n;i++){
        if(s[i]!=s[i-1]||i==n){
            vec.pb({s[i-1]-'0',c});
            c=0;
        }
        c++;
    }
    while(true){
        bool changed=0;
        for(auto i=--vec.end();i!=vec.begin();i--){
            if((*i).first==1) continue;
            auto j=i;
            j--;
            ll n1=(*i).second,n2=(*j).second;
            if((*i).first==(*j).first){
                (*i).second+=(*j).second;
                vec.erase(j);
                changed=1;
            }else{
                if(n1>1) (*i).second=1;
                vec.erase(j);
                changed=1;
            }
        }
        if(!changed) break;
    }
    for(auto i:vec){
        for(ll j=0;j<i.second;j++){
            cout<<i.first;
        }
    }
    cout<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--) solve();
}
