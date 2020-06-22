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
    while(n--){
        string s;
        cin>>s;
        if(s.size()<=10) cout<<s<<endl;
        else{
            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
        }
    }
}

int main(){
    solve();
}
