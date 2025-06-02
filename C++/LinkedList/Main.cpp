#include "../util/LinkedListUtils.hh"

int main(){
    LinkedList* head = new LinkedList(1);
    head->next = new LinkedList(2);
    printLL(head);
    return 0;
}