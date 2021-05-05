
/* 
 * File:   Forest.h
 * Author: nadja
 *
 * Created on May 1, 2021, 12:23 PM
 */

#ifndef FOREST_H
#define FOREST_H

class Forest{
public:
    string forest1, forest2, forest3, forest5,
            forest6, forest7, forest8, forest9,
            forest10, forest11,forest12, forest13;
    int choice;
    Forest(){
        cout << "Continuing your adventure you leave the murky swamp."
                << "In the horizon you see a dense forest, reaching\nas far as the eye can see."
                << "After the foreign events you've observed, you cannot help but worry\nabout what lies next.\n[1]Continue traveling to forest";
                cin >> choice;
        cout << "At the forest entrance, you see a creature holding something with great agitation."
                << "Upon closer inspection,\nyou realize the creature has a ship part you need! "
                << "When locking eyes with you, it growls\nand runs swiftly into the surrounding bush.\n[1]Pursue the beast\n[2]Continue exploring the forest in another direction";
        //initialize strings
        forest1 = "Pursuing the path of the creature, you are interrupted by a different alien of evil intent.  Prepare to fight!\n[1]Enter battle";
        forest2 = "Continuing your journey, you figure there may be more ship parts as you follow the forest paths.  While heading forward\na grizzly looking individual comes from the shadows of the forest.  His hair is messy and has several colors smeared\nover his skin as a form of camouflage, while wearing the hide of some unrecognizable animal.  Around his back is a\nlazer rifle, in rough but functioning condition.  He explains to you he is a hunter and this forest is not a\nsafe place, inhabited by a monster which steals any object it views as precious, and will eliminate\nany obstacle it faces.  He continues by saying no one leaves the forest alive with this beast present,\nbut he has a plan to kill it.\n[1]Listen to his plan";
        forest3 = "\nHe continues by explaining how to get rid of the beast.  We distract it and crush it with boulders.\n[1]Set a trap for the beast";
        forest5 = "\nYou follow him to a clearing in the forest.  Here you can see a cave with many bits and pieces collected.\nThe hunter explains to you this is the creature's lair, and here is where we will se the trap.\nThere are large boulders above the cave entrance, and if one of us distracts the beast long enough, the other\ncan shoot the rocks to fall down and crush the beast.  What do you want to do?\n[1]Distract the beast\n[2]Shoot the boulders";
        forest6 = "You decide your fate best lies with distracting the beast, and leave shooting the boulders to the hunter.\nThe beast approaches, still holding the ship part it has newly aqquired.  Now is your time to distract it.\nYou should and wave your arms, and the beast glares with anger!  Just before it charges toward you a loud shot\nechoes through the trees.  The hunter has fired his rifle, and continues to three more times.  The rocks are\nfalling but not quick enough, as the beast is running towards you!\n[1]Try to keep the beast in position\n[2]Dodge the beast";
        forest7 = "\nAs you struggle to keep the beast in place you lose track of how close the boulders are.  Not only\ndo you see the beast getting crushed, but you are too.\n\n---------------\n   GAME OVER\n---------------";
        forest8 = "\nYou dodge the beast, but he turns back around.  Just before he reaches you a large rock falls down and\ncrushes it, the ship part is thrown from the beast's hand and lands at your feet.  The hunter shouts with\njoy in the distance and comes down to you.\n[1]Continue";
        forest9 = "\nThe hunter thanks you for your help, and is glad you found your next ship part.  He hands you two\nmore items in thanks for your support.  Explaining the forest is safe once again, you can make better use of these:\n+ 1 medkit\n+ 1 Laser Rifle\n+ 1 ship part\n\n";
        forest10 = "You decide your fate best lies with shooting the boulders, and leave distracting the beast to the hunter.\nYou see the beast approaching and the hunter begins to shout and distract it.  Taking aim, you fire\nseveral times with your fusion pistol to make the boulders fall down.  The rocks are not falling quick enough due to\nthe low fire power of your pistol.  The creature is getting closer to the hunter.  What do you want to do?\n[1]Shoot the boulders more\n[2]Wait and see if the boulders fall";
        forest11 = "\nIn a mad panic, you fire your pistol several times more.  The gun begins to get hot but you keep firing.\nOut of despiration you fire one last shot despite the overheated pistol burning your hands.  The gun makes a loud pop\nand the fusion energy blows from the gun's internals.  Not only is the frame of the gun\nblown away, it takes the top half of your body with it.\n\n---------------\n   GAME OVER\n---------------";
        forest12 = "\nYou wait with great anxiety for the boulders to fall, as the hunter and the beast are in a mad dance\ndodging one another at the cave entrance.  Just before it appears too late, the giant rocks fall\nand crush the creature, while just missing the hunter.  The hunter picks up the ship part dropped\nby the monster during the event, and comes to you.\n[1]Continue";
        forest13 = "\nCongrats you won the game!\n";
    }
    string getOne(){return forest1;}
    string getTwo(){return forest2;}
    string getThree(){return forest3;}
    string getFive(){return forest5;}
    string getSix(){return forest6;}
    string getSeven(){return forest7;}
    string getEight(){return forest8;}
    string getNine(){return forest9;}
    string getTen(){return forest10;}
    string getEleven(){return forest11;}
    string getTwel(){return forest12;}
    string getThirt(){return forest13;}
};

#endif /* FOREST_H */

