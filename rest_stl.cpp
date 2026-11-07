#include<bits/stdc++.h>
using namespace std;
//**************************LISTS**************************
/*void explainList() {
	list<int>ls;
	ls.push_back(2);//{2}
	ls.emplace_back(4);//{2,4}
	ls.push_front(1);//{1,2,4} push_front:adds element at the front
	ls.emplace_front(0);
	for (int x : ls) {
		cout << x << " ";
	}
	cout << endl;
}*/
//rest functions are same as vector
//begin,end,rbegin,rend,clear,insert,size,swap,empty

//*****************************Deque****************************
/*void explainDeque() {
	deque<int>dq;
	dq.push_back(1);//{1}
	dq.emplace_back(2);//{1,2}
	dq.push_front(0);//{0,1,2}
	dq.emplace_front(0);//{0,0,1,2}
	dq.pop_back();//{0,0,1}
	dq.pop_front();//{0,1}
	dq.back();//returns last element ie {1}
	dq.front();//returns first element ie {0}
	for (int x : dq) {
		cout << x << " ";
	}
	cout << endl;
}*/
//rest functions are same as vector
//begin,end,rbegin,rend,clear,insert,size,swap,empty

//*****************************Stack****************************
void explainStack() {
	//stack
	//LIFO=last in first out
	stack<int>st;
	st.push(1);//{1} - pushes in front
	st.push(2);//{2,1}
	st.push(3);//{3,2,1}
	st.emplace(4);//{4,3,2,1}
	deque<int> dq = {11, 12, 13, 14};
	stack<int> stt(dq);
	stt.swap(st);
	cout << "STACK:" << endl;
	cout << "size:" << st.size() << endl;
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
	cout << endl;
	cout << "swapping:" << endl;
	//swap
	while (!stt.empty()) {
		cout << stt.top() << " ";
		stt.pop();
	}

}
//*************************QUEUE******************************
//FIFO=first in first out
/*void explainQueue() {
	queue<int>q;
	q.push(1);//{1}
	q.push(2);//{1,2}
	q.push(3);//{1,2,3}
	q.emplace(4);//{1,2,3,4}
	q.back() += 5;
	cout << "size:" << q.size() << endl;
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
}*/
//rest operations are same.

//********************Priority Queue********************************
/*void explainPQ() {
	//Max Heap-to store maximum values first
	priority_queue<int>pq;
	pq.push(5);//{5}
	pq.push(2);//{5,2}
	pq.push(8);//{8,5,2}//decending order mein arrange krta h
	pq.emplace(10);//{10,8,5,2}
	cout << "Element at top in {10,8,5,2}:" << pq.top() << endl;
	pq.pop();//{8,5,2}
	//Minimum Heap-to store the minimum values first
	priority_queue<int , vector<int>, greater<int>>pq1;
	pq1.push(5);//{5}
	pq1.push(2);//{2,5}
	pq1.push(8);//{2,5,8}
	pq1.emplace(10);//{2,5,8,10}//increasing order
	cout << "Element at top in {2,5,8,10}:" << pq1.top() << endl;


}*/
//size swap empty function same as others

