#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n,m;
    cin>>n>>m;
    ll arr[n][m];
    ll found=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>arr[i][j];
            ll temp=0; if(i-1>=0) temp++; if(i+1<n) temp++; if(j+1<m) temp++; if(j-1>=0) temp++;
            if(!found&&arr[i][j]>temp) found=1;
        }
    }
    if(found) cout<<"NO"<<endl;
    else{
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ll temp=0; if(i-1>=0) temp++; if(i+1<n) temp++; if(j+1<m) temp++; if(j-1>=0) temp++;
            cout<<temp<<" ";
        }cout<<endl;
    }
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    solve();
}
