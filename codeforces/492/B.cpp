#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n,l;
    cin>>n>>l;
    vector<ld> arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    ld ma=LONG_MIN;
    for(ll i=1;i<arr.size();i++) ma=max(ma,arr[i]-arr[i-1]);
    cout.precision(9);
    cout<<fixed<<max(ma/2.0,max(arr[0],l-arr[n-1]))<<endl;
}

int main(){
    solve();
}
