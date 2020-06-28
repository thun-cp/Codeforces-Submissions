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
    if(n==0) cout<<1<<endl;
    else{
        n%=4;
        if(n==0) cout<<6<<endl;
        else if(n==1) cout<<8<<endl;
        else if(n==2) cout<<4<<endl;
        else if(n==3) cout<<2<<endl;
    }
}

int main(){
    solve();
}
