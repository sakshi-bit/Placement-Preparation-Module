Node* solve(Node* head){
//CODE HERE 
if(head==NULL){
    return head;
}
Node* p = new Node();
p->data = 0;
p->next = head;
head=p;
Node* l = head->next;
Node* r = head->next;
while(r){
    if(l->data == r->data){
        r=r->next;
    }
    else if(l->next==r){
        p->next = l;
        p=l;
        l=r;
    }
    else{
        l=r;
    }
}
if(l->next==NULL){
    p->next = l;
}else{
    p->next = NULL;
}
return head->next;
}
