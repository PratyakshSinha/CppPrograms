#include<bits/stdc++.h>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 and list2)
        {
            ListNode *returnList = (list1->val<list2->val) ? list1 : list2;
            (list1->val<list2->val) ? list1 = list1->next : list2 = list2->next;
            ListNode *tail = returnList;

            while(list1 and list2)
            {
                if(list1 and (list1->val < list2->val))
                {
                    tail->next = new ListNode(list1->val);
                    tail = tail->next;
                    list1 = list1->next;
                }
                else
                {
                    tail->next = new ListNode(list2->val);
                    tail = tail->next;
                    list2 = list2->next;
                }
            }

            if(list1)
            {
                tail->next = list1;
            }
            if(list2)
            {
                tail->next = list2;
            }

            return returnList;
        }
        else
        {
            if(list1)
                return list1;
            return list2;
        }
    }
};