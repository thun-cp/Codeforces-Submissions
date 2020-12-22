#include "bits/stdc++.h" 
using namespace std; 
typedef long long ll;
typedef long double ld; 


int main(){
    ll n,m; 
    cin>>n>>m; 
    ll maxc=n-(m-1);
    ll ma=maxc*(maxc-1)/2;
    ll cnt1=(n/m+1);
    ll cnt2=(n/m);
    ll ans=(n%m)*cnt1*(cnt1-1)/2+(m-n%m)*cnt2*(cnt2-1)/2;
    cout<<ans<<' '<<maxc*(maxc-1)/2<<endl;
} 