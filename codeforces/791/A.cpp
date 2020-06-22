#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ll a,b;
    cin>>a>>b;
    ll n=0;
    while(a<=b){
        n++;
        a*=3;
        b*=2;
    }
    cout<<n<<endl;

}
