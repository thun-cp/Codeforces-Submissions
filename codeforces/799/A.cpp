#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    double n,t,k,d;
    cin>>n>>t>>k>>d;
    if(ceil(n/k)*t>(d+t)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    solve();
}
