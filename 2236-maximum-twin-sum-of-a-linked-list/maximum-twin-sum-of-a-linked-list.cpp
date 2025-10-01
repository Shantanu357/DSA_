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
    int pairSum(ListNode* head) {
        vector<int>vec;

        ListNode* temp=head;
        int length=0;
        while(temp!=NULL)
        {
            vec.push_back(temp->val);
            temp=temp->next;
            length++;
        }
int i=0;
int j=length-i-1;
            int result=0;
            while(i<j)
            {
            result=max(result,vec[i]+vec[j]);
            j--;
            i++;
            }
        return result;
    }
};