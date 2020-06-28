#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll l,r;
    cin>>l>>r;
    if(r-l>2){
        if(l%2==0) cout<<l<<' '<<l+1<<' '<<l+2<<endl;
        else cout<<l+1<<' '<<l+2<<' '<<l+3<<endl;
    }else if(r-l==2){
        if(l%2==0) cout<<l<<' '<<l+1<<' '<<l+2<<endl;
        else cout<<-1<<endl;
    }
    else cout<<-1<<endl;
}

int main(){
    solve();
}
