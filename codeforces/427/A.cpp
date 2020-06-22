#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n;
    cin>>n;
    ll ans=0;
    ll po=0;
    while(n--){
        ll a;
        cin>>a;
        if(a==-1){
            if(po>0){
                po--;
            }else ans++;
        }else po+=a;
    }
    cout<<ans<<endl;
}

int main(){
    solve();
}
