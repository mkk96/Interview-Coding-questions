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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *temp1=l1,*temp2=l2,*head=NULL;
        int carry=0;
        while(temp1!=NULL&&temp2!=NULL)
        {
            int add=temp2->val+temp1->val+carry;
            carry=add/10;
            add%=10;
            ListNode *newnode=new ListNode;
            if(head==NULL)
            {
                newnode->val=add;
                newnode->next=NULL;
                head=newnode;
            }
            else
            {
                ListNode *temp3=head;
                while(temp3->next!=NULL)
                {
                    temp3=temp3->next;
                }
                newnode->val=add;
                newnode->next=NULL;
                temp3->next=newnode;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1!=NULL)
        {
            int add=temp1->val+carry;
            carry=add/10;
            add%=10;
            ListNode *newnode=new ListNode;
            if(head==NULL)
            {
                newnode->val=add;
                newnode->next=NULL;
                head=newnode;
            }
            else
            {
                ListNode *temp3=head;
                while(temp3->next!=NULL)
                {
                    temp3=temp3->next;
                }
                newnode->val=add;
                newnode->next=NULL;
                temp3->next=newnode;
            }
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            int add=temp2->val+carry;
            carry=add/10;
            add%=10;
            ListNode *newnode=new ListNode;
            if(head==NULL)
            {
                newnode->val=add;
                newnode->next=NULL;
                head=newnode;
            }
            else
            {
                ListNode *temp3=head;
                while(temp3->next!=NULL)
                {
                    temp3=temp3->next;
                }
                newnode->val=add;
                newnode->next=NULL;
                temp3->next=newnode;
            }
            temp2=temp2->next;
        }
        if(carry!=0)
        {
            ListNode *newnode=new ListNode;
            if(head==NULL)
            {
                newnode->val=carry;
                newnode->next=NULL;
                head=newnode;
            }
            else
            {
                ListNode *temp3=head;
                while(temp3->next!=NULL)
                {
                    temp3=temp3->next;
                }
                newnode->val=carry;
                newnode->next=NULL;
                temp3->next=newnode;
            }
        }
        return head;
    }
};