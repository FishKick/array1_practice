#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int a[n];
		map <int, int> mp;
		for (int& x : a) {
			cin >> x;
			mp[x]++;
		}
		int sum = 0;
		for (auto it = mp.begin(); it != mp.end(); it++){
			int ans = it->second;
			if (ans >= 2) sum+=ans;
		}
		cout << sum <<endl;
		
	}

	return 0;
}
