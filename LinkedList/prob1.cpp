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
// Approch 1:
// AS: O(N), TC O(N);

        // vector<int> nodes;

        // while(head!=NULL){
        //     nodes.push_back(head->val);

        //     head = head->next;

        // }

        // int i = 0;
        // int j = nodes.size()-1;

        // int result = 0;
        // while(i<j){
        //      result = max(result, nodes[i]+nodes[j]);
        //      i++;
        //      j--;
        // }

        // return result;


  //Approch2 
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* mid = slow;


        // revers the list from mid to end

        ListNode* prev = NULL;
        ListNode * nextNode = NULL;

        while(mid!=NULL){
            nextNode = mid->next;

            mid->next = prev;

            prev = mid;

            mid =nextNode;
        }

        int result = 0;

        ListNode* curr =head;

        while(prev!=NULL){
            result = max(result, curr->val + prev->val);

            prev = prev->next;
            curr = curr->next;
        }

        return result;

        

    }
};
