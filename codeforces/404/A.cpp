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
    set<char> diag;
    set<char> sect;
    for(ll i=0;i<n;i++){
        string s;
        cin>>s;
        for(ll j=0;j<n;j++){
            if(i==j||i==n-j-1) diag.insert(s[j]);
            else sect.insert(s[j]);
        }
    }
    if(diag.size()==1&&sect.size()==1&&*diag.begin()!=*sect.begin()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    solve();
}
