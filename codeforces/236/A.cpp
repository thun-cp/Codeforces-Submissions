#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    string str;
    cin>>str;
    set<char> s;
    for(auto i:str) s.insert(i);
    if(s.size()%2==1) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
}
