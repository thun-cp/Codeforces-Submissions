#include <iostream>
using namespace std;
typedef long long ll;

ll dp[100005];
ll arr[100005];

int main(){
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++) cin>>arr[i];
    dp[0]=1;
    for(ll i=1;i<n;i++){
        if(arr[i]>=arr[i-1]) dp[i]=dp[i-1]+1;
        else dp[i]=1;
    }
    ll ans=0;
    for(auto i:dp) ans=max(ans,i);
    cout<<ans;
}
