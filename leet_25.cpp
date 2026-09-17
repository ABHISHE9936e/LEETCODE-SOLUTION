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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> arr;
        ListNode* temp = head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp= temp->next;

        }
        for(int i =0;i<=arr.size()-k;i=i+k){
            for (int j = 0; j < k / 2; j++) {
         swap(arr[i + j], arr[i + k - 1 - j]);
}
        }
        temp = head;
        int i=0;
        while(temp!=NULL){
            temp->val = arr[i];
            i++;
            temp = temp->next;
        }
        return head;
    }
};
//WE CAN ALSO JUST MOVE IN LL WITHOUT USING EXTRA ARRAY AND USING TWO POINTER WE CAN REVERSE THE LL FOR REQUIRED NODES