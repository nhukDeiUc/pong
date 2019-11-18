#pragma once
#include <iostream>

using namespace std;

class Game
{ 

public:
	int cmp;
	int lrg;

	Game(int cmp,int lrg);

    void drawgame();

};


Game::Game(int cmp, int lrg)
{
	this->cmp = cmp;
	this->lrg = lrg;
}
void Game:: drawgame()
{
	int i,j;
	for (i = 0; i < this->cmp; i++)
		cout << "#";

	cout << endl;
	for (i = 0; i < this->lrg; i++)
	{
		for (j = 0; j < cmp / 2; j++)
			cout << " ";
		
		cout << "|"<<endl;
	}
		
	for (i = 0; i < this->cmp; i++)
		cout << "#";
}

