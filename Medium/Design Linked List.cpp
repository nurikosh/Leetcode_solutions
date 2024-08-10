class MyLinkedList {
private:
    struct Node{
        int value;
        Node* next = NULL;
        Node(int val){
            value = val;
            next = nullptr;
        }
    };
    Node* head;
    int size;
    
public:
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }
    
    int get(int index) {
        if (index < 0 || index >= size){
            return -1;
        }
        else{
            Node* currentNode = head;
            
            for(int i = 0; i < index; i++){
                currentNode = currentNode -> next;
            }
        return currentNode -> value; 
        }
    }
    
    void addAtHead(int val) {
        addAtIndex(0, val);
    }
    
    void addAtTail(int val) {
        addAtIndex(size, val);
    }
    
    void addAtIndex(int index, int val) {
        if(index > size || index < 0){
            return;
        }
        
        Node* newNode = new Node(val);
        Node* currentNode = head;
        
        if(index == 0){
            newNode -> next = head;
            head = newNode;
        }
        else{
            for(int i = 0; i < index - 1; i++){
                currentNode = currentNode -> next;
            }
            newNode -> next = currentNode -> next;
            currentNode -> next = newNode;
        }
        
        size++;
    }
    
    
    void deleteAtIndex(int index) {
        if(index < 0 || index >= size)
            return;
        
        else if(index == 0){
            Node* nodeToDelete = head;
            head = head -> next;
            delete nodeToDelete;
        }
        else{
            Node* currentNode = head;
            for(int i = 0; i < index - 1; i++){
                currentNode = currentNode -> next;
            }
            Node* nodeToDelete = currentNode -> next;
            currentNode -> next = nodeToDelete -> next;
            delete nodeToDelete;
        }
        size --;
    }
    ~MyLinkedList() {
        while (head != nullptr) {
            Node* nodeToDelete = head;
            head = head->next;
            delete nodeToDelete;
        }
}
        
    
    
    
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */