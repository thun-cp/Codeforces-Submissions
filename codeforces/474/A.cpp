#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    string key="qwertyuiopasdfghjkl;zxcvbnm,./";
    string lr,str;
    cin>>lr>>str;
    ll sh;
    if(lr=="L") sh=1;
    else sh=-1;
    string ne;
    for(auto i:str){
        ne+=key[key.find(i)+sh];
    }
    cout<<ne;
}

int main(){
    solve();
}
