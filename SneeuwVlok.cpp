/*
 * SneeuwVlok.cpp
 *
 *  Created on: 4 mrt. 2012
 *      Author:  Kolja Doove
 */

#include "SneeuwVlok.hpp"
#include <ma.h>

SneeuwVlok::SneeuwVlok(int positionX, int positionY)
{
	this->positionX = positionX;
	this->positionY = positionY;
	this->size = rand()%8;
	this->dead = false;

}

void SneeuwVlok::draw()
{
	maSetColor( 0xffffff);
	maFillRect ( this->positionX, this->positionY, this->size, this->size);
}

void SneeuwVlok::fall(int groundLevel)
{


	if(positionY < groundLevel)
	{
	this->positionY++;
	}
	else
	{
		dead = true;
	}

//	if (positionY > groundLevel -10)
//	{
//		dead = true;
//	}
}

bool SneeuwVlok::isDead()
{
	return dead;

}
