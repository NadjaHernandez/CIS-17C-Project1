
/* 
 * File:   linkList.h
 * Author: nadja
 *
 * Created on May 1, 2021, 1:07 PM
 */
#include <string>
#include <iostream>
using namespace std;
#ifndef LINKLIST_H
#define LINKLIST_H

class linkList{
public:
    string data;
    linkList * next;
    linkList * prev;                                                                                

    linkList(){}
    void push(linkList** head, string newData);
    void printList(linkList* link);
};

#endif /* LINKLIST_H */

