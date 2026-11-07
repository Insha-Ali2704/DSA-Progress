#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	//2 sum problems
	//brute force->O(n^2)
	// int i, j, arr[] = {2, 6, 5, 8, 11}, target = 14;
	// for (i = 0; i < 5; i++) {
	// 	for (j = i + 1; j < 5; j++) {
	// 		if (arr[i] + arr[j] == target) {
	// 			cout << i << " " << j;
	// 			break;
	// 		}
	// 	}
	// }


	//better->hashing (for map) TC->O(nlogn) SC->O(n) (for unordered map) TC->O(n) best case , worst case O(n^2)
	// int i, j, arr[] = {2, 6, 5, 8, 11}, target = 14;
	// map<int, int>hash;//{2:0 , 6:1 , 5:2 , 8:3 , 11:4}
	// for (i = 0; i < 5; i++) {
	// 	if (hash.find(target - arr[i]) != hash.end()) {
	// 		cout << hash[target - arr[i]] << " " << i;
	// 	}
	// 	hash[arr[i]] = i;
	// }

	//optimal->TC->O(n)+O(nlogn)  SC->O(1) distored SC->O(n) bcoz array is changing
	//two pointer approach
	// int n = 5;
	// int i = 0, j = n - 1 , arr[] = {2, 6, 5, 8, 11}, target = 14;
	// sort(arr, arr + 5); //{2,5,6,8,11}
	// while (i < j) {
	// 	if (arr[i] + arr[j] == target) {
	// 		cout << arr[i] << " " << arr[j];
	// 		break;
	// 	}
	// 	else if (arr[i] + arr[j] < target) i++;
	// 	else j--;
	// }


	//maximum subarray's sum
	//kadane's agorithm
	// brute force->TC->O(n^3) SC->O(1)
	// int arr[] = { -2, -3, 4, -1, -2, 1, 5, -1};
	// int i, j, k, sum, maxi = INT_MIN;
	// for (i = 0; i < 8; i++) {
	// 	for (j = i; j < 8; j++) {
	// 		sum = 0;
	// 		for (k = i; k <= j; k++) {
	// 			sum += arr[k];
	// 		}
	// 		maxi = max(maxi, sum);
	// 	}
	// }
	// better->TC->O(n^2) SC->O(1)
	// int arr[] = { -2, -3, 4, -1, -2, 1, 5, -1};
	// int i, j, sum, maxi = INT_MIN;
	// for (i = 0; i < 8; i++) {
	// 	sum = 0;
	// 	for (j = i; j < 8; j++) {
	// 		sum += arr[j];
	// 	}
	// 	maxi = max(maxi, sum);
	// }

	//optimal->kadane's algo
	//TC->O(n) SC->O(1)
	//returning sum
	// int  arr[] = { -2, -3, 4, -1, -2, 1, 5, -1};
	// int i,  sum = 0, maxi = INT_MIN;
	// for (i = 0; i < 8; i++) {
	// 	sum += arr[i];
	// 	if (sum > maxi) maxi = sum;
	// 	if (sum < 0) sum = 0;
	// }
	// cout << maxi;

	//sum+length->TC->O(n) SC->O(1)
	// int  arr[] = { -2, -3, 4, -1, -2, 1, 5, -1};
	// int i, start, ansStart = -1, ansEnd = -1, sum = 0, maxi = INT_MIN;
	// for (i = 0; i < 8; i++) {
	// 	if (sum == 0) start = i;
	// 	sum += arr[i];
	// 	if (sum > maxi) {
	// 		maxi = sum;
	// 		ansStart = start;
	// 		ansEnd = i;
	// 	}
	// 	if (sum < 0) sum = 0;
	// }
	// cout << ansStart << " " << ansEnd;




	return 0;
}