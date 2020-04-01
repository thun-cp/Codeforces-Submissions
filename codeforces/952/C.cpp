#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    ll arr[n+5];
    bool found=1;
    cin>>arr[0];
    for(ll i=1;i<n;i++){
            cin>>arr[i];
            if(abs(arr[i]-arr[i-1])>1) found=0;
    }
    sort(arr,arr+n);
    for(ll i=1;i<n;i++) if(abs(arr[i]-arr[i-1])>1) found=0;
    if(found) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
