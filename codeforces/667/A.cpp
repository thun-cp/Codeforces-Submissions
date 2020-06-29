#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ld d,h,v,e;
    cin>>d>>h>>v>>e;
    d/=2;
    ld pi=acos(-1);
    ld ar=(pi*d*d);
    ld vol=ar*h;
    ld rsp=ar*e;
    if(rsp>=v) cout<<"NO";
    else{
        cout<<"YES"<<endl;
        cout.precision(12);
        cout<<vol/(v-rsp)<<endl;
    }
}

int main(){
    solve();
}
