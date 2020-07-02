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
    ll f=-1,l=-1;
    string s;
    cin>>s;
    for(ll i=0;i<n;i++){
        if(f==-1&&s[i]!='.') f=i+1;
        if(i>0&&s[i]!=s[i-1]&&s[i-1]!='.'){
            if(s[i-1]=='L'&&s[i]=='.') l=f-1;
            else if(s[i-1]=='L'&&s[i]=='R') l=i;
            else if(s[i-1]=='R'&&s[i]=='L') l=i;
            else if(s[i-1]=='R'&&s[i]=='.') l=i+1;
            break;
        }
    }
    cout<<f<<' '<<l<<endl;
}

int main(){
    solve();
}
