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
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        
        
//         if(list1==null) return list2;
//         if(list2==null) return list1;
//         ListNode ans=list1;
        
//         while(list1!=null&&list2!=null)
//         
//             ListNode temp=null;
//             while(list1.val<=list2.val&&list1!=null) 
//             {
//                 temp=list1;
//                 list1=list1.next;
//             }
        
//         temp.next=list2;
//         Collection.swap(list1,list2);
//         }
//         return ans;
        ListNode head=new ListNode(0);
        
        if(list1==null) return list2;
        if(list2==null) return list1;
        
        
            if(list1.val>list2.val){
                head=list2;
            list2=list2.next;
            }
            else{
                head=list1;
                list1=list1.next;
            }
            head.next=mergeTwoLists(list1,list2);
            return head;
        
    }
}