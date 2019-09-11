#include"Animations.h"
#include<iostream>
#include<string>
#include<fstream>
#include<Windows.h>
#include"Creatures.h"
#include"Items.h"
using namespace std;

void gameOverAnimation()
{
	ifstream myfile;
	myfile.open("gameOver.txt");

	string board[11];
	for (int i = 0; i < 11; i++)
	{
		string line;
		getline(myfile, line);
		board[i] = line;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			cout << board[j] << endl;
		}
		Sleep(100);
		system("cls");
		Sleep(100);
	}
}

void winAnimation()
{
	ifstream myfile;
	myfile.open("win.txt");

	string board[7];
	for (int i = 0; i < 7; i++)
	{
		string line;
		getline(myfile, line);
		board[i] = line;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cout << board[j] << endl;
		}
		Sleep(100);
		system("cls");
		Sleep(100);
	}
}

//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

//ARCHER



void archerAttackAnimation()
{
	system("cls");
	ifstream myfile;
	myfile.open("archerAttack.txt");
	string line;
	while (!myfile.eof())
	{
		for (int i = 0; i < 9; i++)
		{
			getline(myfile, line);
			cout << line << endl;
		}
		Sleep(15);
		system("cls");
	}
}

void archerBeAttackedAnimation()
{
	system("cls");
	ifstream myfile;
	myfile.open("archerBeAttacked.txt");
	string line;
	while (!myfile.eof())
	{
		for (int i = 0; i < 9; i++)
		{
			getline(myfile, line);
			cout << line << endl;
		}
		Sleep(15);
		system("cls");
	}
	myfile.close();
}

void archerKillAnimation()
{
	system("cls");
	ifstream myfile;
	myfile.open("archerKill.txt");
	string line;
	while (!myfile.eof())
	{
		for (int i = 0; i < 9; i++)
		{
			getline(myfile, line);
			cout << line << endl;
		}
		Sleep(15);
		system("cls");
	}
	myfile.close();
}

void archerDieAnimation()
{
	system("cls");
	ifstream myfile;
	myfile.open("archerDie.txt");
	string line;
	while (!myfile.eof())
	{
		for (int i = 0; i < 9; i++)
		{
			getline(myfile, line);
			cout << line << endl;
		}
		Sleep(15);
		system("cls");
	}
	myfile.close();
}

//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

//WARRIOR 



void warriorAttackAnimation()
{
	system("cls");
	ifstream myfile;
	myfile.open("warriorAttack.txt");
	string line;
	while (!myfile.eof())
	{
		for (int i = 0; i < 9; i++)
		{
			getline(myfile, line);
			cout << line << endl;
		}
		Sleep(200);
		system("cls");
	}
	myfile.close();
}

void warriorBeAttackedAnimation()
{
	system("cls");
	ifstream myfile;
	myfile.open("warriorBeAttacked.txt");
	string line;
	while (!myfile.eof())
	{
		for (int i = 0; i < 9; i++)
		{
			getline(myfile, line);
			cout << line << endl;
		}
		Sleep(200);
		system("cls");
	}
	myfile.close();
}

void warriorKillAnimation()
{
	system("cls");
	ifstream myfile;
	myfile.open("warriorKill.txt");
	string line;
	while (!myfile.eof())
	{
		for (int i = 0; i < 9; i++)
		{
			getline(myfile, line);
			cout << line << endl;
		}
		Sleep(50);
		system("cls");
	}
	myfile.close();
}

void warriorDieAnimation()
{
	system("cls");
	ifstream myfile;
	myfile.open("warriorDie.txt");
	string line;
	while (!myfile.eof())
	{
		for (int i = 0; i < 9; i++)
		{
			getline(myfile, line);
			cout << line << endl;
		}
		Sleep(50);
		system("cls");
	}
	myfile.close();
}

//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

//SORCERER



void sorcererAttackAnimation()
{
	system("cls");
	ifstream myfile;
	myfile.open("sorcererAttack.txt");
	string line;
	while (!myfile.eof())
	{
		for (int i = 0; i < 9; i++)
		{
			getline(myfile, line);
			cout << line << endl;
		}
		Sleep(100);
		system("cls");
	}
	myfile.close();
}

void sorcererBeAttackedAnimation()
{
	system("cls");
	ifstream myfile;
	myfile.open("sorcererBeAttacked.txt");
	string line;
	while (!myfile.eof())
	{
		for (int i = 0; i < 9; i++)
		{
			getline(myfile, line);
			cout << line << endl;
		}
		Sleep(100);
		system("cls");
	}
	myfile.close();
}

void sorcererKillAnimation()
{
	system("cls");
	ifstream myfile;
	myfile.open("sorcererKill.txt");
	string line;
	while (!myfile.eof())
	{
		for (int i = 0; i < 9; i++)
		{
			getline(myfile, line);
			cout << line << endl;
		}
		Sleep(50);
		system("cls");
	}
	myfile.close();
}

void sorcererDieAnimation()
{
	system("cls");
	ifstream myfile;
	myfile.open("sorcererDie.txt");
	string line;
	while (!myfile.eof())
	{
		for (int i = 0; i < 9; i++)
		{
			getline(myfile, line);
			cout << line << endl;
		}
		Sleep(50);
		system("cls");
	}
	myfile.close();
}

//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
