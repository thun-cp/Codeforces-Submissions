#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n,k;
    cin>>n>>k;
    k--;
    if(n>k*(k+1)/2+1) cout<<-1<<endl;
    else{
        if(n==1) cout<<0<<endl;
        else{
            ll l=0,r=k;
            ll ans;
            while(l<=r){
                ll mid=(l+r)/2;
                if(k*(k+1)/2-mid*(mid+1)/2+1>=n){
                    l=mid+1;
                    ans=mid;
                }else r=mid-1;
            }
            cout<<k-ans<<endl;
        }
    }
}

int main(){
    solve();
}
