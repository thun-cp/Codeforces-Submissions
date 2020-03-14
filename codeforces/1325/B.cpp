#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        ll c;
        cin>>c;
        set<ll> s;
        for(ll e=0;e<c;e++){
            ll a;
            cin>>a;
            s.insert(a);
        }
        cout<<s.size()<<endl;
    }
}
