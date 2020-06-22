#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    string s;
    cin>>s;
    ll p=0;
    ll ans=0;
    for(auto i:s){
        ll dif=abs(i-'a'-p);
        ans+=min(dif,26-dif);
        p=i-'a';
    }
    cout<<ans<<endl;
}

int main(){
    solve();
}
