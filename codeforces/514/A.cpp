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
    ll num=0;
    ll m=0;
    while(n>0){
            ll dig=n%10;
            if(dig>=5&&n!=9) dig=9-dig;
            for(ll i=0;i<m;i++) dig*=10;
            m++;
            num+=dig;
            n/=10;
    }
        cout<<num<<endl;
}

int main(){
    solve();
}
