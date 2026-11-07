#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	// vector<int>nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
	// vector<int>hash;
	// sort(nums.begin(), nums.end()); //{0,0,1,2,3,4,5,6,7,8}
	// for (int i = 0; i < nums.size(); i++) { //nums.size()=10
	// 	hash[i]++;
	// }
	// for (auto x : hash) cout << x << " ";
	vector<string>v = {"hi", "hellow hey", "hey"};
	vector<int>cnt;
	string ss;
	for (int i = 0; i < v.size(); i++) {
		ss = v[i];
		cnt.push_back(count(ss.begin(), ss.end(), ' '));
	}

	auto it = max_element(cnt.begin(), cnt.end());
	cout << (*it) + 1;
	//Leaders in an Array
	//A leader is an element greater than all elements to its right.
	/*vector<int>v = {16, 17, 4, 3, 5, 2}, ans;
	int maxi = INT_MIN;
	for (int i = v.size() - 1; i >= 0 ; i --) {
		if (v[i] >= maxi) {
			ans.push_back(v[i]);
			maxi = v[i];
		}
	}
	reverse(ans.begin(), ans.end());
	for (auto x : ans) cout << x << " ";
	*/
	//Rearrange Positives and Negatives
	// vector<int>v1 = {1, -2, 3, -4, -1, 4}, v2;
	// if (v1[0] > 0) {
	// 	for (int i = 0; i < v1.size(); i++) {
	// 		if (v1[i] > 0 ) {
	// 			v2.push_back(v1[i]);
	// 			v1.erase(v1.begin() + i);
	// 		}
	// 	}

	// 	for (int i = 0; i < v2.size(); i++) {
	// 		if (i % 2 != 0) v2.emplace(i, v1[(i - 1) / 2]);
	// 	}

	// }

	// for (auto x : v2) cout << x << " ";
	return 0;
}