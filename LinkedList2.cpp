#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        
        Node(int val){
            this->data = val;
            this->next == nullptr;
    }
};
// insert 
// serach
// insertAtBegining 
// deleteNode 
class LinkedList{
    public:
        Node* head;
        
        LinkedList(){
            head=nullptr;
        }
        
        void insert(int val){
            Node* newNode = new Node(val);
            if(head==nullptr){
                head = newNode;
                return;
            }
            Node* temp = head;
            while(temp->next!=nullptr) temp = temp->next;
            temp ->next = newNode;
            return;
        }
        
        void instertAtBegining(int val){
            Node* newNode = new Node(val);
            newNode->next = head;
            head = newNode;
        }
        
        void deleteNode(int val){
            if(head==nullptr) return;
            if(head->data == val){
                Node* temp = head->next;
                delete head;
                head = temp;
                return;
            }
            Node* temp = head;
            while(temp->next!=nullptr && temp->next->data !=val) temp = temp ->next;
            
            if(temp->next ==nullptr) return;
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            
        }
        
        bool serach(int val){
            if(head==nullptr) return false;
            Node* temp=head;
            while(temp!=nullptr && temp->data != val) temp=temp->next;
            if(temp==nullptr) return false;
            return true;
        }
        void printList(){
            if(head==nullptr) return;
            Node* temp = head;
            while(temp!=nullptr){
                cout<< temp->data;
                temp=temp->next;
            }
        }
};


int main() {
    LinkedList linkedList;
    linkedList.insert(3);
    linkedList.insert(4);
    linkedList.insert(5);
    linkedList.printList();
    cout << "search" << linkedList.serach(5);
    linkedList.deleteNode(4);
    linkedList.printList();
    cout << "Hello Geek!";
    return 0;
}















