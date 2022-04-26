#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> temp;
        ListNode *tempHead = head;
        while(head!=NULL)
        {
            temp.push(head->val);
            head = head->next;
        }
        while(!temp.empty())
        {
            if(tempHead->val!=temp.top())
                return false;
            tempHead = tempHead->next;
            temp.pop();
        }

        return true;
    }
};