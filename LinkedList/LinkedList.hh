//LinkedList Defination
#include <iostream>
using namespace std;

struct LinkedList{
     int data;
     LinkedList* next;

     LinkedList(int val) : data(val), next(nullptr) {}
};