#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    string s;
    getline(cin,s);
    set<char> se;
    for(auto i:s){
        if(isalpha(i)) se.insert(i);
    }
    cout<<se.size()<<endl;
}

int main(){
    solve();
}
