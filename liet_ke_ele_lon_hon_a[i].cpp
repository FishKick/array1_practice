#include <bits/stdc++.h>

using namespace std;

int main (){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int a[n];
		vector <int> v(n);
		for (int i = 0; i < n; i++){
			cin >> a[i];
			v.push_back(a[i]);
		}
		sort(v.begin(), v.end());
		for (int i = 0; i < n; i++){
			auto it = upper_bound(v.begin(), v.end(), a[i]);
			if (it != v.end()) cout << *it << " ";
			else cout << "_" << " ";
		}
		cout <<endl;
	}
	return 0;
}