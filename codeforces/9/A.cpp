#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll a,b;
    cin>>a>>b;
    ll m=max(a,b);
    if(m==6) cout<<"1/6"<<endl;
    else if(m==1) cout<<"1/1"<<endl;
    else if(m==2) cout<<"5/6"<<endl;
    else if(m==3) cout<<"2/3"<<endl;
    else if(m==4) cout<<"1/2"<<endl;
    else if(m==5) cout<<"1/3"<<endl;
}

int main(){
    solve();
}
