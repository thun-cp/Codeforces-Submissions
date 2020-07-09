#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll s=-1,f=-1;
    for(ll i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                if(s==-1) s=i;
                if(i==n-1) f=n;
            }else{
                if(f==-1&&s!=-1) f=i;
            }
    }
    reverse(arr+s-1,arr+f);
    if(is_sorted(arr,arr+n)&&s==-1) s=1,f=1;
    if(is_sorted(arr,arr+n)) cout<<"yes\n"<<s<<' '<<f<<endl;
    else cout<<"no"<<endl;
}

int main(){
    solve();
}
