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
    ll arr[n+1];
    arr[0]=0;
    for(ll i=1;i<=n;i++) cin>>arr[i];
    ll en=0;
    ll mon=0;
    for(ll i=1;i<=n;i++){
        ll dif=arr[i]-arr[i-1];
        if(dif>0){
        if(en>dif){
            en-=dif;
            dif=0;
        }else{
            dif-=en;
            en=0;
        }
        mon+=dif;
        }else if(dif<0) en-=dif;
    }
    cout<<mon<<endl;
}

int main(){
    solve();
}
