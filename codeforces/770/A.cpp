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
    string s;
    bool last=1;
    for(ll i=0;i<n-k+2;i++){
        if(last) s+='a';
        else s+='b';
        last=!last;
    }
    ll ch=ll('c');
    for(ll i=0;i<k-2;i++){
        s+=char(ch);
        ch++;
    }
    cout<<s<<endl;
}

int main(){
    solve();
}
