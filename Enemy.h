
/* 
 * File:   Enemy.h
 * Author: nadja
 *
 * Created on April 27, 2021, 6:20 PM
 */
#include <set>
#include <string>
using namespace std;
#ifndef ENEMY_H
#define ENEMY_H

class Enemy{
public:
    string enemy;
    int health;
    int kick;
    int punch;
    int miss;
    
    Enemy(int, string);
    string getEnemy();
    int getDamage(int);
    int getHealth();
    void setEnemy(string);
    void setHealth(int);
    int getPunch();
    int getKick();
    int getMiss();
    void setPunch(int);
    void setKick(int);
    void setMiss(int);
    void displayE();
};

#endif /* ENEMY_H */

