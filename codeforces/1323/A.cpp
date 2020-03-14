#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    for(ll p=0;p<n;p++){
        ll c;
        cin>>c;
        ll arr[c];
        for(ll i=0;i<c;i++){
            cin>>arr[i];
        }
        ll oi=-5;
        bool found=0;
        for(ll i=0;i<c;i++){
            if(arr[i]%2==0){
                cout<<1<<endl<<i+1<<endl;
                found=1;
                break;
            }else{
                if(oi>0){
                        cout<<2<<endl<<oi<<' '<<i+1<<endl;
                        found=1;
                        break;
                }
                else oi=i+1;
            }
        }
        if(!found) cout<<-1<<endl;
    }
}
