void make_lists_equal(Node* &l1,Node* &l2){
    Node* p1=l1;
    Node* p2=l2;
    while(p1 || p2){
        if(p1){
            p1=p1->next;
        }else{
            Node* n = new Node();
            n->data = 0;
            n->next = l1;
            l1=n;
        }
        if(p2){
            p2=p2->next;
        }else{
            Node* n = new Node();
            n->data = 0;
            n->next = l2;
            l2=n;
        }
    }
}
Node* solve(Node* l1, Node* l2){
if(l1==NULL || l2==NULL){
    if(l1){
        return l1;
    }
        return l2;   
} 
make_lists_equal(l1,l2);
bool any_l2 = true; //carry is not 0
while(any_l2){
    any_l2=false;
    Node* l1ptr = l1;
    Node* l2ptr = l2;
    Node* prev = NULL;
    while(l1ptr){
        int sum = l1ptr->data+l2ptr->data;
        l1ptr->data = sum%10; //storing the sum in l1 list
        l2ptr->data = sum/10; //storing carry in l2 list
        any_l2 = any_l2 || bool(l2ptr->data); //checking if the carry is zero
        prev = l2ptr;
        l1ptr=l1ptr->next;
        l2ptr=l2ptr->next;
    }
    prev->next = new Node();
    prev->next->data = 0; //left shift
    if(l2->data){
        Node* n = new Node();
        n->data = 0;
        n->next = l1;
        l1=n;
    }else{
        l2=l2->next;
    }
}
return l1;
}
