#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n;
    cin>>n;
    map<string,ll> m;
    for(ll i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    if((*m.begin()).second<(*m.rbegin()).second) cout<<(*m.rbegin()).first<<endl;
    else cout<<(*m.begin()).first<<endl;
}

int main(){
    solve();
}
