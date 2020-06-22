#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n;
    cin>>n;
    string str;
    cin>>str;
    ll ans=0;
    ll i=1;
    while(i<str.size()){
        if(str[i]==str[i-1]){
            str.erase(i,1);
            ans++;
        }else i++;
    }
    cout<<ans<<endl;
}

int main(){
    solve();
}
