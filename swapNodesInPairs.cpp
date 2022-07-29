Node* solve(Node* head){
Node* dummy = new Node();
dummy->data = -1;
Node* prev = dummy;
Node* curr = head;

if(head==NULL || head->next==NULL){
    return head;
}
while(curr!=NULL && curr->next!=NULL){
    prev->next = curr->next;
    curr->next = prev->next->next;
    prev->next->next = curr;
    prev=curr;
    curr=curr->next;

}
return dummy->next;
}
