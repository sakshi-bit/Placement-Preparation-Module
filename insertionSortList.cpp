Node* solve(Node* head){
//CODE HERE
Node* dummyNode = new Node();
dummyNode->data = 101;
while(head){
    Node* temp = dummyNode;
    Node* forward = head->next;
    while(temp->next && temp->next->data<head->data){
        temp=temp->next;
    }

    head->next = temp->next;
    temp->next = head;
    head = forward;
} 
return dummyNode->next;
}
