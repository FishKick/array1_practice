#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;




int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int a[n];
		for (int& x : a) cin >> x;
//		if (check_greater(a, n)) cout << "-1" << endl;
		int min_val = a[0];
		int res = INT_MIN;
		for (int i = 1; i < n; i++){
			if (a[i] > min_val) res = max(res, a[i] - min_val);
			min_val = min(a[i], min_val);
		}
		if (res == INT_MIN) cout << "-1"  << endl;
		else cout << res << endl;
		
	}

	return 0;
}
