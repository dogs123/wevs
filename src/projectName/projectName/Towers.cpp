#include "stdafx.h"
#include "Towers.h"


Towers::Towers()
{
}

void Towers :: Attack(Enemies enemy)
{
	if ((enemy.x < x) && (enemy.y < y))
	{
		std::cout << enemy.health << std :: endl;
		enemy.health -= damage;
		std::cout << enemy.health << std :: endl;
		Sleep(10);
	}
}
