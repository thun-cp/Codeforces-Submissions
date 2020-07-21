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
void op(string &s,ll n){
    auto it=s.begin();
    for(ll i=0;i<=n;i++){
        s[i]=1-s[i]+'0'+'0';
        it++;
    }
    reverse(s.begin(),it);
}
void solve(){
    ll n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    vector<ll> ops;
    for(ll i=0;i<n;i++){
        if(s1[i]!=s2[i]){
                ops.pb(i+1);
        }
    }
    cout<<ops.size()*3<<' ';
    for(auto i:ops){
        cout<<i<<' '<<1<<' '<<i<<' ';
    }
    cout<<endl;
}

int main(){
    cf
    solve();
}
