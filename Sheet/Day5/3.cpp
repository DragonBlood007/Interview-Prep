//Link - https://leetcode.com/problems/merge-two-sorted-lists/

//Method 1 - Iterative
//Idea - Use auxiliary pointer to store merged list , like using auxilary array in merge sort
//Code
ListNode* mergeTwoList(ListNode* l1, ListNode* l2) {
    ListNode merge = ListNode(0);
    ListNode* merged = &merge;
    while(l1 && l2){
        if(l1 -> val < l2 -> val){
            merged -> next = l1;
            l1 = l1->next;
        }
        else{
            merged -> next = l2;
            l2 = l2->next;
        }
        merged = merged -> next;
    }
    if(l1)
        merged -> next = l1;
    else
        merged -> next = l2;
    return merge.next;
}

//Method 2 - Recursive
/*Idea - If at a point, value of first list is less than that of second list, 
         then we can merge the first list from next element and second list and
         store the ans as next of current node of first list.
*/
//Code
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(!l2)
        return l1;
    if(!l1)
        return l2;

    if(l1 -> val < l2 -> val){
        l1 -> next = mergeTwoLists(l1->next, l2);
        return l1;
    }
    else{
        l2 -> next = mergeTwoLists(l1, l2 -> next);
        return l2;
    }
}
