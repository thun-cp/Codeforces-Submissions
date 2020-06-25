#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    string s1,s2;
    cin>>s1>>s2;
    ll ans1=0,ans2=0;
    if(s1==s2) cout<<-1<<endl;
    else cout<<max(s1.length(),s2.length())<<endl;
}

int main(){
    solve();
}
