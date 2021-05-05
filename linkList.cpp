
#include "linkList.h"
#include <iostream>
using namespace std;

void linkList::push(linkList** head, string newData){
    linkList * newlink = new linkList();
    newlink->data = newData;
    newlink->next = (*head);
    newlink->prev = NULL;
    
    if((*head) != NULL){
        (*head)->prev = newlink;
    }
    
    (*head) = newlink;
}

void linkList::printList(linkList* link){
    linkList* temp;
    while (link != NULL){
        cout <<" "<<link->data<<" ";
        temp = link;
        link = link->next;
    }
}
