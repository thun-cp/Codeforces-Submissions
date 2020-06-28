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
    ll ans=0;
    while(n--){
        string s;
        cin>>s;
        if(s=="Tetrahedron") ans+=4;
        else if(s=="Cube") ans+=6;
        else if(s=="Octahedron") ans+=8;
        else if(s=="Dodecahedron") ans+=12;
        else ans+=20;
    }
    cout<<ans<<endl;
}

int main(){
    solve();
}
