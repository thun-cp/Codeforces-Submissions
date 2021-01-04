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
ll n;
vector<vi> arr(5,vi(5,0));
vi ans;
vp moves;
vector<vi> vis(5,vi(5,0));
ll res=0;
void f(ll x,ll y){
	if(x>=n||y>=n||x<0||y<0||vis[x][y]) return;
	vis[x][y]=1;
	ll temp=0;
	for(auto i:ans) temp+=i;
	if((ans.empty()&&arr[x][y]==-1)
		||(!ans.empty()&&ans[ans.size()-1]==-1&&arr[x][y]==1)
		||(temp<0)){
		vis[x][y]=0;
		return;
	}
	ans.pb(arr[x][y]);
	moves.pb({x,y});
	temp+=arr[x][y];
	if(temp==0){
		res=max(res,ll(ans.size()));
		// cout<<x<<' '<<y<<endl;
		// if(!ans.empty()) cout<<ans<<endl;
		// for(auto g:moves){
		// 	cou<<g<<' ';
		// }
		// cout<<endl;
	}
	f(x+1,y);
	f(x-1,y);
	f(x,y+1);
	f(x,y-1);
	vis[x][y]=0;
	ans.pop_back();
	moves.pop_back();
}
void solve(){
    cin>>n;
    for(ll i=0;i<n;i++){
    	string s;
    	cin>>s;
    	for(ll j=0;j<n;j++){
    		if(s[j]=='(') arr[i][j]=1;
    		else arr[i][j]=-1;
    	}
    }
    f(0,0);
    cout<<res<<endl;
}

int main(int argc, char** argv){
    freopen((string(argv[0])+string(".in")).c_str(),"r",stdin);
    freopen((string(argv[0])+string(".out")).c_str(),"w",stdout);
    // IO;
    // cf
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