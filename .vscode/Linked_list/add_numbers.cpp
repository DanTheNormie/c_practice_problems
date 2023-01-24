#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
	int data;
	Node *next;

	Node(int data){
		this->data = data;
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

    void traverse(){
        Node *temp = head;

        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};


LL* add_LL_as_numbers(LL *a, LL *b){
    a->reverse();
    b->reverse();

    Node *p1 = a->head, *p2 = b->head;
    LL *ans = new LL();
    int carry=0;
    while(p1 and p2){
        int num = (p1->data) + (p2->data) + carry;
        ans->add_node(num%10);
        carry = num/10;
        p1 = p1->next;
        p2 = p2->next;
    }
    while(p1){
        int num = (p1->data) + carry;
        ans->add_node(num%10);
        carry=num/10;
        p1 = p1->next;
    }
    while(p2){
        int num = (p2->data) + carry;
        ans->add_node(num%10);
        carry=num/10;
        p2 = p2->next;
    }
    while(carry){
        ans->add_node(carry%10);
        carry /=10;
    }

    ans->reverse();
    return ans;
}



int main () {
    int n1,n2,x;
    cin>>n1>>n2;
    LL *l1 = new LL();
    LL *l2 = new LL();

    for(int i=0; i<n1; i++){
        cin>>x;
        l1->add_node(x);
    }
    for(int i=0; i<n2; i++){
        cin>>x;
        l2->add_node(x);
    }

    LL *ans = add_LL_as_numbers(l1,l2);

    ans->traverse();


	return 0;
}
