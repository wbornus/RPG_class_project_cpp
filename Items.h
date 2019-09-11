#pragma once

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Item
{
public:

	Item(){}
	~Item() {}
};

class Elixir : public Item
{
protected:

	int m_healingPionts;

public:

	Elixir()
	{
		m_healingPionts = 10;
	}
	~Elixir(){}

	int getHealingPoints() { return m_healingPionts; }
};

class Weapon : public Item
{
protected:
	int m_damage;

public:
	Weapon()
	{
		m_damage = 20;
	}
	~Weapon(){}

	int getDamage() { return m_damage; }
};

class Arrow : public Weapon
{

};

class Sword : public Weapon
{

};

class Wand : public Weapon
{

};