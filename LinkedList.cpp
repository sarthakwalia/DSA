class Node{
    int data;
    Node* next;

    Node(int data){
        this.data = data;
        this.next = nullptr;
    }
}

class LinkedList{
    Node* head;

    LinkedList(){
        head = nullptr;
    }
    void insert(int val){
        Node* newNode = new Node(val);

        if(head ==nullptr){
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next!=nullptr){
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void insertAtBegining(int data){
        Node* newNode = Node(data);
        newNode->next = head;
        head = newNode;
    }

    void deleteNode(int key){
        if(head == nullptr) return;

        if(head-> data == key) {
            Node* toDelete = head;
            head= head ->next;
            delete toDelete;
            return ;
        }

        Node* temp = head;
        
        while(temp->next!=nullptr && temp->next->data!=key) temp = temp->next;
        if(temp ->next == nullptr) return 

        Node* toDelete = temp->next;
        temp->next = temp-> next- > next;
        delete toDelete;
    }
}