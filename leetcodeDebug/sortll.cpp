#include <bits/stdc++.h>
using namespace std;
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
    ListNode *mergeSortedList(ListNode *left, ListNode *right)
    {
        ListNode *head = new ListNode(-1);
        ListNode *curr = head;
        while (right != NULL && left != NULL)
        {
            if (left->val <= right->val)
            {
                curr->next = left;
                left = left->next;
            }
            else
            {
                curr->next = right;
                right = right->next;
            }
            curr = curr->next;
        }
        return head->next;
    }
    ListNode *findMiddleLL(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode *sortList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *middle = findMiddleLL(head);
        ListNode *left = head;
        ListNode *right = middle->next;
        middle->next = NULL;
        left = sortList(left);
        right = sortList(right);
        cout<<left->val<<" "<<right->val<<endl;
        cout<<middle->val<<endl;
        return mergeSortedList(left, right);
    }
};

int main(){
    Solution sol;
    ListNode *head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);
    ListNode *sortedHead = sol.sortList(head);
    ListNode *curr = sortedHead;
    while (curr != NULL)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
    return 0;
}