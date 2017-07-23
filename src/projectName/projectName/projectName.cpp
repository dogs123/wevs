// projectName.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Enemies.h"
#include "Towers.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Towers y;
	Enemies x;
	x.x = x.GetX();
	x.y = x.GetY();

	y.Attack(x);

	return 0;
}

