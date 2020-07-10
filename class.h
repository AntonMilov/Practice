#pragma once
#pragma warning(suppress : 4996)
#include<string>
#include <iostream>
#define _SRT_SECURE_NO_WARNINGS

using namespace std;


class ComputerGames
{
	
private:
	char name[100];
	char genre[20];
	int price;
	char manufacture[30];


public:
	int ratingOfPlayers;

	ComputerGames() {
		strcpy_s(name, "Game");
		strcpy_s(genre, "Genre");
		price = 0;
		strcpy_s(manufacture, "Manufacture");
		ratingOfPlayers = 0;
		ratingOfJournalists = 0;
	}

	ComputerGames(char name[], char genre[], int price, char manufacture[], int ratingOfPlayers, int ratingOfJournalists) {
		strcpy_s(this->name, name);
		strcpy_s(this->genre, genre);
		this->price = price;
		strcpy_s(this->manufacture, manufacture);
		this->ratingOfPlayers = ratingOfJournalists;
		this->ratingOfJournalists = ratingOfJournalists;
	}

	ComputerGames(char name[100], char genre[20], int price, char manufacture[30]) {
		strcpy_s(this->name, name);
		strcpy_s(this->genre, genre);
		this->price = price;
		strcpy_s(this->manufacture, manufacture);
		ratingOfPlayers = 50;
		ratingOfJournalists = 50;
	}

	~ComputerGames() {
		strcpy_s(name, "");
		strcpy_s(genre, "");
		price = 0;
		strcpy_s(manufacture, "");
		ratingOfPlayers = 0;
		ratingOfJournalists = 0;
	}

	void input() {
	
		cout << endl << "������� �������� ����: ";
		cin >> name;
		cout << "������� ���� ����: ";
		cin >> genre;
		cout << "������� �������������: ";
		cin >> manufacture;
		cout << "������� ����: ";
		cin >> price;
		cout << "������� ������� �������: ";
		cin >> ratingOfPlayers;
		cout << "������� ������� ��������: ";
		cin >> ratingOfJournalists;
	};

	void output() {
		cout << endl;
		cout << "�������� ����: " << name << endl;
		cout << "���� ����: " << genre << endl;
		cout << "�������������: " << manufacture << endl;
		cout << "����: " << price << endl;
		cout << "������� �������: " << ratingOfPlayers << endl;
		cout << "������� ��������: " << ratingOfJournalists << endl;
		cout << endl;
	};

protected:
	int ratingOfJournalists;
};


