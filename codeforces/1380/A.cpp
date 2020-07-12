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
    ll inc[n],dec[n];
    inc[0]=arr[0],dec[n-1]=arr[n-1];
    for(ll i=1;i<n;i++){
        inc[i]=min(inc[i-1],arr[i]);
    }
    for(ll i=n-2;i>=0;i--){
        dec[i]=min(dec[i+1],arr[i]);
    }
    ll found=0;
    ll ind1,ind2,ind3;
    for(ll i=1;i<n-1;i++){
        if(inc[i-1]<arr[i]&&dec[i+1]<arr[i]){
                found=1;
                ind1=i;
                ind2=find(arr,arr+i,inc[i-1])-arr;
                ind3=find(arr+i+1,arr+n,dec[i+1])-arr;
                break;
        }
    }
    if(found){
        cout<<"YES"<<endl;
        cout<<ind2+1<<' '<<ind1+1<<' '<<ind3+1<<endl;
    }else cout<<"NO"<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    solve();
}
