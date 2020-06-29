#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll a;
    cin>>a;
    ll ext=180-a;
    if(360%ext==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    solve();
}
