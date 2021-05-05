/* 
 * File:   BattleSystem.h
 * Author: nadja
 *
 * Created on May 2, 2021, 4:46 PM
 */
#include "Enemy.h"
#include <iostream>
#include <string>
#include <random>
using namespace std;

#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H

class BattleSystem{
public:
    BattleSystem(){}
    void Battle(int& choice, uniform_int_distribution<>& distr, Enemy& a, int& enemyHealth, int& humanHealth, string& u, int medkit);

    int BattleSequence(string n, int enemyHealth, int humanHealth, string& u, int medkit);

};

#endif /* BATTLESYSTEM_H */

