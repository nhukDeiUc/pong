#pragma once

class Player
{
	int vertPosition;
	int playerNumber;
	int size;
	int speed;

	Player(int position, int playerNumber);
	void moveUp();
	void moveDown();
	void setSpeed(int speed);
	void IncreaseSize();
	void setSpeed(int speed);
	
	int getPosition();
	
	


};

Player::Player(int position, int playerNumber)
{
	this->vertPosition = position;
	this->playerNumber = playerNumber;
	this->size = 3;
	this->speed = 1;
}

void Player:: moveUp()
{
	vertPosition--;
}

void Player::moveDown()
{
	vertPosition++;
}

void Player::IncreaseSize() 
{
	size++;
}

void Player:: setSpeed(int speed)
{
	this->speed = speed;
}

int Player::getPosition() 
{
	return vertPosition;
}




