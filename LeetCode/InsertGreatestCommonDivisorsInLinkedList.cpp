#include <algorithm>
#include <numeric>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *insertGreatestCommonDivisors(ListNode *head){
        ListNode *prev = head, *curr = head->next;
        while(curr) {
            int gcd = std::gcd(curr->val, prev->val);
            ListNode *temp;
            temp->val = gcd;
            prev->next = temp;
            temp->next = curr;
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
};