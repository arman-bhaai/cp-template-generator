/*______________________________________________________________________
||--------------------------------------------------------------------||
||                                                                    ||
|| "I bear witness that there is no god but Allah and I bear witness  ||
||    that Muhammad (peace be upon him) is the Messenger of Allah"    ||
||                                                                    ||
|| *** In the name of Allah, the Most Gracious, the Most Merciful.*** ||
||                                                                    ||
========================================================================
========================================================================
||                                                                    ||
|| --> Author     :     Abu Bakar Siddique Arman (#arman_bhaai)       ||
|| --> Email      :     arman.bhaai@gmail.com                         ||
|| --> Portfolio  :     arman-bhaai.github.io                         ||
|| --> LinkedIn   :     linkedin.com/in/abubakar-arman                ||
|| --> GitHub     :     github.com/arman-bhaai                        ||
|| --> Facebook   :     fb.me/arman.bhaai                             ||
|| --> StopStalk  :     stopstalk.com/user/profile/arman_bhaai        ||
|| --> Clist      :     clist.by/coder/arman_bhaai                    ||
|| --> CodeForces :     codeforces.com/profile/arman_bhaai            ||
|| --> CodeChef   :     codechef.com/users/arman_bhaai                ||
|| --> AtCoder    :     atcoder.jp/users/arman_bhaai                  ||
|| --> HackerRank :     hackerrank.com/arman_bhaai                    ||
|| --> LeetCode   :     leetcode.com/arman_bhaai                      ||
||____________________________________________________________________||
----------------------------------------------------------------------*/

// I believe in OpenSource. So, any of my code snippets are Copyright-Free.
// <3 Happy Coding <3

// Contest ID   :: 
// Problem Name :: 
// Problem URL  :: 

/*******************************************************************************
////////////////////////////////////////////////////////////////////////////////
*******************************************************************************/


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef string str;
typedef vector<int> vi;
typedef vector<ll> vii;
typedef vector<vector<ll>> vvi;
typedef map<int,int> mi;
typedef map<ll,ll> mii;

// shortcuts
#define endl '\n'
#define F first
#define S second
#define getv(v) for(auto &k:v) cin>>k;
#define all(v) v.begin(),v.end()
#define pb push_back
#define rep(i,n) for (int i=0; i<n; i++)
#define repr(i,n) for (int i=n, i>0; i--)
#define rep2(i,n,k) for (int i=k; i<n; i++)
#define repr2(i,n,k) for (int i=n, i>k; i--)
#define sortva(v) sort(v.begin(), v.end())
#define out(flag) cout << (flag ? "YES" : "NO");
// debugging
#define couts(i) cout<<i<<" ";
#define coutn(i) cout<<i<<'\n';
#define showv(v) cout<<endl;for(auto &k:v) cout<<k<<", ";cout<<endl;
#define showm(m) cout<<endl;for(auto &k:m) cout<<k.F<<" -> "<<k.S<<endl;cout<<endl;
#define watch(x) cout << (#x) << " is " << (x) << endl;

void optimize();
bool isVowel(char c);
bool isPrime(ll n);
// void solve();


void solve(){
	
}

int main(){
	optimize();
	int __=1;
	cin>>__;
	for(int _=1; _<=__; _++){
		// cout<<"Case "<<_<<": ";
		solve(); cout<<endl;
	}
	return 0;
}


void optimize(){
	// fastIO
	ios::sync_with_stdio(0);
	cin.tie(0);
}

bool isVowel(char c){
	return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

bool isPrime(ll n){
	if(n<=1) return false;
	if(n<=3) return true;
	if(n%2==0 || n%3==0) return false;

	for(ll i=5; i*i<=n; i+=6){
		if(n%i==0 || n%(i+2)==0) return false;
	}
	return true;
}