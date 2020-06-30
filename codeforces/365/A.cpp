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
    ll ans=0;
    set<ll> nums;
    for(ll i=0;i<=k;i++) nums.insert(i);
    while(n--)
    {
        string s;
        cin>>s;
        set<ll> nums1;
        for(auto i:s) if(i-'0'<=k) nums1.insert(i-'0');
        if(nums1==nums) ans++;
    }
    cout<<ans<<endl;
}

int main(){
    solve();
}
