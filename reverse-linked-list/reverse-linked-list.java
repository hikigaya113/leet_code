/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        
        ListNode curr=head;
        ListNode pre=null,nex;
        while(curr!=null){
            nex=curr.next;
            curr.next=pre;
            pre=curr;
            curr=nex;
        }
        return pre;
        
    }
}