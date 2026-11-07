#include<bits/stdc++.h>
using namespace std;
//print name 5 times using recursion (parameterized)
/*
int cnt = 0;
void printName(string name, int n) {
	if (cnt == n) {
		return;
	}
	cout << name << endl;
	cnt++;
	printName(name, n);
}*/
//print numbers from 1 to n using recursion
/*int cnt = 1;
void printNumbers(int n) {
	if (cnt == n) {
		return;
	}
	cout << cnt << " ";
	cnt++;
	printNumbers(n);
}*/
//print numbers from n to 1 using recursion
//parameterized
// void f(int i,int n){
// 	if(i>n){
// 		return;
// 	}
// 	cout<<i<<" ";
// 	f(i+1,n);
// }
//parameterized-by backtracking
/*
void f(int i, int n) {
	if (i > n) {
		return;
	}
	cout << n << " ";
	n--;
	f(i, n);
}*/
//sum of first n numbers
//parameterized-by backtracking
/*
void sum(int s, int n) {
	if (n == 0) {
		cout << s;
		return;
	}
	s += n;
	n--;
	sum(s, n);
}*/
//functional
// int s(int n) {
// 	if (n == 0) return 0;
// 	return n + s(n - 1);
// }
//print factorial of a number using recursion
// int fact(int n) {
// 	if (n == 0 || n == 1) {
// 		return 1;
// 	}
// 	if (n > 1) {
// 		return n * fact(n - 1);
// 	}
// }
//reverse an array
//2 pointers
// void f(int arr[], int l, int r) {
// 	if (l >= r) {
// 		return;
// 	}
// 	swap(arr[l], arr[r]);
// 	f(arr, l + 1, r - 1);
// }
//1 pointer
// void f(int arr[], int i, int n) {
// 	if (i >= n / 2) return;
// 	swap(arr[i], arr[n - i - 1]);
// 	f(arr, i + 1, n);
// }

//check if string is palindrome or not
//functional
// bool palindrome(string s, int i) {
// 	if (i >= s.size() / 2) return true;
// 	if (s[i] != s[s.size() - i - 1]) return false;
// 	return palindrome(s, i + 1);
// }

//fibonaccai series
/*int f(int n) {
	if (n <= 1) return n;
	return f(n - 1) + f(n - 2);
}*/
//draw recursion tree
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	//********************Recursion*************************
	//when a function calls itself again and again until a
	//specific condition is met->that conditn is base conditn
	//base conditn->jahan pe recursion rokna pade
	//stack overflow
	//Recursion Tree:diagram in which functn calls itself over n over
	//f()->f()->f()->f()

	//two types:i)parameterized ii)functional


	// string name;
	// int n;
	// cin >> name;
	// cin >> n;
	// printName(name, n);


	// int n;
	// cin>>n;
	// printNumbers(n);

	// int n;
	// cin >> n;
	// f(1, n);

	// int n;
	// cin >> n;
	// cout << s(n);
	// sum(0, n);

	// int n;
	// cin >> n;
	// cout << fact(n);

	// int n;
	// cin >> n;
	// int arr[n];
	// for (int i = 0; i < n; i++) cin >> arr[i];
	// f(arr, 0, n - 1);
	// for (int i = 0; i < n; i++) cout << arr[i] << " ";


	// string s = "HelloWorld";
	// cout << palindrome(s, 0);
	// string s = "madam";
	// cout << palindrome(s, 0);


	int n;
	cin >> n;
	cout << f(n);


	return 0;
}