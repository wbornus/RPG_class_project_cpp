#pragma once
using namespace std;
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include"Animations.h"
#include"Items.h"
#include"Locations.h"

class Creature {

protected:

	unsigned int m_lvl;
	unsigned int m_hp;
	unsigned int m_damage;
	
public:

	Creature()
	{
		m_hp = 100;
		m_damage = 20;
		m_lvl = 1;
	}
	~Creature()
	{

	}

	
	
	
	unsigned int getLvl() { return m_lvl; }
	unsigned int getHp() { return m_hp; }
	unsigned int getDamage() { return m_damage; }

	void setHp(int hp)
	{
		m_hp = hp;
	}
	

};

//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

class Monster : public Creature {

public:

	Monster()
	{

	}

	~Monster()
	{

	}
	void attack(){}
};

//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

class Player :public Creature {

protected:

	vector <Elixir> elixirs;
	int m_killedEnemies;

public:

	Player() {
		
		for (int i = 0; i < 10; i++)
		{
			Elixir e;
			elixirs.push_back(e);
		}
		m_killedEnemies = 0;
	}

	~Player()
	{

	}

	virtual void attack(Monster &m){}
	virtual void beAttacked(Monster &m){}
	
	void heal() {
		if (m_hp < 100 || elixirs.size() > 0)
		{
			m_hp += elixirs[0].getHealingPoints();
			elixirs.pop_back();
		}
		if (m_hp > 100) { m_hp = 100; }
		system("cls");
	}

	void tryHeal()
	{
		if (m_hp == 100)
		{
			string exeption = "HEALTH POINTS MAXIMUM. CAN NOT HEAL";
			throw exeption;
		}
		else heal();
	}
	void gainLvl()
	{
		if (m_killedEnemies == pow(m_lvl, 2)) { m_lvl++; m_damage += sqrt(m_lvl); }
	}

	int getElixirs() { return elixirs.size(); }

	virtual void defaultAnimation(Monster &m) = 0;
};

//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

class Archer :public Player {
protected:
	vector<Arrow>arrows;
public:
	
	void attack(Monster &m);
	void beAttacked(Monster &m);
	int getArrows() { return arrows.size(); }

	Archer()
	{
		for (int i = 0; i <= 50; i++)
		{
			Arrow a;
			arrows.push_back(a);
		}
	}

	void defaultAnimation(Monster &m);

};

//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

class Warrior :public Player {

public:
	
	void attack(Monster &m);
	void beAttacked(Monster &m);
	void defaultAnimation(Monster &m);
};

//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

class Sorcerer :public Player {

public:
	
	void attack(Monster &m);
	void beAttacked(Monster &m);
	void defaultAnimation(Monster &m);
};

//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

