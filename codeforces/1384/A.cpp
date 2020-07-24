#include "bits/stdc++.h"
#define pb push_back
#define mp make_pair
#define mt make_tuple
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
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    string s="njxldwgtvbkcxzvsrazbwyqrxaehlakbrzkagahxqrldjikmvnj";
    cout<<s<<endl;
    char c='a';
    for(ll i=0;i<n;i++){
        string s1=s.substr(0,arr[i]);
        while(s1.size()!=s.size()){
              while(c==s[s1.size()]) c=char('a'+rand()%26);
              s1+=c;
        }
        cout<<s1<<endl;
        s=s1;
    }
}

int main(){
    cf{
    solve();
    }
}