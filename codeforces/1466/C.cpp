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
    string s;
    cin>>s;
    ll n=s.size();
    char ch=s[s.size()-1]-1;
    ll ans=0;
    for(ll i=1;i<n;i++){
        if(i-2>=0){
            if(s[i]==s[i-2]||s[i]==s[i-1]){
                while(i+2<n&&(ch==s[i-1]||ch==s[i-2]||ch==s[i+1]||ch==s[i+2])){
                    if(ch=='z') ch='a';
                    else ch++;
                }
                while(i+1<n&&(ch==s[i-1]||ch==s[i-2]||ch==s[i+1])){
                    if(ch=='z') ch='a';
                    else ch++;
                }
                s[i]=ch;
                ans++;
            }
        }else if(s[i]==s[i-1]){
            while(i+2<n&&(ch==s[i-1]||ch==s[i+1]||ch==s[i+2])){
                if(ch=='z') ch='a';
                else ch++;
            }
            while(i+1<n&&(ch==s[i-1]||ch==s[i+1])){
                if(ch=='z') ch='a';
                else ch++;
            }
            s[i]=ch;
            ans++;
        }
    }
    //cout<<s<<endl;
    cout<<ans<<endl;
}

int main(){
    IO;
    cf
    solve();
    return 0;
}


template<typename A, typename B> ostream& operator<<(ostream &cout, pair<A, B> const &p) { 
    if(dbg){dbg=0;
        return cout << "(" << p.F << ", " << p.S << ")"; 
    }else{
        return cout<<p.F<<' '<<p.S;
    }
        }
template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v) {
    if(dbg){dbg=0;
        cout << "["; for(ll i = 0; i < v.size(); i++) {if (i) cout << ", "; cout << v[i];} return cout << "]";
    }else{
        for(ll i=0;i<v.size()-1;i++) cout<<v[i]<<' ';
        return cout<<v[v.size()-1];
    }
}
template<typename A, typename B> istream& operator>>(istream& cin, pair<A, B> &p) {
   cin >> p.first;
   return cin >> p.second;
}
template<typename A> istream& operator>>(istream& cin, vector<A> &v) {
   for(ll i=0;i<v.size()-1;i++) cin>>v[i];
   return cin >> v[v.size()-1];
}