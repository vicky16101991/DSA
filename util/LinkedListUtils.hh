#include "../LinkedList/LinkedList.hh""

void printLL(LinkedList* head){
    LinkedList* tmpHead = head;
    while(tmpHead != nullptr){
        cout<<tmpHead->data<<"->";
        tmpHead = tmpHead->next;
    }
    cout<<"NULL"<<endl;
}