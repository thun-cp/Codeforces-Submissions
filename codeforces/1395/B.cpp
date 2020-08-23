#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main()
{
   int n,m,x,y;
    cin>>n>>m>>x>>y;
    int vis=0;
    int used[n][m];
    int sx=x;
    while(1<=x){
        cout<<x<<" "<<y<<endl;
        int sy=y;
        for(int i=1;i<=m;i++){
            if(i==sy){
                continue;
            }
            cout<<x<<" "<<i<<endl;
            y=i;
        }
        x--;
 
    }
    x=sx+1;
    while(x<=n){
        cout<<x<<" "<<y<<endl;
        int sy=y;
        for(int i=1;i<=m;i++){
            if(i==sy){
                continue;
            }
            cout<<x<<" "<<i<<endl;
            y=i;
        }
        x++;
    }
    return 0;
}