#include "../util/LinkedListUtils.hh"

int main(){
    LinkedList* head = create(true);
    printLL(head);
    deleteNode(3,head);
    printLL(head);
    return 0;
}