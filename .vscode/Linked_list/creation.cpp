#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList{
    public:
    Node *head;
    Node *tail;

    
    LinkedList(Node *head){
        this->head = head;
        this->tail = head;
    }

    void add_node_at_last(int data){
        Node *temp = new Node(data);
        if(tail==NULL){
            head = tail = temp;
            return;
        }
        tail->next = temp;
        tail = temp;
    }

    void add_node_at_front(int data){
        Node *temp = new Node(data);
        if(head == NULL){
            head = temp;
            return;
        }

        temp->next = head;
        head = temp;
    }

    void delete_last_node(){
        if(tail == NULL) {
            cout<<"List is Empty !"<<endl;
            return;
        }
        if(head->next == NULL) {
            delete head;
            head = NULL;
            tail = NULL;
            return;
        }
        Node *temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        delete tail;
        temp->next = NULL;
        tail = temp; 
    }
    void delete_first_node(){
        if(head == NULL) {
            cout<<"List is Empty !"<<endl;
            return;
        }
        if(head->next==NULL) {
            delete head;
            head = NULL;
            tail = NULL;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    void traverse(){
        if(head==NULL){
            cout<<"List is Empty !"<<endl;
            return;
        }

        Node *temp = head;
        do{
            cout<<temp->data<<" ";
            temp = temp->next;
        }while(temp != NULL);
        cout<<endl;
    }

    int size(){
        if(head == NULL) return 0;
        if(head->next == NULL )return 1;
        int size = 1;
        Node *temp = head->next;
        while(temp != NULL){
            size++;
            temp = temp->next;
        }
        return size;
    }

    Node* find_middle_node(){
        if(head==NULL){
            cout<<"List is Empty!"<<endl;
            return NULL;
        }

        Node *fast = this->head;
        Node *slow = this->head;

        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    void insert_node_in_middle(int data){
        Node *temp = new Node(data);
        if(head==NULL){
            head = tail = temp;
            return;
        }
        Node *middle = find_middle_node();
        temp->next = middle->next;
        middle->next = temp;
    }

    void update_tail(){
        Node *temp = head;
        if(temp==NULL) return;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        tail = temp;
    }

    bool is_LL_cyclic(){

        Node *fast = head;
        Node *slow = head;

        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }

    
};





int main(){
    Node *head = new Node(50);

    LinkedList *ll = new LinkedList(head);
    ll->traverse();
    ll->delete_first_node();
    ll->traverse();

    
    ll->insert_node_in_middle(11);
    ll->traverse();
    ll->insert_node_in_middle(12);
    ll->traverse();
    ll->insert_node_in_middle(13);
    ll->traverse();
    ll->insert_node_in_middle(14);
    ll->traverse();
    ll->insert_node_in_middle(15);
    ll->traverse();
    ll->update_tail();
    ll->tail->next = ll->find_middle_node();
    cout<<ll->is_LL_cyclic();
    

}