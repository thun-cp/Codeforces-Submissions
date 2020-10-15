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
    ll ans=-1;
    ll c=0;
    while(n){
        if(n==1) ans=c;
        if(n%6==0){
            n/=6;
            c++;
        }else if(n%3==0){
            n/=3;
            c+=2;
        }else break;
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    solve();
}