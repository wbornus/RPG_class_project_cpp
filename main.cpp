using namespace std;
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include"Animations.h"
#include"Items.h"
#include"Locations.h"
#include"Creatures.h"
#include<Windows.h>
using namespace std;

int main()
{
	cout << "ENTERING BATTLE" << endl << endl;
	cout << "CHOOSE YOUR PROFFESION" << endl << endl;
	cout << "1 -----> ARCHER" << endl;
	cout << "2 -----> WARRIOR" << endl;
	cout << "3 -----> SORCERER" << endl << endl;
	cout << "enter number: ";
	int profession;
	do {
		cin >> profession;
	} while (profession != 1 && profession != 2 && profession != 3);

	Player *player;
	switch(profession)
	{
	case 1:
		player = new Archer();
		break;
	case 2:
		player = new Warrior();
		break;
	case 3:
		player = new Sorcerer();
		break;
	default:
		player = new Archer();
		break;
	}
	Monster monster;

	system("cls");

	while (player->getHp() > 0 && monster.getHp() > 0)
	{
		player->defaultAnimation(monster);

		int action;
		cout << "1 -----> ATTACK" << endl;
		cout << "2 -----> HEAL" << endl;
		do {
			cin >> action;
		} while (action != 1 && action != 2);

		switch (action)
		{
		case 1:
			player->beAttacked(monster);
			if (player->getHp() > 0)
			{
				player->attack(monster);
			}
			break;
		case 2:
			try
			{
				player->tryHeal();
			}
			catch (string e)
			{
				cerr << e << endl;
				Sleep(2000);
				system("cls");
			}
		}
	}
	if (player->getHp() <= 0)
	{
		gameOverAnimation();
	}

	if (monster.getHp() <= 0)
	{
		winAnimation();
	}

	system("pause");
	return 0;
}