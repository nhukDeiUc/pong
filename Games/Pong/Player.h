#pragma once
#include<iostream>
using namespace std;

class Player
{
private:

	int position[2];
	static int playerNumber;
	int size;
	int speed;

	
public:

	Player();
	void moveUp();
	void moveDown();
	void idle();
	void IncreaseSize();
	void setSpeed(int speed);
	void draw(int fieldSize);
	int* getPosition();
	int getPlayerNumber();
	int getSize();
	int getSpeed();

};


Player::Player()
{
	*this->position = {0};
	this->playerNumber++;
	this->size = 3;
	this->speed = 1;
}

void Player:: moveUp()
{
	position[1] = position[0];
	position[0]--;
}

void Player::moveDown()
{
	position[1] = position[0];
	position[0]++;
}

void Player::idle()
{
	position[1] = position[0];
}

void Player::IncreaseSize() 
{
	size++;
}

void Player:: setSpeed(int speed)
{
	this->speed = speed;
}

int* Player::getPosition() 
{
	return position;
}

int Player:: getPlayerNumber() 
{
	return playerNumber;
}

int Player::getSize()
{
	return size;
}

int Player::getSpeed()
{
	return speed;
}
void Player:: draw(int fieldSize) 
{
	int pHoriPos,i,j;
	if (playerNumber == 1)
		pHoriPos = 0;
	else
		pHoriPos = fieldSize;

	for (j = 0; j < size; j++) 
	{
		for (i = 0; i < pHoriPos; i++)
		{
			cout << " ";
		}
		cout<<"#"<<endl;
	}
}