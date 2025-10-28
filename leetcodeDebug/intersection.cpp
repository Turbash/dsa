#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* curr = headA;
        ListNode* curr1 = headB;
        map<ListNode*, int> m1;
        while (curr != NULL) {
                curr = curr->next;
                m1[curr]++;
        }
        while(curr1!=NULL){
            if(m1.find(curr1)!=m1.end()){
                return curr1;
            }
            curr1=curr1->next;
        }
        return NULL;
    }
};

int main(){
    Solution sol;
    ListNode* headA = new ListNode(1);
    headA->next = new ListNode(2);
    headA->next->next = new ListNode(3);
    ListNode* headB = new ListNode(4);
    headB->next = new ListNode(5);
    headB->next->next = headA->next; 
    ListNode* intersection = sol.getIntersectionNode(headA, headB);
    if (intersection) {
        cout << "Intersection at node with value: " << intersection->val << endl;
    } else {
        cout << "No intersection found." << endl;
    }
    return 0;
}