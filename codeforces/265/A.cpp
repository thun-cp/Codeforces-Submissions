#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    string s,t;
    cin>>s>>t;
    ll pos=0;
    for(ll i=0;i<t.size();i++){
        if(s[pos]==t[i]) pos++;
    }
    cout<<pos+1<<endl;
}

int main(){
    solve();
}
