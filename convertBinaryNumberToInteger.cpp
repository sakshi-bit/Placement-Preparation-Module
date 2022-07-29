int solve(Node* head){
//CODE HERE 
Node* temp = head;
int ans = 0;
while(temp!=NULL){
    ans = ans*2;
    ans = ans+temp->data;
    temp=temp->next;
}
return ans;
}
