#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ll x,y;
    for(ll i=0;i<5;i++){
        for(ll j=0;j<5;j++){
            ll a;
            cin>>a;
            if(a) x=i+1,y=j+1;
        }
    }
    cout<<abs(3-x)+abs(3-y)<<endl;

}
