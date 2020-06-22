#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;
void change(string str){
    ll a=0,b=0;
    for(ll i=0;i<str.size();i++){
        if(str[i]==tolower(str[i])) a++;
        else b++;
    }
    if(a>=b){
        for(ll i=0;i<str.size();i++) cout<<char(tolower(str[i]));
        cout<<endl;
    }else{
        for(ll i=0;i<str.size();i++) cout<<char(toupper(str[i]));
        cout<<endl;
    }
}
int main(){
    string str;
    cin>>str;
    change(str);
}
