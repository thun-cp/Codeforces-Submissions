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
    if(n==1&&m==10) cout<<-1<<endl;
    else{
    cout<<m;
    for(ll i=0;i<n-to_string(m).length();i++) cout<<0;
    cout<<endl;
    }
}

int main(){
    solve();
}
