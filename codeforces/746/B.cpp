#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;
void decode(string &s){
    string str;
    while(s.size()!=0){
        ll mid;
        if(s.size()%2==1) str+=s[0];
        else str=s[0]+str;
        s.erase(0,1);
    }
    s=str;
}
void solve(){
    ll n;
    string s;
    cin>>n>>s;
    //decode(s);
    decode(s);
    cout<<s<<endl;
}

int main(){
    solve();
}
