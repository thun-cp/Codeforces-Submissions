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
    ll sum=0;
    for(ll i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
    }
    sort(arr,arr+n,greater<ll>());
    ll sum1=0;
    ll ans=0;
    for(auto i:arr){
        ans++;
        sum1+=i;
        sum-=i;
        if(sum1>sum) break;
    }
    cout<<ans<<endl;
}

int main(){
    solve();
}
