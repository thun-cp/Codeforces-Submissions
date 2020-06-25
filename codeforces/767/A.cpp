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
    ll arr[100005];
    for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            arr[a]=i+1;
    }
    ll last=0;
    for(ll i=n;i>0;i--){
        ll d=arr[i];
        if(d>last){
            if(i!=n) cout<<endl;
            for(ll i=1;i<d-last;i++) cout<<endl;
            cout<<i<<' ';
            last=d;
        }else cout<<i<<' ';

    }
}

int main(){
    solve();
}
