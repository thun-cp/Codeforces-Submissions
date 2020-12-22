// #pragma comment(linker, "/stack:200000000")
// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC optimization("unroll-loops")

#include "bits/stdc++.h"
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define endl '\n'
#define F first
#define S second
#define IO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define cf ll testcases;cin>>testcases;while(testcases--)
#define prn(x) if(x) cout<<"YES"<<endl; else cout<<"NO"<<endl;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define minel(x) (*min_element(all(x)))
#define maxel(x) (*max_element(all(x)))
#define cou dbg=1;cout
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pi;
typedef vector<ll> vi;
typedef vector<ld> vd;
typedef vector<pi> vp;
ll dbg=0;
template<typename A, typename B> ostream& operator<<(ostream &cout, pair<A, B> const &p);
template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v);
template<typename A, typename B> istream& operator>>(istream& cin, pair<A, B> &p);
template<typename A> istream& operator>>(istream& cin, vector<A> &v);
int dx[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<string> arr(n-k+1);
    cin>>arr;
    reverse(all(arr));
    string ad="a";
    string s="A";
    ll tim=0;
    vector<string> ans;
    for(ll i=0;i<k-1;i++){
        ans.pb(s);
            s=s+ad;
            if(s.length()==11){
                if(tim==0){
                    s="B";
                    ad="b";
                }
                else if(tim==1){
                    s="C";
                    ad="c";
                }
                else if(tim==2){
                    s="D";
                    ad="d";
                }
                else if(tim==3){
                    s="E";
                    ad="e";
                }else{
                    s="F";
                    ad="f";
                }
                tim++;
            }
    }
    for(ll i=0;i<arr.size();i++){
        if(arr[i]=="NO") ans.pb(ans[i]);
        else{
            ans.pb(s);
            s=s+ad;
            if(s.length()==11){
                if(tim==0){
                    s="B";
                    ad="b";
                }
                else if(tim==1){
                    s="C";
                    ad="c";
                }
                else if(tim==2){
                    s="D";
                    ad="d";
                }
                else if(tim==3){
                    s="E";
                    ad="e";
                }else{
                    s="F";
                    ad="f";
                }
                tim++;
            }
        }
    }
    reverse(all(ans));
    cout<<ans<<endl;
}

int main(){
    IO;
    // cf
    solve();
    return 0;
}


template<typename A, typename B> ostream& operator<<(ostream &cout, pair<A, B> const &p) { 
    if(dbg){
        return cout << "(" << p.F << ", " << p.S << ")"; 
    }else{
        return cout<<p.F<<' '<<p.S;
    }
        dbg=0;}
template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v) {
    if(dbg){
        cout << "["; for(ll i = 0; i < v.size(); i++) {if (i) cout << ", "; cout << v[i];} return cout << "]";
    }else{
        for(ll i=0;i<v.size()-1;i++) cout<<v[i]<<' ';
        return cout<<v[v.size()-1];
    dbg=0;}
}
template<typename A, typename B> istream& operator>>(istream& cin, pair<A, B> &p) {
   cin >> p.first;
   return cin >> p.second;
}
template<typename A> istream& operator>>(istream& cin, vector<A> &v) {
   for(ll i=0;i<v.size()-1;i++) cin>>v[i];
   return cin >> v[v.size()-1];
}