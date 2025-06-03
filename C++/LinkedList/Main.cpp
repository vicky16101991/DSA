#include "../util/LinkedListUtils.hh"

int main(){
    LinkedList* head = create(true);
    printLL(head);

    int x;
    cout<<"Enter the value to be deleted : ";
    cin>>x;
    head = deleteNode(x,head);
    printLL(head);
    LinkedList* tmp = head;
    LinkedList* nHead = reverseLL(tmp);
    printLL(nHead);
    head = reverseLL(nHead);
    LinkedList* nnHead = reverseKGroup(head, 2);
    printLL(nnHead);
    head = reverseKGroup(nnHead, 2);
    printLL(head);
    return 0;
}