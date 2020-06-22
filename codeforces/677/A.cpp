#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ll n,h;
    cin>>n>>h;
    ll w=0;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        if(a>h) w+=2;
        else w+=1;
    }
    cout<<w<<endl;


}
