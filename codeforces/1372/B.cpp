#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

ll lcm(ll a,ll b){
    return (a*b)/(__gcd(a,b));
}
void solve(){
    ll n;
    cin>>n;
    ll num=-1;
    for(ll i=2;i<=sqrt(n);i++){
            if(n%i==0){
                    num=i;
                    break;
            }
    }
    if(num==-1) cout<<1<<' '<<n-1<<endl;
    else{
        cout<<n/num<<' '<<n-n/num<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    solve();
}
