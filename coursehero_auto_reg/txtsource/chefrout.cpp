#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

#define fill(a,x) memset(a,x,sizeof(a)) 
#define pb push_back
#define sz(x) (int)x.size() 
#define F first
#define S second
#define FOR(i,a,b) for(int i = a; i<=b; ++i)
#define NFOR(i,a,b) for(int i = a; i>=b; --i)
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const ll INF = 1e18;
const ll mod = 1e9+7;
const int N = 1e5+10; 

string s;
int main(){
  fast;
  int t;
  cin>>t;
  
  FOR(i,1,t)
  {
  	cin>>s;
  	string srted_s=s;
  	sort(srted_s.begin(),srted_s.end());
  	if(s==srted_s)
  	cout<<"yes"<<endl;
  	else
  	cout<<"no"<<endl;
  }

  return 0;
}