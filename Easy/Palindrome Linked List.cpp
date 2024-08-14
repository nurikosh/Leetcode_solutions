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
    int get_size(ListNode* head){
        int count = 0;
        ListNode* curr = head;
        
        while(curr != nullptr){
            count ++;
            curr = curr -> next;
        }
        return count;
    
    }
    
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = nullptr;
        
        
        while(curr != nullptr){
            ListNode* nextnode = curr ->next;
            curr-> next = prev;
            prev = curr;
            curr = nextnode;
        }
        return prev;
    }
    
public:
    bool isPalindrome(ListNode* head) {
        ListNode* currNode = head;
        int size = get_size(head);
        
        if (head == nullptr || head->next == nullptr) {
            return true;
        }
        
        for (int i = 0; i < size / 2; ++i) {
            currNode = currNode->next;
        }
        
        ListNode* second = reverse(currNode);
        ListNode* first = head;
            
        
        while(second != nullptr){
            if(first -> val != second -> val){
                return false;}
            
            first = first ->next;
            second = second -> next;
            
        }
        return true;
        
    }
};