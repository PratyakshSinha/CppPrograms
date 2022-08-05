#include<bits/stdc++.h>
using namespace std;


//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    
    ListNode* intersection(ListNode *head){
        ListNode *fast = head, *slow = head;
        while(fast and fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
            {
                return slow;
            }
        }
        return NULL;
    }
    
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next)
            return NULL;
        ListNode *intersect = intersection(head);
        if(!intersect)
            return NULL;
        
        ListNode *start = head;
        while(intersect!=start)
        {
            start = start->next;;
            intersect = intersect->next;
        }
        
        return start;
    }
};