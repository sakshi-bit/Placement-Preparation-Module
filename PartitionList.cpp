Node* solve(Node* head, int x){
//CODE HERE
Node* list1 = new Node();
list1->data=0;
Node* list2 = new Node();
list2->data=0;
Node* l1 = list1;
Node* l2 = list2;
while(head){
    if(head->data<x){
        l1->next=head;
        l1=l1->next;
    }else{
         l2->next=head;
         l2=l2->next;
    }
    head=head->next;
}
l2->next=NULL;
l1->next=list2->next;
return list1->next;
}
