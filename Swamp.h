
/* 
 * File:   Swamp.h
 * Author: nadja
 *
 * Created on April 26, 2021, 10:37 PM
 */
#include <iostream>         //for endl, cout, cin
using namespace std;        //to not use std::
#ifndef SWAMP_H
#define SWAMP_H

class Swamp{
private:
    int choice;
    string first, second, third, fourth, fifth, sixth, seventh, eighth;
public:
    Swamp(){
        cout << "Approaching the swamp, the ground becomes softer and a sour aroma fills the air amongst thick fog.  Checking your"
                << "\nsurroundings in the swamp is difficult and you are not sure which way you've come from."
		<< "\nAround you appears to be the remains of a previous visitor.  It appears as if they shared a similar"
		<< "\njourney as yours, but much earlier in time.  Muddy steel and fungus covered wreckage rest throughout the"
		<< "\nforeboding waters.\n\n[1]Search more of the swamp" << endl;
        cin >> choice;
        cout << "Carefully moving forward, you spy a small ship cockpit with its door facing upright beyond thick fog surrounding"
                << "\nyou.  The obscure piece of wreckage is half submerged in thick sludge.  The door is lined with several "
                << "\nforeign plants, and its window is cracked.  Inside you can see a part you could use for your ship."
		<< "\nWhat do you want to do?\n[1]Force open the door\n[2]Break the window and reach for the part" << endl; 
        first =  "You grab the door by its plant covered handle and pull.  Just before you think there is no use, the vines \nsnap back with force and the door flies open with a loud creak!  Inside you can hardly make out much, but\nyou can one of 3 pieces you need to repair your ship.  What do you want to do?\n[1]Examine the cockpit more\n[2]Reach for the part";
        second = "\nAs you look closer there appears to be some kind of alien plant life living inside the dark \ncorners of the cockpit, and it doesn't look friendly.  What do you want to do?\n[1]Use your fusion pistol to shoot the plant\n[2]Reach for the part";
        third = "\nYou pull your fusion pistol out and make quick work of whatever horrors lived inside of the cockpit. \nIt looks safe to take the ship part you need. \nAfter taking the part, the weather has reluctantly cleared up and you can make your way back.\n[1]Continue adventure";
        fourth = "\nJust as you feel for the part, something grabs your arms from inside the cockpit!  You struggle with your hands around\nthe part as you step out of the cockpit you find the alien plant life has grabbed onto your arm and continues to grasp \ntighter!  What do you want to do?\n[1]Go to the water and drown the plant\n[2]Use your fusion pistol to shoot the plant";
        fifth = "\nAs you struggle with the wriggling plant, you dive your arm into the thick bog.  The plant has abruptly stopped, but you\nsoon find out why.  A burning sensation unlike anything you've felt before covers your entire arm.  As you pull your\narm out you stare in horror.  What was once your arm has now begun rapidly dissolving due to the toxic swamp water.\nThe last few moments you recall are seeing the bone from beneath your flesh and space suit.  You cannot\nbare any more...your eyes slowly close.  You have failed this Chronicle, but you always try again.\n\n---------------\n   GAME OVER\n---------------";
        sixth = "\nYou pull your fusion pistol out and make quick work of whatever horrors lived inside of the cockpit.\nIt looks safe to take the ship part you need.\nAfter taking the part, the weather has reluctantly cleared up and you can make your way back.\n[1]Continue adventure";
        seventh = "You pick up a rock and break the cracked window.  It did not have much strength thanks to the ship's crash long ago.\nYou reach inside and need to lean forward completely through the window to get a feel for the ship part.\nJust as you feel for the part, something grabs your arms from inside the cockpit!  You struggle with your hands around\nthe part and feel a sharp pain draw across your left forearm as you pull out of the window.  Some form of alien plant \nlife has grabbed onto your arm and continues to grasp tighter!  What do you want to do?\n[1]Go to the water and drown the plant\n[2]Use your fusion pistol to shoot the plant";
    }
    string getFirst(){return this->first;}
    string getSec(){return this->second;}
    string getThird(){return this->third;}
    string getFourth(){return this->fourth;}
    string getFifth(){return this->fifth;}
    string getSixth(){return this->sixth;}
    string getSev(){return this->seventh;}
    
};
        

#endif /* SWAMP_H */

