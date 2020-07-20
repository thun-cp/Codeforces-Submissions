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

void solve(){
    ll n;
    cin>>n;
    ll fo=LONG_MAX,fmo=LONG_MAX;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(fo==LONG_MAX&&arr[i]==1) fo=i;
        if(fmo==LONG_MAX&&arr[i]==-1) fmo=i;
    }
    ll found=1;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        if(a<0&&fmo>i) found=0;
        else if(a>0&&fo>i) found=0;
        else if(a<-1&&fmo>=i) found=0;
        else if(a>1&&fo>=i) found=0;
        else if(a==0&&arr[i]<0&&fo>i) found=0;
        else if(a==0&&arr[i]>0&&fmo>i) found=0;
    }
    if(found) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    cf
    solve();
}