//*************************SET****************************
/*void explainSet() {
	set<int>st;//set stores in sorted order and every element is unique
	st.insert(0);//{0}
	st.insert(1);//{0,1}
	st.insert(2);//{0,1,2}
	st.emplace(2);//{0,1,2}
	st.insert(3);//{0,1,2,3}
	st.insert(4);//{0,1,2,3,4}
	st.insert(5);//{0,1,2,3,4,5}

	cout << "Set:" << endl;
	for (int x : st) {
		cout << x << " ";
	}
	cout << endl;

	//upper_bound(x) : returns first element >x.
	auto ub = st.upper_bound(3);
	cout << "Upper bound of 3 : " << *ub << endl;

	auto ub1 = st.upper_bound(6);
	cout << "Upper bound of 6 : " << *ub1 << endl;

	//lower_bound(x) : returns first element >=x.
	auto lb = st.lower_bound(2);
	cout << "Lower bound of 2 : " << *lb << endl;

	auto lb1 = st.lower_bound(6);
	cout << "Lower bound of 6 : " << *lb1 << endl;


	//find points to the address and not the value
	//hence use dereferenceing operator to print
	auto it = st.find(0);
	cout << "Element found : " << *(it) << endl;

	//removing a single element
	cout << "Removing 0..." << endl;
	st.erase(it);

	//removing multiple elements
	auto it2 = st.find(1);
	auto it3 = st.find(3);
	st.erase(it2, it3);//deletes elements from 1 to 3 (4 excluded)
	//st.erase(start,end) and removes elements till end-1

	cout << "After removing from [" << *it2 << "," << *it3 << ")" << endl;

	for (int x : st) {
		cout << x << " ";
	}
	cout << endl;

	auto it1 = st.find(6);
	cout << "Finding element 6:" << endl;
	if (it1 != st.end())
		cout << *it1 << endl;
	else
		cout << "Element not found" << endl;

	//to erase-it takes logarithmic time
	st.erase(5);//st.erase(value)

	//to count-st.count(value)
	int cnt = st.count(4);//value exists
	cout << "Number of times 5 is there : " << cnt << endl;
	int cnt1 = st.count(6);//value doesn't exist
	cout << "Number of times 6 is there : " << cnt1 << endl;

	//prev(iterator, n);--n->number of positions to move back (default is 1)


}*/

//********************Multi Set********************************8


/*void explainMultiSet() {
	//everything is same as set
	//but it stores duplicate values as well
	multiset<int>ms;
	ms.insert(1);//{1}
	ms.insert(1);//{1,1}
	ms.insert(2);//{1,1,2}
	ms.insert(1);//{1,1,1,2}
	//stores all similar elements together.

	cout << "MultiSet : " << endl;
	for (int x : ms) {
		cout << x << " ";
	}
	cout << endl;

	//removing a single 1
	ms.erase(ms.find(1));
	cout << "After removing single 1 : " << endl;
	for (int x : ms) {
		cout << x << " ";
	}
	cout << endl;
	//doubt
	//ms.erase(ms.find(1), ms.find(1)+2);
	for (int x : ms) {
		cout << x << " ";
	}
	cout << endl;

// ms.erase(1);//removes all 1's -> {2}
// cout << "After removing all 1's : " << endl;
// for (int x : ms) {
// 	cout << x << " ";
// }
// cout << endl;

}
*/
//rest all functions are same as set

