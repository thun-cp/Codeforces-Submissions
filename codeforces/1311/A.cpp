#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ll t;
    cin>>t;
    while(t>0){
        ll a,b;
        cin>>a>>b;
        if(a==b) cout<<0<<endl;
        else if(a>b){
            if((a-b)%2==1) cout<<2<<endl;
            else cout<<1<<endl;
        }else if(b>a){
            if((b-a)%2==1) cout<<1<<endl;
            else cout<<2<<endl;
        }
        t--;
    }

}
