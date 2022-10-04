#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;
int fn[1005];
bool check(int n){
	fn[0] = 0; fn[1] = 1;
	if (n == 0 || n == 1) return true;
	for (int i = 2; i < 20; i++){
		fn[i] = fn[i-1] + fn[i-2];
		if (fn[i] == n) return true;
	}
	return false;
}
int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int a[n];
		for (int& x : a) cin >> x;
		vector <int> v;
		for (int i = 0; i < n; i++){
			if (check(a[i])) v.push_back(a[i]);
		}
		for (int x : v) cout << x << " ";
		cout << endl;
	}

	return 0;
}
