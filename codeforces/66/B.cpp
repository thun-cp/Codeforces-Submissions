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
    inc[0]=1,dec[n-1]=1;
    for(ll i=1;i<n;i++){
        if(arr[i]>=arr[i-1]) inc[i]=inc[i-1]+1;
        else inc[i]=1;
    }
    for(ll i=n-2;i>=0;i--){
        if(arr[i]>=arr[i+1]) dec[i]=dec[i+1]+1;
        else dec[i]=1;
    }
    ll in=0;
    for(ll i=1;i<n;i++){
        if(inc[i]+dec[i]>inc[in]+dec[in]) in=i;
    }
    cout<<inc[in]+dec[in]-1<<endl;
}

int main(){
    solve();
}
