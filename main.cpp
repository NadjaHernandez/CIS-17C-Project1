
/* 
 * File:   main.cpp
 * Author: nadja
 *
 * Created on April 19, 2021, 11:55 PM
 */

#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <utility>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include "welcomeMenu.h"
#include "newPlanet.h"
#include "Swamp.h"
#include "Forest.h"
#include "Enemy.h"
#include "BattleSystem.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int choice;                     //universal choice
    int humanHealth = 100, enemyHealth = 100, medkits = 0;
    queue<string> shipParts;        //will hold the shipParts he acquires
    stack<string> weapons;          //will hold the weapons he acquires
    //Print the welcome menu
    welcomeMenu a;
    //First part of game
    newPlanet b;
    //Swamp story!
    Swamp c;
    cin >> choice;
    //battle begins
    //[1] Force open door
    if(choice == 1){
        cout << c.getFirst() << endl;
        cin >> choice;
        //[1] Examine cockpit
        if(choice == 1){
            cout << c.getSec() << endl;
            cin >> choice;
            //[1]Use fusion pistol
            if(choice == 1){
                weapons.push("Fusion pistol");
                cout << c.getThird() << endl;
            //[2]Reach for part
            }else if(choice == 2){
                cout << c.getFourth() << endl;
                cin >> choice;
                //[1]go to water and drown plant
                if(choice == 1){
                    cout << c.getFifth() << endl;
                    return 0;
                //[2]Use fusion pistol to shoot plant
                }else if(choice == 2){
                    weapons.push("Fusion pistol");
                    cout << c.getSixth() << endl;
                    shipParts.push("Part 1");
                }
            }
            //[2]Reach for part
        }else if(choice == 2){
            cout << c.getFourth() << endl;
            cin >> choice;
            //[1]Go to water and drown plant
            if(choice == 1){
                cout << c.getFifth() << endl;
                return 0;
            //[2]Use fusion pistol
            }else if(choice == 2){
                weapons.push("Fusion pistol");
                cout << c.getSixth() << endl;
                shipParts.push("Part 1");
            }
            
        }
    }else if(choice == 2){
         //[2] Break window and reach for part
        cout << c.getSev() << endl;
                cin >> choice;
                //[1]Go to water and drown plant
                if(choice == 1){
                    cout << c.getFifth() << endl;
                    return 0;
                }
                //[2]Use fusion pistol to shoot plant
                if(choice == 2){
                    weapons.push("Fusion pistol");
                    cout << c.getSixth() << endl;
                    shipParts.push("Part 1");
                }
    }
    //end of the swamp... moving on to the forest
    Forest d;
    cin >> choice;
    //[1]Pursue beast
    if(choice == 1){
        cout << d.getOne() << endl;
        cin >> choice;
        do{
            int playerinput;

            //ENEMY TURN
            Enemy y(50, "Groot");
            choice = (rand() % 3) + 1;

            if (choice == 1) {
            cout << "You have encountered a " << y.getEnemy() << " it has ";
            cout << enemyHealth;
            cout << " health.";
            cout << " The " << y.getEnemy() << " has punched for 15 damage! " << std::endl;
            cout << std::endl;
            humanHealth = humanHealth - y.getDamage(1);
            cout << "You have been punched, you now have " << humanHealth << " health" << std::endl << std::endl;
            }
            else if (choice == 2) {
            cout << "You have encountered a " << y.getEnemy() << " it has ";
            cout << enemyHealth;
            cout << " health.";
            cout << " The " << y.getEnemy() << " has kicked for 20 damage! " << std::endl;
            cout << std::endl;
            humanHealth = humanHealth - y.getDamage(2);
            cout << "You have been kicked, you now have " << humanHealth << " health" << std::endl << std::endl;
            }
            else if (choice == 3) {
            cout << "You have encountered a " << y.getEnemy() << " it has ";
            cout << enemyHealth;
            cout << " health.";
            cout << " The " << y.getEnemy() << " has missed their attack! " << std::endl;
            cout << std::endl;
            humanHealth = humanHealth - y.getDamage(3);
            cout << "The enemy has missed, you still have " << humanHealth << " health" << std::endl << std::endl;
            }

            // PLAYER TURN

            cout << a.getPlayer() << " has had enough." << std::endl << std::endl;
            cout << "Please select from the following options to fight back the " << y.getEnemy() << std::endl << std::endl;
            cout << "1. Use Primary Weapon. 2. Punch with hands." << std::endl;
            cout << "3. Use Med Kit.        4. Do nothing." << std::endl << std::endl;
            cin >> playerinput;

            if (playerinput == 1) {
            cout << a.playerName << " has used their primary weapon." << std::endl << std::endl;
            enemyHealth = enemyHealth - 20;
            cout << y.getEnemy() << " has taken damage, they now have " << enemyHealth << " health." << std::endl << std::endl;
            }
            if (playerinput == 2) {
            cout << a.playerName << " has used their fist, and charged with a PUNCH!" << std::endl << std::endl;
            enemyHealth = enemyHealth - 20;
            cout << y.getEnemy() << " has taken damage, they now have " << enemyHealth << " health." << std::endl << std::endl;
            }
            if (playerinput == 3) {
            cout << a.playerName << " felt like they were low on hp, and decided to use their med kit." << std::endl << std::endl;
            cout << a.playerName << " has: " << medkits << " left." << std::endl;
            cout << a.playerName << " now has: " << humanHealth << std::endl;
            }
            if (playerinput == 4) {
            cout << a.playerName << " couldn't decided what to do, so they did what no one else would do. Nothing." << std::endl << std::endl;
            }
        }while (humanHealth > 0 && enemyHealth > 0);
        cout << "[1]Continue" << endl;
        cin >> choice;
        //Continue exploring
        cout << d.getTwo() << endl;
        cin >> choice;
        //[1] Listen to his plan
        cout << d.getThree() << endl;
        cin >> choice;
        //[1] Set trap for beast
        cout << d.getFive() << endl;
        cin >> choice;
        //[1] Distract beast
        if(choice == 1){
            cout << d.getSix() << endl;
            cin >> choice;
            //[1]Keep beast in position
            if(choice == 1){
                cout << d.getSeven() << endl;
                return 0;
            //[2] Dodge the beast
            }else if(choice == 2){
                cout << d.getEight() << endl;
                cin >> choice;
                cout << d.getNine() << endl << endl;
                cout << d.getThirt() << endl << endl;
            }
        //[2]Shoot boulders
        }else if(choice == 2){
            cout << d.getTen() << endl;
            cin >> choice;
            //[1]Shoot boulders more
            if(choice == 1){
                cout << d.getEleven() << endl << endl;
                return 0;
            //[2]Wait for boulders    
            }else if(choice == 2){
                cout << d.getTwel() << endl;
                cin >> choice;
                cout << d.getNine() << endl << endl;
                cout << d.getThirt() << endl << endl;
            }
        }
    //[2]Continue in another direction
    }else if(choice == 2){
        cout << d.getTwo() << endl;
        cin >> choice;
        //[1] Listen to his plan
        cout << d.getThree() << endl;
        cin >> choice;
        //[1] Set trap for beast
        cout << d.getFive() << endl;
        cin >> choice;
        //[1] Distract beast
        if(choice == 1){
            cout << d.getSix() << endl;
            cin >> choice;
            //[1]Keep beast in position
            if(choice == 1){
                cout << d.getSeven() << endl;
                return 0;
            //[2] Dodge the beast
            }else if(choice == 2){
                cout << d.getEight() << endl;
                cin >> choice;
                cout << d.getNine() << endl << endl;
                cout << d.getThirt() << endl << endl;
            }
        //[2]Shoot boulders
        }else if(choice == 2){
            cout << d.getTen() << endl;
            cin >> choice;
            //[1]Shoot boulders more
            if(choice == 1){
                cout << d.getEleven() << endl << endl;
                return 0;
            //[2]Wait for boulders    
            }else if(choice == 2){
                cout << d.getTwel() << endl;
                cin >> choice;
                cout << d.getNine() << endl << endl;
                cout << d.getThirt() << endl << endl;
            }
        }
    }
    
    return 0;
}

