#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,m;
    cin>>n>>m;
    vector<string> w1,w2;
    for(ll i=0;i<n;i++){
        string s1;
        cin>>s1;
        w1.push_back(s1);
    }
    for(ll i=0;i<m;i++){
        string s1;
        cin>>s1;
        w2.push_back(s1);
    }
    ll f=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(w1[i]==w2[j]){
               if(f==0){
                w2.erase(w2.begin()+j);
                m--;
                j--;
                f=1;
               }else{
                w1.erase(w1.begin()+i);
                n--;
                i--;
                f=0;
               }
            }
        }
    }
    if(w1.size()>w2.size()) cout<<"YES";
    else cout<<"NO";
}
