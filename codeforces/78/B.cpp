#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    vector<string> colors={"R","O","Y","G","B","I","V"};
    ll n;
    cin>>n;
    ll last=0;
    for(ll i=0;i<n;i++){
        if(n-i<4&&last<3) last=3;
        cout<<colors[last++];
        if(last==7) last=0;
    }
}

int main(){
    solve();
}
