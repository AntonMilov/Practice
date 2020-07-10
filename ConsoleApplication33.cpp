// ConsoleApplication33.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "class.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	ComputerGames game1;
	game1.output();

	char name[] = { "Counter - Strike: Source" };
	char genre[] = { "Team shooter" };
	char man[] = { "Valve" };
	ComputerGames game2(name, genre, 300, man, 60, 50);
	game2.output();

	char name1[] = { "The witcher 3" };
	char genre1[] = { "" };
	char man1[] = { "CD Project" };
	ComputerGames game3(name1, genre1, 500, man1);
	game3.output();

	ComputerGames games[3]{
		ComputerGames(),
		ComputerGames(),
		ComputerGames()
	};

	for (int i = 0; i < 3; i++) {
		games[i].input();
	}

	for (int i = 0; i < 3; i++) {
		games[i].output();
	}

	return 0;
}


