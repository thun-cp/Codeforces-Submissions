#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll arr[100];
    for(ll i=0;i<100;i++) arr[i]=0;
    for(ll i=2;i<100;i++){
        for(ll j=i*2;j<=100;j+=i) arr[j]=1;
    }
    ll n,m;
    cin>>n>>m;
    ll found=0;
    for(ll i=n+1;i<55;i++){
        if(arr[i]==0){
            if(i==m) found=1;
            else found=0;
            break;
        }
    }
    if(found) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    solve();
}
