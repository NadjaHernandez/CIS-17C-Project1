#include "BattleSystem.h"

int BattleSystem::BattleSequence(string name, int enemyHealth, int humanHealth, string& u, int medkit)
{
	int choice;
	Enemy a(50, name);
	enemyHealth = 50;
        return 0;
}


/*
	Battle sequence. Responsible for going through the motions of a battle.
*/
void BattleSystem::Battle(int& choice, uniform_int_distribution<>& distr, Enemy& a, int& enemyHealth, int& humanHealth, string& u, int medkit)
{
	int playerinput;

	// ENEMY TURN
	//choice = distr(getrand);

	if (choice == 1) {
		std::cout << "You have encountered an " << a.getEnemy() << " it has ";
		std::cout << enemyHealth;
		std::cout << " health.";
		std::cout << " The " << a.getEnemy() << " has punched for 15 damage! " << std::endl;
		std::cout << std::endl;
		humanHealth = humanHealth - a.getDamage(1);
		std::cout << "You have been punched, you now have " << humanHealth << " health" << std::endl << std::endl;
	}
	else if (choice == 2) {
		std::cout << "You have encountered an " << a.getEnemy() << " it has ";
		std::cout << enemyHealth;
		std::cout << " health.";
		std::cout << " The " << a.getEnemy() << " has kicked for 20 damage! " << std::endl;
		std::cout << std::endl;
		humanHealth = humanHealth - a.getDamage(2);
		std::cout << "You have been kicked, you now have " << humanHealth << " health" << std::endl << std::endl;
	}
	else if (choice == 3) {
		std::cout << "You have encountered an " << a.getEnemy() << " it has ";
		std::cout << enemyHealth;
		std::cout << " health.";
		std::cout << " The " << a.getEnemy() << " has missed their attack! " << std::endl;
		std::cout << std::endl;
		humanHealth = humanHealth - a.getDamage(3);
		std::cout << "The enemy has missed, you still have " << humanHealth << " health" << std::endl << std::endl;
	}

	// PLAYER TURN

	std::cout << u << " has had enough." << std::endl << std::endl;
	std::cout << "Please select from the following options to fight back the " << a.getEnemy() << std::endl << std::endl;
	std::cout << "1. Use Primary Weapon. 2. Punch with hands." << std::endl;
	std::cout << "3. Use Med Kit.        4. Do nothing." << std::endl << std::endl;
	std::cin >> playerinput;

	if (playerinput == 1) {
		std::cout << u << " has used their primary weapon." << std::endl << std::endl;
		enemyHealth = enemyHealth - 40;
		std::cout << a.getEnemy() << " has taken damage, they now have " << enemyHealth << " health." << std::endl << std::endl;
	}
	if (playerinput == 2) {
		std::cout << u << " has used their fist, and charged with a PUNCH!" << std::endl << std::endl;
		enemyHealth = enemyHealth - 25;
		std::cout << a.getEnemy() << " has taken damage, they now have " << enemyHealth << " health." << std::endl << std::endl;
	}
	if (playerinput == 3) {
		std::cout << u << " felt like they were low on hp, and decided to use their med kit." << std::endl << std::endl;
		std::cout << u << " has: " << medkit << " left.";
		std::cout << u << " now has: " << humanHealth << std::endl;
	}
	if (playerinput == 4) {
		std::cout << u << " couldn't decided what to do, so they did what no one else would do. Nothing." << std::endl << std::endl;
	}
}

