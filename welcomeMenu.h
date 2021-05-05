
/* 
 * File:   welcomeMenu.h
 * Author: nadja
 *
 * Created on April 26, 2021, 11:01 AM
 */
#include <iostream>
#include <stdlib.h>
using namespace std;

#ifndef WELCOMEMENU_H
#define WELCOMEMENU_H

class welcomeMenu{
public:
    int choice;
    string playerName;
    welcomeMenu(){
        //Welcome menu
        cout << "----------Welcome to Space Chronicle!----------\n"
		<< "|		[1] Start Game                |\n"
		<< "-----------------------------------------------\n\n";
        cin >> choice;
        //verification
        while(choice < 1 || choice > 2){
            cout << "Please enter 1 or 2. " << endl;
            cin >> choice;
        }
        //Option 1 or 2
        if(choice == 1){
            cout << "What is your name? " << endl;
            cin >> playerName;
            cout << "\nAre You Male or Female?\n[1] Male\n[2] Female" <<endl;
            cin >> choice;
            //1-Male
            if(choice == 1){
                cout << "\nMale, strong, and bold. " << playerName << 
                    ", will your actions in this journey prove so?\n" <<
                    "[1] Continue\n";
                cin >> choice;
            }else if(choice == 2){
                cout << "\nFemale, elegant, and cunning. " << playerName <<
                        ", will your actions in this journey prove so?\n" <<
                        "[1] Continue ";
                cin >> choice;
            }
        }else if(choice == 2){
            cout << "\nSpace Chronicle has ended.\n\n";
        }
        
    }
    string getPlayer(){return playerName;}
};

#endif /* WELCOMEMENU_H */

