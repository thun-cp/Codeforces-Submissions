#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    ll found=0;
    ll a,b,c,d;
    for(ll x=1;x<=9;x++){
        if(found) break;
        for(ll y=1;y<=9;y++){
            if(found) break;
            for(ll z=1;z<=9;z++){
                if(found) break;
                for(ll q=1;q<=9;q++){
                    if(x==y||x==z||x==q||y==z||y==q||z==q) continue;
                    if(x+y==r1&&z+q==r2){
                        if(x+q==d1&&y+z==d2){
                            if(x+z==c1&&y+q==c2){
                                a=x,b=y,c=z,d=q;
                                found=1;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    if(found) cout<<a<<' '<<b<<endl<<c<<' '<<d<<endl;
    else cout<<-1<<endl;
}

int main(){
    solve();
}
