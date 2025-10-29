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
    bool isPalindrome(ListNode* head) {
        stack<int>s;
        ListNode *temp = head;
        while(temp){
            s.push(temp->val);
            temp = temp->next;
        }
        cout << "hello";
        ListNode *x = head;
        
        while(x){
            cout << "hello";
            if(x->val != s.top()){
                cout << x-> val << " " << s.top() << "\n";
                return false;
            }
            else
            {
                s.pop();
                x = x->next;
            }
        }
        return true;

        
    }
};