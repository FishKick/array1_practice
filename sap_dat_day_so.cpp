#include <bits/stdc++.h>

using namespace std;

int main (){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int a[n];
		map <int, bool> mp;
		for (int& x : a){
			cin >> x;
			mp[x] = true;
 		}
 		for (int i = 0; i < n; i++){
 			if (mp.count(i)){
 				cout << i << " ";
			}
			else cout << "-1" << " ";
		}
		cout << endl;
	}
	return 0;
}