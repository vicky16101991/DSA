#include "../LinkedList/LinkedList.hh"

void printLL(LinkedList* head){
    LinkedList* tmpHead = head;
    while(tmpHead != nullptr){
        cout<<tmpHead->data<<"->";
        tmpHead = tmpHead->next;
    }
    cout<<"NULL"<<endl;
}

LinkedList* create(bool isHead, LinkedList* head = nullptr){

    int x;
    if(isHead){
        cout<<"Enter the value of the root node : ";
    }else
    {
        cout<<"Enter the value of the node next to "<<head->data<<" : ";
    }
    cin>>x;
    if(x == -1) return head;
    if(isHead){
        head = new LinkedList(x);
        create(false,head);
    }
    else{
        head->next = new LinkedList(x);
        create(false,head->next);
    }
    return head;
}

LinkedList* deleteNode(int val, LinkedList* head){
    if(head->data == val) 
    {
        head = head->next;
        return head;
    }
    LinkedList* tHead = head;
    LinkedList* prev = nullptr;
    LinkedList* deletedNode = nullptr;
    while(tHead != nullptr){
        if(tHead->data == val){
            prev->next = tHead->next;
            deletedNode = tHead;
            delete(deletedNode);
            return head;
        }
        prev = tHead;
        tHead = tHead->next;
    }
    cout<<"The value to be deleted is not found"<<endl;
    return head;
}

LinkedList* reverseLL(LinkedList* head){
    if( head == nullptr || head->next == nullptr ) return head;
    LinkedList* nHead = reverseLL(head->next);
    LinkedList* tmp = head->next;
    tmp->next = head;
    head->next = nullptr;
    return nHead;    
}

LinkedList* reverseLLForKGroup(LinkedList* head, int k){
    if( head == nullptr || head->next == nullptr ) return head;
    if(k == 1) return head;
    LinkedList* nHead = reverseLLForKGroup(head->next,k-1);
    LinkedList* tmp = head->next;
    tmp->next = head;
    head->next = nullptr;
    return nHead;    
}

LinkedList* reverseKGroup(LinkedList* head, int k){
    if(head == nullptr) return head;
    LinkedList* tHead = head;
    int tK = k;
    while(tK > 0){
        tHead = tHead->next;
        if(tHead == nullptr) return head;
        tK--;
    }
    LinkedList* newHead = reverseLLForKGroup(head, k);
    head->next = reverseKGroup(tHead, k);
    return newHead;
}