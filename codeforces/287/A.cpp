#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll arr[6][6];
    for(ll i=0;i<6;i++) for(ll j=0;j<6;j++) arr[i][j]=-1;
    ll found=0;
    for(ll i=1;i<=4;i++){
        string s;
        cin>>s;
        for(ll j=0;j<4;j++){
            if(s[j]=='#') arr[i][j+1]=1;
            else arr[i][j+1]=0;
        }
    }
    for(ll i=1;i<=4;i++){
        for(ll j=1;j<=4;j++){
            if(arr[i][j]==1&&arr[i+1][j]==1&&arr[i][j+1]==1) found=1;
            else if(arr[i][j]==1&&arr[i-1][j]==1&&arr[i][j+1]==1) found=1;
            else if(arr[i][j]==1&&arr[i+1][j]==1&&arr[i][j-1]==1) found=1;
            else if(arr[i][j]==1&&arr[i-1][j]==1&&arr[i][j-1]==1) found=1;
            else if(arr[i][j]==0&&arr[i+1][j]==0&&arr[i][j+1]==0) found=1;
            else if(arr[i][j]==0&&arr[i-1][j]==0&&arr[i][j+1]==0) found=1;
            else if(arr[i][j]==0&&arr[i+1][j]==0&&arr[i][j-1]==0) found=1;
            else if(arr[i][j]==0&&arr[i-1][j]==0&&arr[i][j-1]==0) found=1;
        }
    }
    if(found) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    solve();
}
