#include "bits/stdc++.h"
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define endl '\n'
#define F first
#define S second
#define IO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define cf ll testcases;cin>>testcases;while(testcases--)
using namespace std;
typedef long long ll;
typedef long double ld;
int dx[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};

void solve(){
    ll n;
    cin>>n;
    if(n>30){
            if(n-30==6){
                cout<<"YES\n"<<6<<" "<<10<<" "<<15<<" "<<n-31<<endl;
            }
            else if(n-30==10)
                cout<<"YES\n"<<6<<" "<<15<<" "<<14<<" "<<5<<endl;
            else if(n-30==14){
                cout<<"YES\n"<<6<<" "<<10<<" "<<15<<" "<<n-31<<endl;
            }
            else{
                cout<<"YES\n"<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;
            }
    } else cout<<"NO\n";
}

int main(){
    IO;
    cf
    solve();
    return 0;
}