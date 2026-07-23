/**(vit- solve using fast and slow pointers- TRY LATER)
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //store every visited node in a hash set
        unordered_set<ListNode*>visited;
        while(head!=nullptr){
            if(visited.find(head)!=visited.end()){
                return true; // already visited
            }
            visited.insert(head);
            head=head->next;

        }
     return false; //reached end no cycle   
    }
};