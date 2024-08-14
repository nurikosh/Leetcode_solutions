class MyLinkedList {
private:
    struct ListNode {
        int value;
        ListNode* next;
        ListNode* prev;
        ListNode(int val) : value(val), next(nullptr), prev(nullptr) {}
    };

    ListNode* head;
    ListNode* tail;
    int size;

public:
    MyLinkedList() : head(nullptr), tail(nullptr), size(0) {}

    int get(int index) {
        if (index < 0 || index >= size) {
            return -1;
        }

        ListNode* currNode;
        if (index < size / 2) {
            currNode = head;
            for (int i = 0; i < index; i++) {
                currNode = currNode->next;
            }
        } else {
            currNode = tail;
            for (int i = size - 1; i > index; i--) {
                currNode = currNode->prev;
            }
        }
        return currNode->value;
    }

    void addAtHead(int val) {
        ListNode* newHead = new ListNode(val);
        if (head != nullptr) {
            head->prev = newHead;
            newHead->next = head;
        }
        head = newHead;
        if (size == 0) {
            tail = newHead;
        }
        size++;
    }

    void addAtTail(int val) {
        ListNode* newTail = new ListNode(val);
        if (tail != nullptr) {
            tail->next = newTail;
            newTail->prev = tail;
        }
        tail = newTail;
        if (size == 0) {
            head = newTail;
        }
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index > size || index < 0) {
            return;
        }

        if (index == 0) {
            addAtHead(val);
            return;
        }

        if (index == size) {
            addAtTail(val);
            return;
        }

        ListNode* newNode = new ListNode(val);
        ListNode* currentNode;

        if (index < size / 2) {
            currentNode = head;
            for (int i = 0; i < index; i++) {
                currentNode = currentNode->next;
            }
        } else {
            currentNode = tail;
            for (int i = size - 1; i > index; --i) {
                currentNode = currentNode->prev;
            }
        }

        newNode->prev = currentNode->prev;
        newNode->next = currentNode;
        currentNode->prev->next = newNode;
        currentNode->prev = newNode;

        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size)
            return;

        ListNode* nodeToDelete;

        if (index == 0) {
            nodeToDelete = head;
            head = head->next;
            if (head != nullptr) {
                head->prev = nullptr;
            } else {
                tail = nullptr;
            }
        } else if (index == size - 1) {
            nodeToDelete = tail;
            tail = tail->prev;
            if (tail != nullptr) {
                tail->next = nullptr;
            } else {
                head = nullptr;
            }
        } else {
            ListNode* currentNode;
            if (index < size / 2) {
                currentNode = head;
                for (int i = 0; i < index; i++) {
                    currentNode = currentNode->next;
                }
            } else {
                currentNode = tail;
                for (int i = size - 1; i > index; i--) {
                    currentNode = currentNode->prev;
                }
            }
            nodeToDelete = currentNode;
            currentNode->prev->next = currentNode->next;
            currentNode->next->prev = currentNode->prev;
        }

        delete nodeToDelete;
        size--;
    }

    ~MyLinkedList() {
        while (head != nullptr) {
            ListNode* nodeToDelete = head;
            head = head->next;
            delete nodeToDelete;
        }
    }
};
