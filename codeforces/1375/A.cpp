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
    for(ll i=1;i<n;i++){
        if((arr[i-1]>0&&arr[i]>0)||(arr[i-1]<0&&arr[i]<0)) arr[i]=-arr[i];
        if(i>1){
        if(!arr[i-1]&&arr[i-2]<0&&arr[i]>0) arr[i]=-arr[i];
        if(!arr[i-1]&&arr[i-2]>0&&arr[i]<0) arr[i]=-arr[i];
        }
    }
    for(ll i=0;i<n;i++) cout<<arr[i]<<' ';
    cout<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    solve();
}
