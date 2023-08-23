/*
***** SHANTO
***
***** DATE :23/08/23
*/
//*******C++ HEADER*******//
#include<iostream>
#include<algorithm>
#include<cmath>
#include<array>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<unordered_set>
#include<cstdlib>
#include<iomanip>
#include<numeric>
using namespace std;
//*******MACROS*******//
#define ll			long long
#define test(T)         	ll t;cin>>t;
#define speedIO 		ios_base::sync_with_stdio(false);cin.tie(NULL);
#define setNum(n)		cout<<fixed<<setprecision(n);	
#define endl    		"\n"
#define elif    		else if
#define pb      		push_back
#define pop     		pop_back
#define vbe(v)  		v.begin(),v.end()
#define llv  			vector<ll>
#define forA(v)			for(auto&i:v)
#define forF(n0,n)		for(int i=n0;i<n;++i)
//*******TEMPLATES *******//
template<typename T>void out(T x){cout << x << endl;}

//*************************************************************//
 
int main() {
	speedIO
	test(t)
	while(t--){
		string s;cin>>s;
		vector<char> vc;
		int count = s.size();
		bool ok = true;
		if(count%2!=0)ok = false;
		else{
			forF(0,count){
				char temp;temp = s[i];
				vc.pb(temp);
			}
			forF(0,count){
				i++;
				char c1 = vc[i],c2 = vc[count-1-i];
				if(c1 !='(' &&  c2 != ')')continue;
				else{
					ok = false;break;
				}
			}
		}
		if(!ok){
			out("YES");
			forF(0,count){
				cout << "()";
			}
			cout << endl;
		}
		else out("NO");	
	}
}