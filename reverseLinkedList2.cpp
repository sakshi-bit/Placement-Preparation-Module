Node* solve(Node* head, int left, int right){
//CODE HERE 
if(head==NULL){
    return head;
}
Node* dummy = new Node();
dummy->data = 0;
Node* prev = dummy;
dummy->next = head;

for(int i=0;i<left-1;i++){
    prev=prev->next;
}

Node* curr= prev->next;
Node* forward = curr->next;

for(int i=0;i<right-left;i++){
    curr->next = forward->next;
    forward->next = prev->next;
    prev->next = forward;
    forward = curr->next;
}
return dummy->next;
}
