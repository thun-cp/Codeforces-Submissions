#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll c=n*(n-1.0)/2.0;
        ll num=1,co=1;
        while(co<c&&co<k){
            num++;
            co+=num;
        }
        co-=num;
        k=k-co;
        string s;
        for(ll i=0;i<n;i++){
            if(i==n-num-1) s+='b';
            else if(i==n-k) s+='b';
            else s+='a';
        }
        cout<<s<<endl;
    }
}
