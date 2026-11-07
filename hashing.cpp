#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	//----------------------Arrays-------------------------------
	//size of array at max inside main->10^6 (for int)
	//size of array globally->10^7->(1e7) or (1e7+1) (for int)
	//(for bool) inside main->10^7 and globally->10^8
	// int n;
	// cin >> n;
	// int arr[n];
	// for (int i = 0; i < n; i++) {
	// 	cin >> arr[i];
	// }
	// //precompute
	// int hash[13] = {0}, i;
	// for (i = 0; i < n; i++) {
	// 	hash[arr[i]] ++;
	// }
	// int q;
	// cin >> q;
	// while (q--) {
	// 	int num;
	// 	cin >> num;
	// 	//fetch
	// 	cout << hash[num] << " ";
	// }
	//---------------------------character hashing---------------------
	// string s;
	// cin >> s;
	// int hash[26] = {0}; //if u know s is in small letters
	// //hash[256] if u r not sure it is small letters
	// for (int i = 0; i < s.size(); i++) {
	// 	hash[s[i] - 'a']++;//hash[s[i]]++ if u r not sure it is small letters
	// }
	// int q;
	// cin >> q;
	// while (q--) {
	// 	char c;
	// 	cin >> c;
	// 	cout << hash[c - 'a'] << " ";//hash[c] if u r not sure it is small letters

	// }

	//----------------map---------------------
	// int n;
	// cin >> n;
	// int arr[n];
	// for (int i = 0; i < n; i++) {
	// 	cin >> arr[i];
	// }
	// //precompute
	// map<int, int>mpp;//stores in sorted order
	// for (int i = 0; i < n; i++) {
	// 	mpp[arr[i]]++;
	// }
	// for (auto x : mpp) {
	// 	cout << x.first << "->" << x.second << endl;
	// }
	// int q;
	// cin >> q;
	// while (q--) {
	// 	int num;
	// 	cin >> num;
	// 	//fetch
	// 	cout << mpp[num] << " ";
	// }
	//-----------------------------Time Complexity (Map) ----------------------
	//both storing and fetching takes->log(N)->best,avg,worst where N is numbe rof elements
	//--------------------------------Unordered map (most used)------------------------------------
	// int n;
	// cin >> n;
	// int arr[n], i;
	// for (i = 0; i < n; i++) cin >> arr[i];
	// unordered_map<int, int>unmpp;
	// for (i = 0; i < n; i++) unmpp[arr[i]]++;
	// for (auto x : unmpp) cout << x.first << "->" << x.second << endl;
	// int q;
	// cin >> q;
	// while (q--) {
	// 	int a;
	// 	cin >> a;
	// 	cout << unmpp[a] << endl;
	// }
	//best/avg tc is O(1) for unoredered map
	//---------------------------------Hashing Method--------------------------------
	//Division method->it maps a key to a valid index in the hash table using the %
	//Hash Index = Key % Table Size
	//eg arr[6]={12,3,6,8,100,55};
	//hash_index=arr[i]%10;
	//{0->1,1->0,2->1,3->1,4->0,5->1,6->1,7->0,8->1,9->0}remainders likhe h kitne h
	//A collision occurs when two or more keys produce the same hash index.
	//eg arr[6]={12,62,32,81,1008,55};
	//hash_index=arr[i]%10;
	//{0->0,1->1,2->3,3->0,4->0,5->1,6->0,7->0,8->1,9->0}remainders likhe h kitne h
	//2->3 mein arr[i]={12,32,62}->chained in sorted irder

	return 0;
}