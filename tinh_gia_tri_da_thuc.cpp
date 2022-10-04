#include <bits/stdc++.h>
#include <math.h>

#define ll long long
#define MOD 1000000007;
using namespace std;

ll binPow2(ll a, ll b){
	ll res = 1;
	while (b){
		if (b % 2 == 1){
			res *= a;
			res %= MOD;
		}
		b /= 2;
		a*=a;
		a %= MOD;
	}
	return res;
}

int main(){
	int t; cin >> t;
	while (t--){
		int n, x; cin >> n >> x;
		int a[n];
		for (int i = n-1; i >= 0; i--){
			cin >> a[i];
		}
		int sum = 0;
		for (int i = n - 1; i >= 0; i--){
			int ans = binPow2(x,i);
			ans %= MOD;
			sum +=a[i] * ans;
			sum %= MOD;
		}
		cout << sum << endl;		
	}
	

	return 0;
}
