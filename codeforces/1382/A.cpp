#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
#define F first
#define S second
#define cf ll testcases;cin>>testcases;while(testcases--)
using namespace std;
typedef long long ll;
typedef long double ld;
int dx[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};
void solve(){
    ll n,m;
    cin>>n>>m;
    map<ll,ll> arr;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        arr[a]=1;
    }
    ll ans=-1;
    for(ll i=0;i<m;i++){
        ll a;
        cin>>a;
        if(arr[a]==1){
            ans=a;
        }
    }
    if(ans==-1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl<<1<<' '<<ans<<endl;
}

int main(){
    cf
    solve();
}
