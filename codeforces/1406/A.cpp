#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
ll gcd(ll a , ll b){
if(b==0) return a;
return gcd(b,a%b);
}
 
int main()
{
   ll t,n,k;
   cin>>t;
   vector <ll > v;
    map<int,int> mp;
   while(t--){
    cin>>n;
    mp.clear();
    for(int i=0;i<n;i++){
 
        cin>>k;
        mp[k]++;
    }
    map <int,int> ::iterator itr;
    int a=-1,b=-1;
    for(int i=0;i<101;i++){
        if(mp.find(i)==mp.end()) mp[i]=0;
        //cout<<mp[i]<< " " <<i<<endl;
        if(mp[i]==0){
            if(a==-1){
                a=i; b=i; break;
            }
            else{
                b=i; break;
            }
        }
        else if(mp[i]==1){
            if(a==-1) {
                a=i;
            }
 
        }
    }
    cout<<a+b<<endl;
   }
 
    return 0;
}