//Link - https://leetcode.com/problems/reverse-linked-list/

//Method 1 - Iterative
/*Idea - set previous to null, and start from current node
         set next of current node to previous
         chane previous to current node
         change current to next node in original linked list
*/
//Code
ListNode* reversesList(ListNode* head) {
  ListNode *current = head, *prev = NULL, *next;
  while(current){
      next = current->next;
      current -> next = prev;
      prev = current;
      current = next;
  }
  return prev;
}

//Method 2 - Recursive
/*Idea - Reverse rest of the linked list
         Current node should be end of reversed list from above
         current->next is the last element of reverse list
         set next element of current list as current element to make it last
         and set current element's next as null
*/
//Code
ListNode* reverseList(ListNode* head){
  if(!head || !head -> next) return head;

  ListNode* remaining = reverseList(head -> next);
  head -> next -> next = head;
  head -> next= NULL;
  return remaining;
}
