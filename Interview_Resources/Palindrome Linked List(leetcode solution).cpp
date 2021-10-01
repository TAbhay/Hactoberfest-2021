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
    ListNode* yo;
    bool f;
    void traverse(ListNode* head)
    {
        if(head==NULL)
            return;
        traverse(head->next);
            if(yo->val!=head->val)
                f=1;
        yo=yo->next;        
    }
    
    bool isPalindrome(ListNode* head) {
        yo=head;
        f=0;
        traverse(head);
        if(f)
            return false;
        else
            return true;
    }
};
