// #include<bits/stdc++.h>
// using namespace std;
// //********************STL*********************************
// //----------------------Pairs-----------------------------
// /*
// void explainPair() {
// 	pair<int, string>p1 = {1, "3a"};
// 	cout << p1.first << " " << p1.second << endl;
// 	pair<int, pair<int, int>>p2 = {1, {2, 3}};
// 	cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;
// 	pair<int, int>arr[] = {{1, 2}, {21, 5}, {15, 11}, {55, 67}};
// 	cout << arr[0].second << " " << arr[2].second << " " << arr[3].first;

// }*/

// int main() {
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// 	// explainPair();
// 	//Vectors
// 	vector<int> v1;//declaration
// 	v1 = {1, 2, 3};//initialization
// 	vector<int>v2(3, 5);//v2(no of elements,value)
// 	cout << "v2:" << endl;
// 	for (int x : v2) {
// 		cout << x << " ";
// 	}
// 	cout << endl;
// 	//if you dont want to give value but just want space then it gives 0 instead of value
// 	vector<int>v(5);//v(no of elements)
// 	cout << "v:" << endl;
// 	for (int x : v) {
// 		cout << x << " ";
// 	}
// 	cout << endl;
// 	vector<int>v3 = {11, 21, 32};
// 	cout << "v3:" << endl;
// 	for (int x : v3) {
// 		cout << x << " ";
// 	}
// 	cout << endl;
// 	//to copy
// 	vector<int>v4(v3);
// 	cout << "v4:" << endl;
// 	for (int x : v4) {
// 		cout << x << " ";
// 	}
// 	cout << endl;
// 	//another way to copy some part of another vector
// 	vector<int>v6 = {1, 2};
// 	v6.insert(v6.begin(), v.begin() + 3, v.end());
// 	//v6.insert(position in v6,starting part of
// 	//vector from which u want to copy,ending part of vector
// 	//from which you want to copy)
// 	//printing
// 	for (auto it = v6.begin(); it != v6.end(); it++) {
// 		cout << *(it) << " ";
// 	}
// 	cout << endl;
// 	//inserting elements
// 	v1.push_back(4);//push_back(value)-adds at the end
// 	v1.insert(v1.begin() + 0, 5);
// 	//insert(position,value)-adds at the position and v1.begin()+ is imp
// 	v1.insert(v1.begin() + 3, 6, 12);
// 	//v1.insert(start,no of times,value)
// 	//printing
// 	cout << "v1:" << endl;
// 	for (int x : v1) {
// 		cout << x << " ";
// 	}
// 	cout << endl;
// 	//vector and pair together
// vector < pair<int, int>>v5;
// v5.push_back({10, 20});
// v5.emplace_back(30, 40); //no need to use curly braces and give only 2 values for more values use tuple
// 	//printing
// cout << "v5:" << endl;
// for (auto x : v5) {
// cout << x.first << " " << x.second << endl;
// }
// 	//time for char
// 	vector<char>c1 = {'a', 'b', 'c'};
// 	c1.push_back('d');
// 	c1.insert(c1.begin() + 0, '@');
// 	c1.emplace_back('e');
// 	//printing
// 	cout << "c1:" << endl;
// 	for (char x : c1) {
// 		cout << x << " ";
// 	}
// 	cout << endl;

// 	//*********************to access elements in vectors*************************8
// 	//iterators
// 	cout << "v1:" << endl;
// 	for (vector<int>::iterator it1 = v1.begin(); it1 != v1.end(); it1++) {
// 		cout << *(it1) << " ";
// 	}
// 	cout << endl;
// 	//or
// 	for (auto it = v1.begin(); it != v1.end(); it++) {
// 		cout << *(it) << " ";
// 	}
// 	cout << endl;
// 	//or
// 	for (auto x : v1) {
// 		cout << x << " ";
// 	}
// 	cout << endl;
// 	//it is a variable
// 	//v.begin() points directly to the memory address and
// 	//not the element stored

// 	vector<int>::iterator it2 = v1.end(); //v.end() points righ tafter the last element
// 	//vector<int>::iterator it3 = v1.rend(); //rend=reverse end it reverses the vector
// 	//vector<int>::iterator it4 = v1.rbegin(); //v1.rbegin() points to the last element
// 	//rbeign is reverse iteration ie if u do it++ it'll point to n-1/second last element
// 	cout << "v4[0]:" << v4[0] << " " << v4.at(0) << endl; //[] =faster .at() =slower+for debigging
// 	cout << "v4.back()" << v4.back() << endl; //last element


