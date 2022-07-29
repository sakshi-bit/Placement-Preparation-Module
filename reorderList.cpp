Node* cutInHalve(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head->next;

    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast = fast->next->next;
    }
    if(fast->next!=NULL){
        slow = slow->next;
    }
    Node* t = slow->next;
    slow->next=NULL;
    return t;
}
Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;
    while(curr!=NULL){
        forward= curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
Node* solve(Node* head){

Node* h = cutInHalve(head);
h = reverse(h);
Node* p = head;

while(h!=NULL){
    Node* x= h->next;
    h->next = p->next;
    p->next = h;
    p=p->next->next;
    h=x;
}
return head;

}
