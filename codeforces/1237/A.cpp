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
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll t=1;
    ll ans=0;
    for(ll i=0;i<n;i++){
        if(arr[i]%2==0) arr[i]/=2;
        else{
            if(t){
                    arr[i]=ceil(arr[i]/2.0);
            }else{
                arr[i]=floor(arr[i]/2.0);
            }
            t=1-t;
        }
        cout<<arr[i]<<endl;
}
}

int main(){
    solve();
}
