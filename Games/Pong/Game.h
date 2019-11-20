#pragma once
#include <iostream>
#include "Player.h"
#include "Ball.h"

using namespace std;

class Game
{ 


	int cmp;
	int lrg;
	Player p1, p2;
	Ball b;
	


	Game(int cmp,int lrg);

    void drawgame();

};


Game::Game(int cmp, int lrg)
{
	this->p1 = new Player();
	this->p2 = new Player();
	this->cmp = cmp;
	this->lrg = lrg;

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


	for (i = 0; i < this->lrg; i++)
	{
		for (j = 0; j < this->cmp; j++) {

			if (i == b.getPosY && b.getPosX==j)
			{
				cout << "0";
			}
			if (i >= p1.getPosition && i <= p1.getPosition + p1.getSize && p1HoriPos==j)
			{
				cout << "#";

			}

			if (i >= p2.getPosition && i <= p2.getPosition + p2.getSize && p2HoriPos==j)
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

