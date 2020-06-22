#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    for(ll i=0;i<s1.size();i++) s1[i]=tolower(s1[i]);
    for(ll i=0;i<s2.size();i++) s2[i]=tolower(s2[i]);
    if(s1<s2) cout<<-1<<endl;
    else if(s1>s2) cout<<1<<endl;
    else cout<<0<<endl;
}
