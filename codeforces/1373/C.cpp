#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fi(set<ll>& s,ll a){
ll se=s.size();
s.insert(a);
if(s.size()>se) return 1;
return 0;

}

int main(){
ll t ;
cin >> t;
string s;
while(t--){
    ll f=1;
    ll in=0,res=0;
    cin>>s;
    set <ll > se;
    ll a[s.length()];
    res=s.length();
    if(s[0]=='-') a[0]=-1;
    else a[0]=1;
    for(ll i=1;i<s.length();i++){
        if(s[i]=='-') a[i]=a[i-1]-1;
        else a[i]=a[i-1]+1;
    }
    for(ll i=0;i<s.length();i++){
        if(fi (se,a[i])&&a[i]<0){
            se.insert(a[i]);
            res+=i+1;
        }
    }
    cout<<res<<endl;

}
return 0;
}
