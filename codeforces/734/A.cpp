#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll a=0,b=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='A') a++;
        else b++;
    }
    if(a>b) cout<<"Anton";
    else if(a<b) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;


}
