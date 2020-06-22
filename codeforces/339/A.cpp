#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    string s;
    cin>>s;
    vector<char> vec;
    for(auto i:s){
        if(isalnum(i)) vec.pb(i);
    }
    sort(vec.begin(),vec.end());
    string str;
    for(ll i=0;i<vec.size();i++){
        cout<<vec[i];
        if(i<vec.size()-1) cout<<'+';
    }
}

int main(){
    solve();
}
