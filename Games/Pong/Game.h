#pragma once
#include <iostream>
#include "Player.h"
#include "Ball.h"

using namespace std;

class Game
{ 

private:

	bool over;
	int cmp;
	int lrg;
	Player p1; 
	Player p2;
	Ball b;
	

public:

	Game(int cmp,int lrg);

    void drawgame();
	void comands(char control,char control2);

};


Game::Game(int cmp, int lrg)
{

	this->cmp = cmp;
	this->lrg = lrg;
	over = false;

}
void Game:: drawgame()
{

	system("cls");
	int i,j;
	int p1HoriPos,p2HoriPos;

	if (p1.getPlayerNumber() == 1) 
	{
		p1HoriPos = 0;
		p2HoriPos = cmp;
	}
	else 
	{
		p1HoriPos = cmp;
		p2HoriPos = 0;
	}



	for (i = 0; i < this->cmp; i++)
		cout << "#";

	cout << endl;


	for (int i = 0; i < this->lrg; i++)
	{
		for (int j = 0; j < this->cmp; j++) {

			if (i == b.getPosY() && b.getPosX() ==j)
			{
				cout << "0";
			}
			if (i >= p1.getPosition()[1] && i <= p1.getPosition()[1] + p1.getSize() && p1HoriPos == j)
			{
				cout << "#";

			}

			if (i >= p2.getPosition()[1] && i <= p2.getPosition()[1] + p2.getSize() && p2HoriPos == j)
			{
					cout << "#";
			}

				cout << " ";

		}
		cout << endl;
	}
	for (i = 0; i < this->cmp; i++)
		cout << "#";
}

void Game ::comands(char control1, char control2)
{
	
	switch (control1) {

	case 'q':
		p1.moveUp();

	case 'a':
		p1.moveDown();

	default:
		p1.idle();

	}

	switch (control2){
	
	
		case 'o':
			p2.moveUp();

		case 'l':
			p2.moveUp();

		default:
			p2.idle();
	
	}

}