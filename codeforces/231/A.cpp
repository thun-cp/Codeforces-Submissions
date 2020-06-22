#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ll n;
    cin>>n;
    ll ans=0;
    while(n--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2) ans++;
    }
    cout<<ans;

}
