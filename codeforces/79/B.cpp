#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n,m,k,t;
    cin>>n>>m>>k>>t;
    vector<ll> arr;
    ll k1=k;
    while(k1--){
        ll x,y;
        cin>>x>>y;
        arr.pb((x-1)*m+y);
    }
    sort(arr.begin(),arr.end());
    while(t--){
        ll x,y;
        cin>>x>>y;
        ll wc=0;
        ll co=(x-1)*m+y;
        ll found=LONG_MAX;
        for(ll i=0;i<k;i++){
            if(arr[i]<co) wc++;
            else if(arr[i]==co){found=-1;break;}
            else break;
        }
        if(found!=-1) found=(co-wc)%3;
        if(found==-1) cout<<"Waste"<<endl;
        else if(found==1) cout<<"Carrots"<<endl;
        else if(found==2) cout<<"Kiwis"<<endl;
        else cout<<"Grapes"<<endl;
    }
}

int main(){
    solve();
}
