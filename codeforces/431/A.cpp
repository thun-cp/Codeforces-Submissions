#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll cal[5];
    cin>>cal[1]>>cal[2]>>cal[3]>>cal[4];
    string s;
    cin>>s;
    ll ans=0;
    for(auto i:s){
        ll num=i-'0';
        ans+=cal[num];
    }
    cout<<ans<<endl;
}

int main(){
    solve();
}