// 	//**********************deleting elements****************************
// 	//to delete a single element
// 	v3.erase(v3.begin() + 1); //v.erase(element position);
// 	cout << "v3 after deleting :" << endl;
// 	for (int x : v3) {
// 		cout << x << " ";
// 	}
// 	cout << endl;
// 	//to delete a range of values
// 	v2.erase(v2.begin() + 2, v2.end());
// 	//v2.erase(start,end) here it deletes elements till end-1
// 	cout << "v2 after deleting :" << endl;
// 	for (int x : v2) {
// 		cout << x << " ";
// 	}
// 	cout << endl;
// 	//********************some other functions******************
// 	//size
// 	cout << v.size() << endl;
// 	//pop_back()-removes last element
// 	cout << "v6 before pop:" << endl;
// 	for (int x : v6) {
// 		cout << x << " ";
// 	}
// 	cout << endl;
// 	v6.pop_back();
// 	cout << "v6 after pop:" << endl;
// 	for (int x : v6) {
// 		cout << x << " ";
// 	}
// 	cout << endl;
// 	//swap
// 	vector<int>a = {27, 4};
// 	vector<int>b = {4, 9};
// 	cout << "a before swapping:" << endl;
// 	for (int x : a) {
// 		cout << x << " ";
// 	}
// 	cout << endl;
// 	cout << "b before swapping:" << endl;
// 	for (int x : b) {
// 		cout << x << " ";
// 	}
// 	cout << endl;
// 	a.swap(b);
// 	cout << "a after swapping:" << endl;
// 	for (int x : a) {
// 		cout << x << " ";
// 	}
// 	cout << endl;
// 	cout << "b after swapping:" << endl;
// 	for (int x : b) {
// 		cout << x << " ";
// 	}
// 	cout << endl;
// 	//v.clear()-to delete the entire vector
// 	cout << "v1 before clear():" << endl;
// 	for (int x : v1) {
// 		cout << x << " ";
// 	}
// 	cout << endl;
// 	cout << "v1 after clear():" << endl;
// 	v1.clear();
// 	for (int x : v1) {
// 		cout << x << " ";
// 	}
// 	cout << endl;
// 	//v.empty()-to check whether the vector is empty or not
// 	// if(v1.empty())
// 	if (v2.empty()) cout << "yes";
// 	else cout << "no";

// 	return 0;
// }




//------------------New topics-----------------------
#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	//1.assign()->to replace the entire vector
	vector<int>v1 = {1, 2, 3};
	v1.assign(3, 27); //assign(times,element)->{27, 27, 27}
	//2.resize()
	v1.resize(5);//{27,27,27,0,0}
	//3.reserve()->imp in cp but not lc->preallocates memory
	v1.reserve(100000);//reserve(size)
	//4.front()->returns first element
	// cout << v1.front();//27
	//5.reverse(start,end)
	vector<int>v2 = {32, 124, 1, 0, 234};
	reverse(v2.begin(), v2.end());//{234,0,1,124,32}
	//6.sort(start,end)
	sort(v2.begin(), v2.end());//{0,1,32,124,234}
	//7.find(start,end,element)
	// auto it = find(v2.begin(), v2.end(), 0);
	// cout << *it;
	//8.count(start,end,element)
	int cnt = count(v1.begin(), v1.end(), 27);//3
	//9.min_element and max_element
	// cout << *max_element(v2.begin(), v2.end()) << " " << *min_element(v2.begin(), v2.end());
	//accumulate()->calculates sum
	int sum = accumulate(v2.begin(), v2.end(), 0);//accumulate(start,end,initial value)->391
	// cout << sum;
	//10.binary search->
	//Binary search is a fast algorithm for finding a target value in a sorted list
	//by repeatedly cutting the search space in half.
	//binary_search(first, last, value);->return T/F
	//sort the array/vector first
	// cout << binary_search(v2.begin(), v2.end(), 23) << endl;
	// cout << binary_search(v2.begin(), v2.end(), 234) << endl;
	//11.unique(start,end) and erase(start,end)
	//to remove duplicates
	vector<int>v = {1, 1, 2, 3, 3, 3, 3, 2};//sort first
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());//{1,2,3}
	//12.lower_bound()
	//lower_bound() returns an iterator pointing to the
	// first element that is greater than or equal to (>=) the target.
	//eg1
	vector<int> arr = {1, 3, 5, 7, 9};
	// auto it = lower_bound(arr.begin(), arr.end(), 5);//5
	//eg2
	// auto it = lower_bound(arr.begin(), arr.end(), 6);//7
	//eg3
	// auto it = lower_bound(arr.begin(), arr.end(), 0);//1
	// eg4
	// auto it = lower_bound(arr.begin(), arr.end(), 10);//returns arr.end()
	//13.upper_bound()
	// Returns the first element strictly greater than (>) the target.
	//eg1
	upper_bound(arr.begin(), arr.end(), 5); //7
	//eg2
	upper_bound(arr.begin(), arr.end(), 6); //7
	//eg3
	upper_bound(arr.begin(), arr.end(), 9); //returns arr.end()
	// cout << *(it);

	//14-distance
	//distance(start,iterator) eg:distance(v.begin(),it) where
	//auto it=find(temp.begin(),temp.end(),nums[i])
	//so basically distance is b/w starting pt of v till it
	return 0;
}