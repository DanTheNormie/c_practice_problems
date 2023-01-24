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

    void reverse(){
        Node *prev = NULL, *curr = head, *next;

		while(curr){
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}

		head = prev;
    }
	
	private:
	void recursive_reverse(Node *a, Node *b){
		if(!b){
			head = a;
			return;
		}

		recursive_reverse(b,b->next);
		b->next = a;
	}
	public:
	void reverse2(){
		recursive_reverse(NULL,head);
	}


	void print(){
		Node *temp = head;

		while(temp){
			cout<<temp->data<<" ";
			temp = temp->next;
		}
		cout<<endl;
	}
};


void merge(LL *a, LL *b){
    
}

int main(){
	LL *l1 = new LL();
    LL *l2 = new LL();

	for(int i=0;i<5; i++){
		l1->add_node(i);
	}
    for(int i=5;i<10; i++){
		l2->add_node(i);
	}



	
}