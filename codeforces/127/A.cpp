#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n,k;
    cin>>n>>k;
    ld arr[n][2];
    ld dist=0;
    for(ll i=0;i<n;i++) cin>>arr[i][0]>>arr[i][1];
    for(ll i=1;i<n;i++){
        dist+=sqrt(pow(arr[i][0]-arr[i-1][0],2)+pow(arr[i][1]-arr[i-1][1],2));
    }
    dist/=50;
    dist*=k;
    cout.precision(9);
    cout<<fixed<<dist<<endl;
}

int main(){
    solve();
}
