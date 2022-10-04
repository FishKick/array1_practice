#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

int solve(int a[], int n){
	set <int> st;
	for (int i = 0; i < n; i++){
		st.insert(a[i]);
	}
	int ans = *st.rbegin();
	if (st.count(1) == 0) return 1;
	for (auto it = st.begin(); it != st.end(); it++){
		if (*it <= 0) continue;
		else{
			int tmp = *it;
			tmp++;
			if (st.count(tmp) == 0) return tmp;
		}
	}
	ans++;
	return ans;
	
}

int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >>n;
		int a[n];
		for (int& x : a) cin >> x;
		cout << solve(a, n) << endl;
	}

	return 0;
}
