Node* solve(Node* head, int n){
//CODE HERE 
Node* fast = head;
Node* slow = head;

for(int i=0;i<n;i++){
    fast = fast->next;
}

if(!fast){
    return head->next;
}

while(fast->next!=NULL){
    fast = fast ->next;
    slow = slow->next;
}

slow->next = slow->next->next;
return head;
}
