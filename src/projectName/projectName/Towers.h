#pragma once
#include <string>
#include "Enemies.h"
#include "windows.h"
#include <iostream>

class Towers
{
public:
	Towers();
	void Attack(Enemies x);

	std::string name = "Archer";
	int damage  = 5;
	int range = 5;
	int x = 250;
	int y = 250;
	int cost = 0;
	bool first = true;
	bool last = false;
	bool strongest = false;
};

