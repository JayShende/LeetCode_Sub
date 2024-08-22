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
private:
    int SizeLL(ListNode* head)
    {
        ListNode* temp=head;
        int ans=0;
        while(temp!=nullptr)
        {
            temp=temp->next;
            ans++;
        }
        return ans;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int x=SizeLL(head);

        if(x==n) return head->next;
        int pos=1;
        ListNode* temp=head;
        while(pos!=(x-n))
        {
            temp=temp->next;
            pos++;
        }

        temp->next=temp->next->next;
        return head;
    }
};