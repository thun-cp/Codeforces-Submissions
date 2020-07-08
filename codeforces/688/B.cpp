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
    string s1=s;
    reverse(s1.begin(),s1.end());
    string str=s+s1;
    cout<<str<<endl;
}

int main(){
    solve();
}
