//L3
#include<bits/stdc++.h>
using namespace std;
class Node {
public:
	int data;
	Node* next;
	Node* back;
public:
	Node(int data1) {
		data = data1;
		next = nullptr;
		back = nullptr;
	}
public:
	Node(int data1, Node* next1, Node* back1) {
		data = data1;
		next = next1;
		back = back1;
	}
};
//to convert array to DLL
Node* convertArr2DLL(vector<int>&arr) {
	Node* head = new Node(arr[0]);
	Node* prev = head;
	for (int i = 1; i < arr.size(); i++) {
		Node* temp = new Node(arr[i], nullptr, prev);
		prev->next = temp;
		prev = temp;
	}
	return head;

}
//to delete head
Node* deleteHead(Node*head) {
	if (head == NULL || head->next == NULL) return NULL;
	Node* prev = head;
	head = head->next;
	head->back = nullptr;
	prev->next = nullptr;
	delete prev;
	return head;
}
//to delete tail in DLL
Node* deleteTail(Node* head) {
	if (head == NULL || head->next == NULL) return NULL;
	Node* tail = head;
	while (tail->next != NULL) {
		tail = tail->next;
	}
	Node* prev = tail->back;
	prev->next = nullptr;
	tail->back = nullptr;
	delete tail;
	return head;
}
//to delete the kth element in DLL
Node* deletek(Node* head, int k) {
	if (head == NULL) return NULL;
	Node* kNode = head;
	int cnt = 0;
	while (kNode != NULL) {
		cnt++;
		if (cnt == k) break;
		kNode = kNode->next;
	}
	Node* prev = kNode->back;
	Node* front = kNode->next;
	if (prev == NULL && front == NULL) return NULL;
	else if (prev == NULL) return deleteHead(head);
	else if (front == NULL) return deleteTail(head);
	prev->next = front;
	front->back = prev;
	kNode->back = NULL;//kNode->back=nullptr will also work
	kNode->next = NULL;
	delete kNode;
	return head;

}
//to delete the node of DLL and here node!=head
void deleteNode(Node* temp) {
	Node* prev = temp->back;
	Node* front = temp->next;
	if (front == NULL) {
		prev->next = nullptr;
		temp->back = nullptr;
		free(temp);
		return;
	}
	prev->next = front;
	front->back = prev;
	temp->back = temp->next = nullptr;
	free(temp);
}
//to insert Node before head
Node* insertBeforeHeadinDLL(Node* head, int val) {
	Node* newHead = new Node(val, head, nullptr);
	head->back = newHead;
	return newHead;
}
//to insert Node before head
Node* insertBeforeTail(Node* head, int val) {
	if (head->next == NULL) return insertBeforeHeadinDLL(head, val);
	Node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	Node* prev = temp->back;
	Node* newTail = new Node(val, temp, prev);
	prev->next = newTail;
	temp->back = newTail;
	return head;
}
//insert before the kth element
Node* insertBeforekElement(Node* head, int k, int val) {
	if (k == 1) return insertBeforeHeadinDLL(head, val);
	int cnt = 0;
	Node* temp = head;
	while (temp != NULL) {
		cnt++;
		if (cnt == k) break;
		temp = temp->next;
	}
	Node* prev = temp->back;
	Node* newnode = new Node(val, temp, prev);
	prev->next = newnode;
	temp->back = newnode;
	return head;
}
//insert before given node
void insertBeforeNode(Node* node, int val) {
	Node* prev = node->back;
	Node* newnode = new Node(val, node, prev);
	prev->next = newnode;
	node->back = newnode;
}
void print(Node* head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}
int main() {
	//difference between temp!=NULL and temp->next!=NULL
	//in case 1 it means that temp ke just aage koi node h?
	//in case 2 it means temp ke aage wale node ke paas koi aur node h?
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	vector<int>arr = {12, 5, 8, 7};
	Node* head = convertArr2DLL(arr);
	//to delete head in DLL
	// head = deleteHead(head);
	// print(head);

	//to delete tail in DLL
	// head = deleteTail(head);
	// print(head);

	//to delete the kth element in DLL
	// head = deletek(head, 2);
	// print(head);

	//to delete the node of DLL
	// deleteNode(head->next);//or deleteNode(head->next->next);
	// print(head);

	//to insert Node before head
	// head = insertBeforeHeadinDLL(head, 100);
	// print(head);

	//to insert Node before tail
	// head = insertBeforeTail(head, 1000);
	// print(head);

	//insert before the kth element
	// head = insertBeforekElement(head, 2, 32);
	// print(head);

	//insert before given node
	insertBeforeNode(head->next, 100);
	print(head);



	return 0;
}