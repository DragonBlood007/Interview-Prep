//Link - https://leetcode.com/problems/middle-of-the-linked-list/

//Idea - Use fast and slow pointer

//Code
ListNode* middleNode(ListNode* head) {
  ListNode *fast = head, *slow = head;
  while(fast && fast -> next){
      fast = fast -> next -> next;
      slow = slow -> next;
  }
  return slow;
}