/*void explainUSet() {//--->this has O(1) which is very very useful for conditioned tc->google

	//same as set just unordered->not sorted
	//O(1)->best case TC
	//O(N)->Worst case
	//lower_bound and upper_bound doesn't work
	unordered_set<int>st;
	st.insert(0);//{0}
	st.insert(1);//{1,0}
	st.insert(1);//{1,0}
	st.insert(2);//{2,1,0}
	st.emplace(3);//{3,2,1,0}
	for (int x : st) {
		cout << x << " ";
	}
	cout << endl;

}*/
/*



/******************************Map*******************************


void explainMap() {
	//basically it is a key value pair
	//it stores unique keys in sorted order(in terms of key)
	//ways to define map
	//#1
	map<int, string>mpp1;//<int=key,int=value>
	//to store values in this method
	mpp1[1] = "Jay"; //1st way
	mpp1.insert({12, "Rohit"}); //2nd way->{key,value}
	mpp1.emplace(22, "Abhishek");//3rd way
	cout << "First Map: " << endl;
	for (auto x : mpp1) {
		cout << x.first << ":" << x.second << endl ;
	}
	cout << endl;

	//lower_bound
	cout << "lower_bound for 12:" << endl;
	auto lb = mpp1.lower_bound(12);
	cout << (*lb).second << endl;//or lb->second ==better for developers

	//upper_bound
	cout << "upper_bound for 32:" << endl;
	auto up = mpp1.upper_bound(32);
	if (up != mpp1.end()) cout << up->second << endl;
	else cout << "No such value exists." << endl;
	cout << endl;

	//#2
	map<int, pair<int, int>>mpp2; //1 key and two values
	mpp2.insert({1, {2, 3}});
	mpp2.insert({11, {12, 13}});
	mpp2[21] = {22, 23};
	cout << "Second Map: " << endl;
	for (auto x : mpp2) {
		cout << x.first << ":" << x.second.first << "," << x.second.second << endl;
	}
	cout << endl;
	int a;
	cout << "Enter the key for which you want to find the value : " << endl;
	cin >> a;
	auto it = mpp2.find(a);
	cout << "Here it is : " << (*it).second.first << "," << (*it).second.second << endl;

	//#3
	map<pair<int, string>, char>mpp3; //two keys and 1 value
	mpp3[ {100, "Mohit"}] = 'A'; //two keys 1 value
}*/
//erase,swap,size,empty are same as above.
/*

/********************Multi Map*****************************
void explainMultimap() {
	//similar to map but you can store duplicate keys
	//example:{1,2} and {1,3}
	//mpp[key] cant be used here
}*/
/*

//**********************Unordered Map*****************************


void explainUnorderedMap() {
	//same as set and store in unordered manner
	//works in O(1)->generally and rarely-O(N)
}*/


//************************Comp************************
/*
bool comp(pair<int, int>p1, pair<int, int>p2) {
	if (p1.second > p2.second) return false;
	if (p1.second < p2.second) return true;
	else {
		if (p1.first < p2.first) return true;
		else return false;
	}
}
*/
//*************************Extra******************************
/*
void explainExtra() {
	//Arrays
	//in ascending order
	cout << "For arrays : " << endl;
	int arr[5] = {111, 22, 124354, 323, 543};
	sort(arr, arr + 4);
	cout << "In ascending order : " << endl; //sort(start,end) here end is excluded
	for (int x : arr) {
		cout << x << " ";
	}
	cout << endl;
	//in descending order
	cout << "In descending order" << endl;
	sort(arr, arr + 5, greater<int>());
	for (int x : arr) {
		cout << x << " ";
	}
	cout << endl;


	//Vectors
	cout << "For vectors (end-to-end) : " << endl;
	vector<int>v = {5, 4, 2, 7, 1};
	sort(v.begin(), v.end()); //if u want to do it from end-to-end
	for (int x : v) {
		cout << x << " ";
	}
	cout << endl;

	cout << "For vectors (over a range)  :" << endl;
	vector<int>vv = {9, 54, 5, 1, 0, 3};
	sort(vv.begin() + 2, vv.begin() + 5);
	for (int x : vv) {
		cout << x << " ";
	}
	cout << endl;

	//Pair
	pair<int, int>p[] = {{1, 2}, {3, 4}, {5, 6}, {5, 4}};
	//sort it acc to second element
	//if second element is same then sort acc to first element
	//but in descending order
	sort(p, p + 3, comp);
	cout << "{";
	for (auto x : p) {
		cout << "{" << x.first << "," << x.second << "}";
	}
	cout << "}" << endl;
}*/

//*****************Builtin Popcount*********************
//it counts the no. of set bits (1s) in a number very efficiently.
/*
void builtinpopcount() {
	int n = 7;
	int cnt = __builtin_popcount(n);
	long long nn = 12123214235645;
	int cntt = __builtin_popcountll(nn); //for long long put ll at the end
	cout << "1's in " << n << " is : " << cnt << endl;
	cout << "1's in " << nn << " is : " << cntt << endl;
}*/
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	// explainList();
	// explainDeque();
	explainStack();
	// explainQueue();
	// explainPQ();
	// explainSet();
	// explainMultiSet();
	// explainUSet();
	// explainMap();
	// explainExtra();
	// builtinpopcount();
	return 0;
}