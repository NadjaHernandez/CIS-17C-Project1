
/* 
 * File:   Inventory.h
 * Author: nadja
 *
 * Created on April 26, 2021, 9:13 PM
 */
#include <map>          //will use map for inventory
#include <string>       //hold the name of item
#include <utility>      //for using a pair
#include <iostream>     //for cout and cin
using namespace std;

#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory{
private:
   
public:
    //Create a map to hold all the inventory items
    Inventory(){
        //Create inventory
        map<int, string> inventory;
        inventory.insert(pair<int, string>(1, "Health: 100"));
        inventory.insert(pair<int, string>(2, "Health Kits: 3"));
        inventory.insert(pair<int, string>(3, "Weapons: 1"));
        
        //Display inventory
        
       /*
        map<string, int>::const_iterator itr;
        cout << "\tITEM\tAMOUNT\n";
        for(itr = inventory.begin(); itr != inventory.end(); ++itr){
            cout << itr.first <<
                    << " " << itr.second << endl;
        }*/
    }
};

#endif /* INVENTORY_H */

