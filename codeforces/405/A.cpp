#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    for(ll i=0;i<n;i++) cout<<arr[i]<<' ';


}
