#include<iostream>
using namespace std;

/*LEVEL ORDER TRAVERSAL TC->O(N) SC->O(N)*/
//using queue
class Solution{
public:
	vector<vector<int>> levelOrder(Node* root){
		vector<vector<int>>ans;
		if(root==NULL) return ans;
		queue<Node*>q;//queue mein node daalo
		q.push(root);
		while(!q.empty()){
			vector<int>level;//level mein node->val daalo
			int size=q.size();
			for(int i=0;i<size;i++){
				Node* node=q.front();
				q.pop();
				if(node->left!=NULL) q.push(node->left);
				if(node->right!=NULL) q.push(node->right);
				level.push_back(node->val);
			}
			ans.push_back(level);
		}
		return ans;
	}
};
/*LEVEL ORDER TRAVERSAL TC->O(N) SC->O(N)*/


/*ITERATIVE PREORDER TC->O(N) SC->O(N)*/
//using stack and loop
class Solution{
public:
	vector<int> preorderTraversal(Node* root){
		vector<int>preorder;//preorder mein node->val daalo
		if(root==NULL) return preorder;
		stack<Node*> st;//stack mein nodes daalo but left right nhi pehle right left because ye LIFO h
		st.push(root);
		while(!st.empty()){
			root=st.top();
			st.pop();
			preorder.push_back(root->val);
			if(root->right!=NULL) st.push(root->right);
			if(root->left!=NULL) st.push(root->left);
		}
		return preorder;
	}
};
/*ITERATIVE PREORDER*/


/*ITERATIVE INORDER TC->O(N) SC->O(N)*/
class Solution{
public:
	vector<int> inorderTraversal(Node* root){
		stack<Node*> st;
		Node* node=root;
		vector<int>inorder;
		while(true){
			if(node!=NULL){
				st.push(node);
				node=node->left;
			}
			else{//ie node=NULL
				if(st.empty()==true) break;
				node=st.top();
				st.pop();
				inorder.push_back(node->val);
				node=node->right;
			}
		}
		return inorder;
	}
};
/*ITERATIVE INORDER*/

/*ITERATIVE POSTORDER TC->O(N) SC->O(N)*/
class Soltuion{
public:
	vector<int>postOrderTraversal(Node* root){
		vector<int>postorder;
		stack<Node*>st1,st2;
		st1.push(root);
		while(!st1.empty()){
			root=st1.top();
			st1.top();
			st2.push(root);
			if(root->left!=NULL) st1.push(root->left);
			if(root->right!=NULL) st1.push(root->right);
		}
		while(!st2.empty()){
			postorder.push_back(st2.top()->val);
			st2.pop();
		}
		return postorder;
	}
}
/*ITERATIVE POSTORDER TC->O(N) SC->O(2N)*/

/*ITERATIVE POSTORDER TC->O(N) SC->O(2N) using 1 stack*/
class Solution{
public:
	vector<int>postOrderTraversal(Node* root){
		vector<int>postorder;
		stack<Node*>st;
		Node* curr=root;
		while(curr!=NULL || !st.empty()){
			if(curr!=NULL){
				st.push(curr);
				curr=curr->left;
			}
			else{
				Node* temp=st.top()->right;
				if(temp==NULL){
					temp=st.top();
					st.pop();
					postorder.push_back(temp->val);
					while(!st.empty() && temp==st.top()->right){
						temp=st.top();
						st.pop();
						postorder.push_back(temp->val);
					}
				}
				else curr=temp;
			}
		}
		return postorder;
	}
};
/*ITERATIVE POSTORDER TC->O(2N) SC->O(N) using 1 stack*/


/*Preorder,Inorder,Postorder Traversal using a stack and all using same code*/
class Solution{
public:
	vector<int> preInPostTraversal(TreeNode* root){
		stack<pair<TreeNode*,int>> st;
		vector<int> pre,in,post;
		st.push({root,1});
		if(root==NULL) return;
		while(!st.empty()){
			auto it=st.top();
			st.pop();
			if(it.second==1){
				//pre
				pre.push_back(it.first->val);
				it.second++;
				st.push(it);
				if(it.first->left!=NULL) st.push({it.first->left,1});
			}
			else if(it.second==2){
				//in
				in.push_back(it.first->val);
				it.second++;
				st.push(it);
				if(it.first->right!=NULL) st.push({it.first->right,1});
			}
			else{
				//post
				post.push_back(it.first->val);
			}
		}
	}
}

/*Maximum depth of binary tree*/
class Solution{
public:
	int maxDepth(TreeNode* root){
		if(root==NULL) return 0;
		int lh=maxDepth(root->left);
		int rh=maxDepth(root->right);
		return 1+max(lh,rh);
	}
}


/*Check for balanced binary tree*/
//TC->O(N) ,if skew tree -> SC->O(N)
class Solution{
public:
	int dfsHeight(TreeNode* root){
		if(root==NULL) return 0;
		int lh=dfsHeight(root->left);
		if(lh==-1) return -1;
		int rh=dfsHeight(root->right);
		if(rh==-1) return -1;
		if(abs(lh-rh)>1) return -1;
		return 1+max(lh,rh);
	}
	bool isBalanced(TreeNode* root){
		return dfHeight(root)!=-1;
	}
}

/*Diameter of Binary Tree*/

/*DFS TC->O(N) SC->O(N)*/
//using recursion
void preorder(node){
	if(node==NULL) return;
	print(node->val);
	preorder(node->left);
	preorder(node->right);
}

void inorder(node){
	if(node==NULL) return;
	inorder(node->left);
	print(node->data);
	inorder(node->right);
}

void postorder(node){
	if(node==NULL) return;
	postorder(node->left);
	postorder(node->right);
	print(node->data);
}


struct Node{
	int data;
	Struct Node* left;
	Struct Node* right;
	Node(int val){
		data=val;
		left=right=NULL;
	}
}
int main(){
	struct Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);


	return 0;
}