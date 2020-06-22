#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll k,r;
    cin>>k>>r;
    for(ll i=1;i<10;i++){
        if((k*i)%10==r||(k*i)%10==0){
            cout<<i<<endl;
            break;
        }
    }
}

int main(){
    solve();
}
