#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int n,t,k,i;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll sub=1;
        while(k>1){
            if(n>sub) n-=sub;
            else break;
            sub+=2;
            k--;
        }
        if(n%2==1&&k==1&&n>=sub) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
