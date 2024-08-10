/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int get_size(ListNode* head){
        int count = 0;
        while(head != nullptr){
            count++;
            head = head -> next;
        }
        return count;
        
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int index = get_size(head) - n;
        
        if (index == 0) {
            ListNode* newHead = head->next;
            delete head; 
            return newHead;
        }
        
        ListNode* currentNode = head;
        
        for(int i = 0;  i < index - 1 ; i++){
            currentNode = currentNode -> next;
        }
        ListNode* nodeToDelete = currentNode -> next;
        currentNode -> next = nodeToDelete -> next;
        delete nodeToDelete;
        return head;
        
    }
    
};