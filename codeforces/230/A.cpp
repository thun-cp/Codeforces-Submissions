#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct dragon{
    ll p,b;
};
bool comp(dragon n1,dragon n2){
    return n1.p<n2.p;
}

int main(){
    ll s,n;
    cin>>s>>n;
    dragon arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i].p;
        cin>>arr[i].b;
    }
    sort(arr,arr+n,comp);
    bool won=1;
    for(ll i=0;i<n;i++){
        if(s>arr[i].p){
            s+=arr[i].b;
        }else if(s<=arr[i].p){
            won=0;
            break;
        }
    }
    if(won) cout<<"YES";
    else cout<<"NO";
}
