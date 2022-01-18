/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        int count1=0;
        int count2=0;
        ListNode *temp1=headA;
        while(temp1)
        {
            temp1=temp1->next;
            count1++;
        }
        ListNode *temp2=headB;
        while(temp2)
        {
            temp2=temp2->next;
            count2++;
        }
        temp1=headA,temp2=headB;
        if(count1>count2)
        {
            int len=count1-count2;
            while(len--)
            {
                temp1=temp1->next;
            }
        }
        else
        {
            int len=count2-count1;
            while(len--)
            {
                temp2=temp2->next;
            }
        }
        while(temp1&&temp2)
        {
            if(temp1==temp2)
            {
                return temp1;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return NULL;
    }
};