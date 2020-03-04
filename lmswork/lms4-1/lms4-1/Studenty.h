#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
using namespace std;
class Studenty
{

private:
	
	string name;
	int number;
	int ball[5];
	void copy(int* a)
	{
		for (int i = 0; i <= 5; i++)
		{
			ball[i]= a[i];
		}
	}
	Studenty(string nm, int nb, int* bl)
	{
		name = nm;
		number = nb;
		copy(bl);

	}
public:
	Studenty()
	{
		name = "";
		number = 0;
	}
	
	void print()
	{
		cout << "Name: " << name << endl;
		cout << "Number of Groupe: " << number << endl;
		cout << "Ball = " << ball << endl;
	}
};
class Student : public Studenty
{
public:
	Student () : Studenty()
	{

	}


};
