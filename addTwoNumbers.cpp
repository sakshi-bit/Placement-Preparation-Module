Node* solve(Node* l1, Node* l2){
//CODE HERE 
int carry=0;
int sum=0;
Node* dummy = new Node();
dummy->data = 123;
Node* p = dummy;
while(l1 && l2){
sum=l1->data+l2->data+carry;
carry=sum/10;
p->next = new Node();
p->next->data = sum%10;
p=p->next;
l1=l1->next;
l2=l2->next;
}
if(l2){
    l1=l2;
}
while(l1){
sum=l1->data+carry;
carry=sum/10;
p->next = new Node();
p->next->data = sum%10;
p=p->next;
l1=l1->next;
}
if(carry){
    p->next = new Node();
    p->next->data = carry;
}
return dummy->next;
}
