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
