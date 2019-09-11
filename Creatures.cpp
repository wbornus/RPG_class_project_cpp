using namespace std;
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include"Animations.h"
#include"Items.h"
#include"Locations.h"
#include"Creatures.h"
#include<fstream>

//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

//ARCHER

void Archer::attack(Monster &m)
{
	archerAttackAnimation();

	if (arrows.size() > 0)
	{
		unsigned int hp = m.getHp();
		for (int i = 0; i < m_damage; i++)
		{
			hp -= 1;
			if (hp == 0)
			{
				m_killedEnemies += 1;
				gainLvl();
				archerKillAnimation();

				break;
			}
		}

		m.setHp(hp);
		arrows.pop_back();
	}

	else cout << "OUT OF ARROWS!" << endl;

}

void Archer::beAttacked(Monster &m)
{
	archerBeAttackedAnimation();

	unsigned int damage = m.getDamage();
	for (int i = 0; i < damage; i++)
	{
		m_hp -= 1;
		if (m_hp == 0)
		{
			archerDieAnimation();
			break;
		}
	}

	
}

void Archer::defaultAnimation(Monster &m)
{
	string board[9];
	ifstream myfile;
	myfile.open("archerDefault.txt");
	for (int i = 0; i < 9; i++)
	{
		string line;
		getline(myfile, board[i]);
	}
	for (int i = 0; i < 9; i++)
	{
		cout << board[i] << endl;
	}
	cout << "-------------------------------------------------------------------------------" << endl << endl;
	cout << "PLAYER:" << endl << endl;
	cout << "HEALTH: " << getHp() << endl;
	cout << "ELIXIRS: " << getElixirs() << endl;
	cout << "ARROWS:" << getArrows() << endl;
	cout << "-------------------------------------------------------------------------------" << endl << endl;
	cout << "MONSTER:" << endl << endl;
	cout << "HEALTH:" << m.getHp() << endl << endl;
	cout << "-------------------------------------------------------------------------------" << endl << endl;
	myfile.close();
}

//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

//WARRIOR

void Warrior::attack(Monster &m)
{
	warriorAttackAnimation();

	unsigned int hp = m.getHp();
	for (int i = 0; i < m_damage; i++)
	{
		hp -= 1;
		if (hp == 0)
		{
			m_killedEnemies += 1;
			gainLvl();
			warriorKillAnimation();
			break;
		}
	}

	m.setHp(hp);

	
}

void Warrior::beAttacked(Monster &m)
{
	warriorBeAttackedAnimation();

	unsigned int damage = m.getDamage();
	for (int i = 0; i < damage; i++)
	{
		m_hp -= 1;
		if (m_hp == 0)
		{
			warriorDieAnimation();
			break;
		}
	}
}

void Warrior::defaultAnimation(Monster &m)
{
	string board[9];
	ifstream myfile;
	myfile.open("warriorDefault.txt");
	for (int i = 0; i < 9; i++)
	{
		string line;
		getline(myfile, board[i]);
	}
	for (int i = 0; i < 9; i++)
	{
		cout << board[i] << endl;
	}
	cout << "-------------------------------------------------------------------------------" << endl << endl;
	cout << "PLAYER:" << endl << endl;
	cout << "HEALTH: " << getHp() << endl;
	cout << "ELIXIRS: " << getElixirs() << endl;
	cout << "-------------------------------------------------------------------------------" << endl << endl;
	cout << "MONSTER:" << endl << endl;
	cout << "HEALTH:" << m.getHp() << endl << endl;
	cout << "-------------------------------------------------------------------------------" << endl << endl;
}

//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

//SORCERER

void Sorcerer::attack(Monster &m)
{
	sorcererAttackAnimation();
	unsigned int hp = m.getHp();
	for (int i = 0; i < m_damage; i++)
	{
		hp -= 1;
		if (hp == 0)
		{
			m_killedEnemies += 1;
			gainLvl();
			sorcererKillAnimation();
			break;
		}
	}

	m.setHp(hp);
}

void Sorcerer::beAttacked(Monster &m)
{
	sorcererBeAttackedAnimation();

	unsigned int damage = m.getDamage();
	for (int i = 0; i < damage; i++)
	{
		m_hp -= 1;
		if (m_hp == 0)
		{
			sorcererDieAnimation();
			break;
		}
	}
}

void Sorcerer::defaultAnimation(Monster &m)
{
	string board[9];
	ifstream myfile;
	myfile.open("sorcererDefault.txt");
	for (int i = 0; i < 9; i++)
	{
		string line;
		getline(myfile, board[i]);
	}
	for (int i = 0; i < 9; i++)
	{
		cout << board[i] << endl;
	}
	cout << "-------------------------------------------------------------------------------" << endl << endl;
	cout << "PLAYER:" << endl << endl;
	cout << "HEALTH: " << getHp() << endl;
	cout << "ELIXIRS: " << getElixirs() << endl;
	cout << "-------------------------------------------------------------------------------" << endl << endl;
	cout << "MONSTER:" << endl << endl;
	cout << "HEALTH:" << m.getHp() << endl << endl;
	cout << "-------------------------------------------------------------------------------" << endl << endl;
}