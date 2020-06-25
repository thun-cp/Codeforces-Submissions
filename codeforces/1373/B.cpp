#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    string s;
    cin>>s;
    ll n1=0,n2=0;
    ll c=1;
    for(ll i=1;i<=s.size();i++){
        if(s[i]!=s[i-1]||i==s.size()){
            if(s[i-1]=='0') n1+=c;
            else n2+=c;
            c=0;
        }
        c++;
    }
    ll pairs=min(n1,n2);
    if(pairs%2==1) cout<<"DA"<<endl;
    else cout<<"NET"<<endl;

}

int main(){
    ll t;
    cin>>t;
    while(t--) solve();
}
