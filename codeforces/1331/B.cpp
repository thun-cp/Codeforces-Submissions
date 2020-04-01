#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isprime(ll n){
    if(n<=1) return false;
    if(n==2) return true;
    for(ll i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    ll n;
    cin>>n;
    string s;
    while(n!=1){
    for(ll i=2;i<=n;i++){
        if(isprime(i)&&n%i==0){
            s+=to_string(i);
            n/=i;
            continue;
        }
    }
    }
    cout<<s<<endl;
}
