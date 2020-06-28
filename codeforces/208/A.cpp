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
    string str;
    ll last=0;
    for(ll i=0;i<s.length();i++){
        if(s.length()-i>2&&s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
                if(i!=0&&!last) str+=' ';
                i+=2;
                last=1;
        }
        else{
                str+=s[i];
                last=0;
        }
    }
    cout<<str<<endl;
}

int main(){
    solve();
}
