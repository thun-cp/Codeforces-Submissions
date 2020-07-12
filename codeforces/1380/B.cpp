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
    ll c1=count(s.begin(),s.end(),'R');
    ll c2=count(s.begin(),s.end(),'S');
    ll c3=count(s.begin(),s.end(),'P');
    if(c1==c2&&c2==c3) cout<<s<<endl;
    else{
        if(c1>=c2&&c1>=c3){
            for(ll i=0;i<s.length();i++) cout<<'P';
        }else if(c2>=c1&&c2>=c3){
            for(ll i=0;i<s.length();i++) cout<<'R';
        }else if(c3>=c1&&c3>=c2){
            for(ll i=0;i<s.length();i++) cout<<'S';
        }
        cout<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    solve();
}
