#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    map<char,ll> m;
    m['A']=3;m['B']=3;m['C']=3;
    if(s1[1]=='>') m[s1[2]]--;
    else m[s1[0]]--;
    if(s2[1]=='>') m[s2[2]]--;
    else m[s2[0]]--;
    if(s3[1]=='>') m[s3[2]]--;
    else m[s3[0]]--;
    map<ll,char> m2;
    for(auto i:m) if(i.second>0) m2[i.second]=i.first;
    if(m2.size()<3) cout<<"Impossible"<<endl;
    else for(auto i:m2) cout<<i.second;
}

int main(){
    solve();
}
