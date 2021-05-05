#include "Enemy.h"

Enemy::Enemy(int health, string name){
    set<int> enemy;
    enemy.insert(health);
    enemy.insert(20);
    enemy.insert(15);
    enemy.insert(0);
    this->setHealth(health);
    this->setEnemy(name);
    this->setKick(20);
    this->setPunch(15);
    this->setMiss(0);    
}

std::string Enemy::getEnemy() {
	return this->enemy;
}

int Enemy::getDamage(int choice) {
	switch (choice) {
	case 1:
		return this->getPunch();
	case 2:
		return this->getKick();
	case 3:
		return this->getMiss();
	default:
		return 0;
	}
}
int Enemy::getHealth() {
	return this->health;
}
void Enemy::setEnemy(std::string enemy) {
	this->enemy = enemy;
}
void Enemy::setHealth(int newHealth) {
	this->health = newHealth;
}
int Enemy::getPunch() {
	return this->punch;
}
int Enemy::getKick() {
	return this->kick;
}
int Enemy::getMiss() {
	return this->miss;
}
void Enemy::setPunch(int i) {
	this->punch = i;
}
void Enemy::setKick(int i) {
	this->kick = i;
}
void Enemy::setMiss(int i) {
	this->miss = i;
}