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
    map<ll,ll> m;
    for(auto i:s){
        m[tolower(i)-'a']=1;
    }
    ll ok=1;
    for(ll i=0;i<26;i++){
        if(!m[i]) ok=0;
    }
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    solve();
}
