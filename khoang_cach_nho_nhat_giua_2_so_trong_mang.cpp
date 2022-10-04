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
		sort(a, a + n);
		int m = INT_MAX;
		for (int i = 1; i < n; i++){
			m = min(m, a[i] - a[i-1]);
		}
		cout << m << endl;
	}
	return 0;
}
