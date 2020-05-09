#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s=to_string(n);
        vector<ll> v;
        reverse(s.begin(),s.end());
        for(ll i=0;i<s.size();i++){
            if(s[i]!='0') v.push_back((s[i]-'0')*pow(10,i));
        }
        cout<<v.size()<<endl;
        for(ll i=0;i<v.size();i++) cout<<v[i]<<' ';
        cout<<endl;
    }
}
