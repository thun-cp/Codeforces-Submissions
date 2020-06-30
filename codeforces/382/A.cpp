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
    ll found=0;
    for(ll i=0;i<s.length();i++){
        if(s[i]=='|'){
            found=i;
            break;
        }
    }
    string l=s.substr(0,found),r=s.substr(found+1);
    string str;
    cin>>str;
    for(auto i:str){
        if(l.length()<r.length()) l+=i;
        else r+=i;
    }
    if(l.length()==r.length()) cout<<l<<'|'<<r<<endl;
    else cout<<"Impossible"<<endl;
}

int main(){
    solve();
}
