#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
#define F first
#define S second
#define cf ll testcases;cin>>testcases;while(testcases--)
using namespace std;
typedef long long ll;
typedef long double ld;
int dx[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};
void solve(){
    ll n;
    cin>>n;
    ll c1=-1;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        if(a!=1&&c1==-1) c1=i;
    }
    if(c1%2==0) cout<<"First"<<endl;
    else if(c1==-1&&n%2==1) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
}

int main(){
    cf
    solve();
}
