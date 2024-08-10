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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* currentNode = head;
        ListNode* dummy = new ListNode(-1, head);
        ListNode* prev = dummy;
        
        
        while(currentNode != nullptr){
            if(currentNode -> val == val){
                prev -> next = currentNode -> next;
            }
            else{
                prev = currentNode;
            }
            currentNode = currentNode -> next;
        }
        head = dummy -> next;
        delete dummy;
        return head;
    }
};