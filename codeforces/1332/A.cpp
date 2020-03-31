#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll x,y,x1,y1,x2,y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        bool found=true;
        if(x1==x2){
        if(x-1<x1&&a>0) found=false;
        if(x+1>x2&&b>0) found=false;
        }
        if(y1==y2){
        if(y-1<y1&&c>0) found=false;
        if(y+1>y2&&d>0) found=false;
        }
        if(a>b){
            ll dif=a-b;
            if(x-dif<x1) found=false;
            a-=b;
            b=0;
        }else{
            ll dif=b-a;
            if(x+dif>x2) found=false;
            b-=a;
            a=0;
        }
        if(c>d){
            ll dif=c-d;
            if(y-dif<y1) found=false;
            c-=d;
            d=0;
        }else{
            ll dif=d-c;
            if(y+dif>y2) found=false;
            d-=c;
            c=0;
        }
        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
