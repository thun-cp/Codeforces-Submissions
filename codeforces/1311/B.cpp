#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll arr[100005];
ll p[100005];
void swapp(ll &a, ll &b){
    ll c=a;
    a=b;
    b=c;
}
int main(){
    ll t;
    cin>>t;
    while(t>0){
    ll n,m;
    cin>>n>>m;
    ll arr[n+5];
    ll p[m+5];
    for(ll i=0;i<n;i++) cin>>arr[i];
    for(ll i=0;i<m;i++) cin>>p[i];
    for(ll i=0;i<1000;i++){
        for(ll j=0;j<m;j++){
            if(arr[p[j]-1]>arr[p[j]]) swapp(arr[p[j]-1],arr[p[j]]);
        }
    }
    if(is_sorted(arr,arr+n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    t--;
    }
}
