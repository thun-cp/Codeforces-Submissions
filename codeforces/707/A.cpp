#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n,m;
    cin>>n>>m;
    ll color=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            char c;
            cin>>c;
            if(c=='C'||c=='Y'||c=='M') color=1;
        }
    }
    if(color) cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;
}

int main(){
    solve();
}
