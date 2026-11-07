#include<bits/stdc++.h>
using namespace std;
//linear search
// int linearsearch(int arr[], int n, int num) {
// 	for (int i = 0; i < 5; i++) {
// 		if (arr[i] == num) return i;
// 	}
// 	return -1;
// }
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	//Basics of array
	//max size of array globally->10^7 and inside int main->10^6
	//brute->better->optimal
	//largest element in an array
	//brute force
	// int arr[5] = {2, 3, 1, 4, 0};
	// sort(arr, arr + 5);
	// cout << arr[4];

	//optimal
	// int arr[5] = {2, 3, 1, 4, 0};
	// int max = INT_MIN;
	// for (int i = 0; i < 5; i++) {
	// 	if (arr[i] > max) max = arr[i];
	// }
	// cout << max;


	//second largest element in an array
	//brute force
	// int arr[6] = {4, 3, 2, 1, 4, 0};
	// sort(arr, arr + 5); //{0,1,2,3,4,4}
	// int n = 6, secondmax, max = 4;
	// for (int i = n - 2; i >= 0; i--) {
	// 	if (arr[i] != max) {
	// 		secondmax = arr[i];
	// 		break;
	// 	}
	// }
	// cout << secondmax;

	//better
	// int arr[5] = {2, 3, 1, 4, 0};
	// sort(arr, arr + 5);
	// int largest = INT_MIN, secondlargest = INT_MIN;
	// for (int i = 0; i < 5; i++) {
	// 	if (arr[i] > largest ) largest = arr[i];
	// }
	// for (int i = 0; i < 5; i++) {
	// 	if (arr[i] != largest && arr[i] > secondlargest) secondlargest = arr[i];
	// }
	// cout << secondlargest;

	//optimal
	// int arr[5] = {2, 3, 1, 4, 0};
	// int largest = arr[0], secondlargest = INT_MIN;
	// for (int i = 0; i < 5; i++) {
	// 	if (arr[i] > largest) {
	// 		secondlargest = largest;
	// 		largest = arr[i];
	// 	}
	// 	else if (arr[i] < largest && arr[i] > secondlargest) {
	// 		secondlargest = arr[i];
	// 	}
	// }
	// cout << secondlargest;


	//Remove duplicates from a sorted array
	//brute force->TC->O(nlogn + n) sc->O(n)
	// int arr[] = {1, 1, 2, 2, 2, 3, 3};
	// set<int>sett;
	// for (int i = 0; i < 7; i++) {
	// 	sett.emplace(arr[i]);
	// }
	// for (auto x : sett) cout << x << " ";

	//optimal->two pointer approach tc->O(n) sc->O(1)
	// int i = 0, j;
	// int arr[5] = {2, 3, 2, 4, 4};
	// sort(arr, arr + 5);
	// for (j = 1; j < 5; j++) {
	// 	if (arr[j] != arr[i]) {
	// 		arr[i + 1] = arr[j];
	// 		i++;
	// 	}
	// }
	// cout << i << endl;
	// for (j = 0; j <= i; j++) cout << arr[j] << " ";

	// int nums[6] = {1,  0,  1, 1, 0, 1};
	// int streak = 0, maxstreak = 0;
	// for (int i = 0; i < 6; i++) {
	// 	if (nums[i] == 1) streak++;
	// 	else {
	// 		maxstreak = streak;
	// 		streak = 0;
	// 	}
	// }
	// if (maxstreak >= streak) cout << maxstreak;
	// else cout << streak;

	//left rotate an array by one place->tc->O(n) sc->O(1)
	//space used to solve the problem->O(n) extra space is O(1)
	// int arr[5] = {1, 2, 3, 4, 5}; //->{2,3,4,5,1}
	// int temp = arr[0];
	// for (int i = 1; i < 5; i++) {
	// 	arr[i - 1] = arr[i];
	// }
	// arr[4] = temp;
	// for (int i = 0; i < 5; i++) cout << arr[i] << " ";

	//left rotate an array by k places->tc->O(n+d) sc->O(d)
	// int arr[7] = {1, 2, 3, 4, 5, 6, 7}; //{4,5,6,7,1,2,3}
	// int d = 3; //if d=7k then array willl be same if d=8->7+1 ie d=d%sizeof array
	//brute force
	// int temp[d] ;
	// for (int i = 0; i < d; i++) temp[i] = arr[i];
	// for (int i = d; i < 7; i++) {
	// 	arr[i - d] = arr[i];
	// }
	// int j = 0;
	// for (int i = 7 - d; i < 7; i++) {
	// 	arr[i] = temp[j];
	// 	j++;
	// }
	// for (int i = 0; i < 7; i++) cout << arr[i] << " ";


	//optimal tc->O(2n) sc->O(1)
	// reverse(arr, arr + d);
	// reverse(arr + d, arr + 7);
	// reverse(arr, arr + 7);
	// for (int i = 0; i < 7; i++) cout << arr[i] << " ";


	//right rotate
	// k=k%nums.size();
	// reverse(nums.begin(),nums.end());
	// reverse(nums.begin(),nums.begin()+k);
	// reverse(nums.begin()+k,nums.end());

	//move all zeroes to the end tc->O(2n) sc->O(x) x is non zero nos worst case O(n)
	//brute force

	// int arr[10] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
	// vector<int>temp;
	// int cnt = 0;
	// for (int i = 0; i < 10; i++) {
	// 	if (arr[i] != 0) {
	// 		temp.push_back(arr[i]);
	// 		cnt++;
	// 	}
	// }
	// for (int i = 0; i < temp.size(); i++) arr[i] = temp[i];
	// for (int i = temp.size(); i < 10; i++) arr[i] = 0;
	// for (int i = 0; i < 10; i++) cout << arr[i] << " ";

	//optimal tc->O(n) sc->O(1)
	// int arr[10] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
	//my way
	// int j = 0;
	// for (int i = 0; i < 10; i++) {
	// 	if (i == 0) {
	// 		arr[j] = arr[i];
	// 		j++;
	// 	}
	// 	if (arr[i] != 0 && i != 0) {
	// 		swap(arr[j], arr[i]);
	// 		j++;
	// 	}
	// }
	// for (int i = 0; i < 10; i++) cout << arr[i] << " ";

	//strivers way
	// int i, j = -1;
	// for (i = 0; i < 10; i++) {
	// 	if (arr[i] == 0) {
	// 		j = i;
	// 		break;
	// 	}
	// }
	// for (i = j + 1; i < 10; i++) {
	// 	if (arr[i] != 0) {
	// 		swap(arr[i], arr[j]);
	// 		j++;
	// 	}
	// }
	// for (i = 0; i < 10; i++) cout << arr[i] << " ";

	//Liner Search
	// int arr[5] = {10, 1, 34, 90, 11, 2};
	// int num = 1;
	// cout << linearsearch(arr, 5, num);


	//union of two sorted arrays
	//TC->O(n1logn +n2logn) SC->O(n1+n2)
	//brute force
	// int arr1[] = {1, 1, 2, 3, 4, 5};
	// int arr2[] = {2, 3, 4, 4, 5, 6};
	// set<int>st;
	// for (int i = 0; i < (sizeof(arr1) / sizeof(arr1[0])); i++) {
	// 	st.insert(arr1[i]);
	// }
	// for (int i = 0; i < (sizeof(arr2) / sizeof(arr2[0])); i++) {
	// 	st.insert(arr2[i]);
	// }
	// for (auto x : st) cout << x << " ";

	//optimal
	//two pointer approach
	//TC & SC->O(n1+n2)

	// int arr1[] = {1, 1, 2, 3, 4, 5};
	// int arr2[] = {2, 3, 4, 4, 5, 6};
	// vector<int> uni;
	// int i = 0, j = 0;
	// int n1 = sizeof(arr1) / sizeof(arr1[0]), n2 = sizeof(arr2) / sizeof(arr2[0]);
	// while (i < n1 && j < n2) {
	// 	if (arr1[i] <= arr2[j]) {
	// 		if (uni.size() == 0 || uni.back() != arr1[i]) {
	// 			uni.push_back(arr1[i]);
	// 		}
	// 		i++;
	// 	}
	// 	else {
	// 		if (uni.size() == 0 || uni.back() != arr2[j]) {
	// 			uni.push_back(arr2[j]);
	// 		}
	// 		j++;
	// 	}

	// }
	// while (i < n1) {
	// 	if (uni.size() == 0 || uni.back() != arr1[i]) {
	// 		uni.push_back(arr1[i]);
	// 	}
	// 	i++;
	// }
	// while (j < n2) {
	// 	if (uni.size() == 0 || uni.back() != arr2[j]) {
	// 		uni.push_back(arr2[j]);
	// 	}
	// 	j++;
	// }

	// for (auto x : uni) cout << x << " ";

	//intersection of two sorted arrays
	//brute force TC->O(n1xn2) SC->O(n2)
	// int arr1[] = {1, 1, 2, 3, 4, 5};
	// int arr2[] = {1, 3, 4, 4, 5, 6};
	// vector<int>intersection;
	// int n1 = sizeof(arr1) / sizeof(arr1[0]), n2 = sizeof(arr2) / sizeof(arr2[0]);
	// int i, j;
	// int vis[n2] = {0};
	// for (i = 0; i < n1; i++) {
	// 	for (j = 0; j < n2; j++) {
	// 		if (arr1[i] == arr2[j] && vis[j] == 0) {
	// 			intersection.push_back(arr1[i]);
	// 			vis[j] = 1;
	// 			break;
	// 		}
	// 		if (arr2[j] > arr1[i]) break;
	// 	}
	// }
	// for (auto x : intersection) cout << x << " ";

	//optimal
	//two pointers TC->O(n1+n2) SC->O(1)
	// int arr1[] = {1, 1, 2, 3, 4, 5};
	// int arr2[] = {1, 3, 4, 4, 5, 6};
	// vector<int>intersection;
	// int n1 = sizeof(arr1) / sizeof(arr1[0]), n2 = sizeof(arr2) / sizeof(arr2[0]);
	// int i = 0, j = 0;
	// while (i < n1 && j < n2) {
	// 	if (arr1[i] < arr2[j]) i++;
	// 	else if (arr1[i] > arr2[j]) j++;
	// 	else {
	// 		intersection.push_back(arr1[i]);
	// 		i++;
	// 		j++;
	// 	}
	// }
	// for (auto x : intersection)  cout << x << " ";


	//missing number
	//brute force->linear search TC->O(N^2) hypothetical SC->O(1)
	// int arr[4] = {1, 2, 4, 5}, N = 5; //N=5 -> find a number b/w 1 to N
	// int ans;
	// for (int i = 1; i <= N; i++) {
	// 	int flag = 0;
	// 	for (int j = 0; j < N - 1; j++) {
	// 		if (arr[j] == i) {
	// 			flag = 1;
	// 			break;
	// 		}
	// 	}
	// 	if (flag == 0) cout << i;
	// }

	//better
	// int arr[4] = {1, 2, 4, 5}, N = 5;
	// vector<int>hash(N + 1, 0);//{0,0,0,0,0,0}
	// for (int i = 0; i < N - 1  ; i++) {//0,1,2,3
	// 	hash[arr[i]] = 1;//hash[1],hash[2],hash[4],hash[5]
	// }
	// for (int i = 1; i < N + 1; i++) {//1,2,3,4,5
	// 	if (hash[i] == 0) {
	// 		cout << i;
	// 		break;
	// 	}
	// }

	//optimal -> sum and XOR
	//sum TC->O(N-1) SC->O(1)
	// int arr[4] = {1, 2, 4, 5}, N = 5, sum, s = 0;
	// sum = (N * (N + 1)) / 2;
	// for (int i = 0; i < N - 1; i++) s += arr[i];
	// if (sum != s) cout << sum - s;

	//xor -> besttt TC->O(N) SC->O(1)
	// int arr[4] = {1, 2, 4, 5}, N = 5;
	// int XOR1 = 0, XOR2 = 0, i;
	// for (i = 0; i < N - 1; i++) {
	// 	XOR1 = XOR1 ^ (i + 1);
	// 	XOR2 = XOR2 ^ arr[i];
	// }
	// XOR1 = XOR1 ^ N;
	// cout << (XOR1 ^ XOR2);


	//maximum consecutive ones
	//TC->O(n)
	// int arr[] = {1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1};
	// int i, streak = 0, maxstreak = 0;
	// for (i = 0; i < sizeof(arr); i++) {
	// 	if (arr[i] == 1) streak++;
	// 	else {
	// 		maxstreak = max(streak, maxstreak);
	// 		streak = 0;
	// 	}
	// }
	// cout << max(maxstreak, streak);

	//finding the numbers that appears once,and other numbers twice.
	//brute force -> linear search -> TC->O(n^2)
	// int arr[] = {1, 1, 2, 3, 3, 4, 4};
	// int i, j;
	// for (i = 0; i < 7; i++) {
	// 	int num = arr[i], cnt = 0;
	// 	for (j = 0; j < 7; j++) {
	// 		if (arr[j] == num) cnt++;
	// 	}
	// 	if (cnt == 1) cout << num;
	// }

	//better->hashing TC->O(3n) SC->O(max(n))
	// int i,  arr[] = {1, 1, 2, 3, 3, 4, 4};
	// int maxi = arr[0];
	// for (i = 0; i < 7; i++) {
	// 	maxi = max(arr[i], maxi);
	// }
	// int hash[maxi] = {0};

	// for (i = 0; i < 7; i++) hash[arr[i]]++;
	// for (i = 0; i < 7; i++) {
	// 	if (hash[arr[i]] == 1) cout << arr[i];
	// }

	//better case->when hashing fails for negative numbers
	//using map
	//TC->O(nlogm)+O((n/2)+1) where m=(n/2)+1->size of map SC->O(m)
	// map<int, int>mpp;
	// int i,  arr[] = {1, 1, 2, 3, 3, 4, 4};
	// for (i = 0; i < 7; i++) mpp[arr[i]]++;
	// for (auto x : mpp) {
	// 	if (x.second == 1) cout << x.first;
	// }

	//optimal->THE XOR METHOD TC->O(n) SC->O(1)
	// int XOR = 0, i,  arr[] = {1, 1, 2, 3, 3, 4, 4};
	// for (i = 0; i < 7; i++) XOR = XOR ^ arr[i];
	// cout << XOR;

	//longest subarray with sum k
	//subarray->contigous part of array
	//brute force->O(n^3)
	// int arr[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
	// int i, j, k, len = 0, s, maxsum = 3;
	// for (i = 0; i < 10; i++) {
	// 	s=0;
	// 	for (j = i; j < 10; j++) {

	// 		for (k = i; k <= j; k++) {
	// 			s += arr[k];
	// 		}
	// 		if (s == maxsum) len = max(len, j - i + 1);
	// 	}
	// }
	// cout << len;
	//brute force-2->O(n^2)
	// int arr[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
	// int i, j, len = 0, s, maxsum = 3;
	// for (i = 0; i < 10; i++) {
	// 	s = 0;
	// 	for (j = i; j < 10; j++) {
	// 		s += arr[j];
	// 		if (s == maxsum) len = max(len, j - i + 1);
	// 	}
	// }
	// cout << len;

	//better->hashing
	// int arr[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};





	return 0;
}