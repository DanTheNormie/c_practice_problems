#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node *next;

	Node(int d){
		data = d;
		next = NULL;
	}
};

class LL{
	public:
	Node *head;
	Node *tail;

	LL(){
		head = tail = NULL;
	}

	void add_node(int data){
		Node *temp = new Node(data);
		if(!head){
			head = tail = temp;
			return;
		}
		tail->next = temp;
		tail = temp;
	}

	Node* findMiddleNode(){
		Node *fast,*slow;
		fast = slow = head;

		while(fast->next && fast->next->next){
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow;
	}

	bool isPalindrome(){
		Node *a,*b;
		a = head;
		b = findMiddleNode();

		/* reversing mid-end */
		Node *prev = b,*curr = b->next,*next;

		while(curr){
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}

		/* checking for palindrome */

		while(a != b and prev != b){
			if(a->data != prev->data) return false;
			a = a->next;
			prev = prev->next;
		}
		return true;
	}
};


int main() {
	int n,x;
	cin>>n;
	LL *list = new LL();

	while(n--){
		cin>>x;
		list->add_node(x);
	}
	
	if(list->isPalindrome()) cout<<"true";
	else cout<<"false";

	return 0;
}