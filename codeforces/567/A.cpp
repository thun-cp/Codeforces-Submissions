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
    for(ll i=0;i<n;i++){
        if(i==0) cout<<abs(arr[i]-arr[i+1])<<' '<<abs(arr[n-1]-arr[i])<<endl;
        else if(i==n) cout<<abs(arr[i]-arr[i-1])<<' '<<abs(arr[0]-arr[i])<<endl;
        else cout<<min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]))<<' '<<max(abs(arr[n-1]-arr[i]),abs(arr[0]-arr[i]))<<endl;

    }
}

int main(){
    solve();
}
