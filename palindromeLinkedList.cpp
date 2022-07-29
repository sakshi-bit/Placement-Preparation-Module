Node* cutInHalf(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* slow = head;
    Node* fast = head->next;

    while(fast->next!=NULL && fast->next->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }

    if(fast->next!=NULL){
        slow=slow->next;
    }
    Node* t = slow->next;
    return t;
}

Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next = prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
int solve(Node* head){
    Node* h = cutInHalf(head);
    h = reverse(h);
    while(h!=NULL){
        if(head->data != h->data){
            return 0;
        }
        head=head->next;
        h=h->next;
    }
    return 1;
}
