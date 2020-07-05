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
    ll ans=0;
    while(s.length()!=1){
        ans++;
        ll sum=0;
        for(auto i:s){
            sum+=i-'0';
        }
        s=to_string(sum);
    }
    cout<<ans<<endl;
}

int main(){
    solve();
}
