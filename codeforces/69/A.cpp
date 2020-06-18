#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ll n;
    cin>>n;
    ll x=0,y=0,z=0;
    while(n--){
        ll a,b,c;
        cin>>a>>b>>c;
        x+=a;
        y+=b;
        z+=c;
    }
    if(x==0&&y==0&&z==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}
