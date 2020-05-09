#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n%k==0){
            cout<<"YES"<<endl;
            for(ll i=0;i<k;i++) cout<<n/k<<' ';
            cout<<endl;
        }
        else if(n%2==0){
                bool found=false;
                if((n-(k-1)*2)%2==0&&(n-(k-1)*2)>0){
                    cout<<"YES"<<endl;
                    for(ll i=0;i<k-1;i++) cout<<2<<' ';
                    cout<<(n-(k-1)*2)<<endl;
                     found=true;
                }else if((n-(k-1)*1)%2==1&&(n-(k-1)*1)>0){
                    cout<<"YES"<<endl;
                    for(ll i=0;i<k-1;i++) cout<<1<<' ';
                    cout<<(n-(k-1)*1)<<endl;
                    found=true;
                }
                if(!found) cout<<"NO"<<endl;
        }else{
            if(((n-(k-1)*1)%2==0)||(n-(k-1)*1)<0) cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                for(ll i=0;i<k-1;i++) cout<<1<<' ';
                cout<<(n-(k-1)*1)<<endl;
            }
        }
    }
}
