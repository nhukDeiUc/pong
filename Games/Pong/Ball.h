#pragma once

class Ball 
{
	int speed;
	int posX;
	int posY;

	public:  Ball();
	public: int getPosX();
	public: int getPosY();
	public: void setPosX(int posX);
	public: void setPosY(int posY);

};

Ball::Ball() 
{
	this->posX = 5;
	this->posY = 5;
	this->speed = 1;

}

int Ball::getPosX() 
{
	return posX;
}

int Ball::getPosY()
{
	return posY;
}

void Ball::setPosX(int posX)
{
	this->posX = posX;
}

void Ball::setPosY(int posY)
{
	this->posX = posY;
}

