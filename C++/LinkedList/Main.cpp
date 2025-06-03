#include "../util/LinkedListUtils.hh"

int main(){
    LinkedList* head = create(true);
    printLL(head);

    int x;
    cout<<"Enter the value to be deleted : ";
    cin>>x;
    head = deleteNode(x,head);
    printLL(head);
    LinkedList* nHead = reverseLL(head);
    printLL(nHead);
    return 0;
}