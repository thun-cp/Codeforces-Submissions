#include "bits/stdc++.h"
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define endl '\n'
#define F first
#define S second
#define IO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define cf ll testcases;cin>>testcases;while(testcases--)
#define prn(x) if(x) cout<<"YES"<<endl; else cout<<"NO"<<endl;
using namespace std;
typedef long long ll;
typedef long double ld;
int dx[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};
ld qu1=0,qu=0;
ll num1=0,num2=0;
void solve1(ll k=0, ll num=num2){
    if(k==qu){
        if(num==num1) qu1++;
        return;
    }
    solve1(k+1,num+1);
    solve1(k+1,num-1);
}
void solve(){
    string s1,s2;
    cin>>s1>>s2;
    for(auto i:s1){
        if(i=='+') num1++;
        else num1--;
    }
    for(ll j=0;j<s2.length();j++){
        char i=s2[j];
        if(i=='+') num2++;
        else if(i=='-') num2--;
        else{
            qu++;
        }
    }
    cout.precision(12);
    solve1();
    if(abs(num1-num2)>qu) cout<<fixed<<ld(0)<<endl;
    else if(num1==num2&&qu==0) cout<<fixed<<ld(1)<<endl;
    else cout<<fixed<<qu1/ld(pow(2,qu))<<endl;
}

int main(){
    IO;
    solve();
    return 0;
}