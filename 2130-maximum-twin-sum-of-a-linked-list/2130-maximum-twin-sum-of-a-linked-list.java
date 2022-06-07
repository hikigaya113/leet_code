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
    public int pairSum(ListNode head) {
        ListNode slow=head,fast=head;
        int maxi=Integer.MIN_VALUE;
        while(fast!=null&&fast.next!=null ){
            fast=fast.next.next;
            slow=slow.next;
        }
        
        ListNode nex=null,prev=null;
        while(slow!=null){
            nex=slow.next;
            slow.next=prev;
            prev=slow;
            slow=nex;
        }
        
        while(prev!=null){

            maxi=Math.max(maxi,head.val+prev.val);
            prev=prev.next;
            head=head.next;
        }
        return maxi;
    }
}