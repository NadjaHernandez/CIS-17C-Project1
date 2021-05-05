
/* 
 * File:   newPlanet.h
 * Author: nadja
 *
 * Created on April 26, 2021, 9:22 PM
 */
#include "Inventory.h"      //will display an inventory
#ifndef NEWPLANET_H
#define NEWPLANET_H

class newPlanet{
private:
    int choice, choice2, choice3;
    
public:
    newPlanet(){
        cout << "You awake to flashing lights and an eerie siren."
                << "Something is very wrong."
		<< "\nJumping to your feet you see your ship's main console."
		<< "\nWhat do you chose to do?\n[1]Go to console\n"
                << "[2]Check inventory\n[3]Observe surroundings" << endl;
        cin >> choice;
        
        switch(choice){
            //choice 1: Go to console
        case 1:
                cout << "The console flashes and an overhead communications system vaguely repeats a message:\n"
			<< "Engine temperatures critical.  Shields are offline.  Power structure failing.\n"
			<< "Recommended actions: Repair ship or evacuate.\nFrom the console a cracked window rests weakly."
			<< "You see a planet close by."
			<< "  What do you want to do?\n[1]Go to planet\n[2]Check inventory\n[3]Wait on ship" << endl;
                cin >> choice2;
                //[1]Go to planet:
                if(choice2 == 1){
                    cout << "You use the last of your ship's fuel to head towards the nearby planet.  The planet has a thick fog throughout"
				<< "\nits atmosphere, and appears to have red and green terrain.  As you get closer to the surface your ship stalls,"
				<< "\nand lands with an ubrupt thud.  You force open your ship's door and are greeted by a foreign biome teeming"
				<< "\nwith life.  The dirt is red and the foliage is a bright green.  Before you lies a swamp, beyond"
				<< "\nthe surrounding area is hard to envision.\n[1]Go to the swamp" << endl;
                    cin >> choice2;
                    break;
                }
                //[2]Check inventory
                if(choice2 == 2){
                    //Create new inventory
                    Inventory a;
                    break;
                }
                //[3]Wait on ship
                if(choice2 == 3){
                    cout << "As you ponder over your ship's conditions, smoke begins to rise throughout the room.\nLights are fading."
				<< "You should not wait much longer.\nWhat do you want to do?\n[1]Go to planet\n[2]Wait longer" << endl;
                    cin >> choice3;
                    if(choice3 == 1){
                        cout << "You use the last of your ship's fuel to head towards the nearby planet.  The planet has a thick fog throughout"
					<< "\nits atmosphere, and appears to have red and green terrain.  As you get closer to the surface your ship stalls,"
					<< "\nand lands with an ubrupt thud.  You force open your ship's door and are greeted by a foreign biome teeming"
					<< "\nwith life.  The dirt is red and the foliage is a bright green.  Before you lies a swamp, beyond"
					<< "\nthe surrounding area is hard to envision.\n[1]Go to the swamp" << endl;
				cin >> choice2;
				break;
                    }else if(choice3 == 2){
                        cout << "The ship begins to make an ominous creak, and before you can react the icy cold of space surrounds you.\nYou have failed this Chronicle, but you always try again."
					<< "\n\n---------------\n"
					<< "   GAME OVER\n"
					<< "---------------" << std::endl;
                    }
                    break;
                }
            //Choice 2: Check Inventory
        case 2:
                //Display inventory
                new Inventory;
                cout << "[1]Go to swamp" << endl;
                break;
            //Choice 3: Observe surroundings
        case 3:
                cout << "As you ponder over your ship's conditions, smoke begins to rise throughout the room.\nLights are fading."
			<< "You should not wait much longer.\nWhat do you want to do?\n[1]Go to planet\n" << endl;
		cin >> choice2;
                if(choice2 == 1){
                    cout << "You use the last of your ship's fuel to head towards the nearby planet.  The planet has a thick fog throughout"
				<< "\nits atmosphere, and appears to have red and green terrain.  As you get closer to the surface your ship stalls,"
				<< "\nand lands with an ubrupt thud.  You force open your ship's door and are greeted by a foreign biome teeming"
				<< "\nwith life.  The dirt is red and the foliage is a bright green.  Before you lies a swamp, beyond"
				<< "\nthe surrounding area is hard to envision.\n[1]Go to the swamp" << endl;
			cin >> choice2;
			break;
                }else if(choice2 == 2){
                    cout << "The ship begins to make an ominous creak, and before you can react the icy cold of space surrounds you.\nYou have failed this Chronicle, but you can always try again."
				<< "\n\n---------------\n"
				<< "   GAME OVER\n"
				<< "---------------" << endl;
                }
                break;
        }
    }
};

#endif /* NEWPLANET_H */

