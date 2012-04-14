/*
 * SneeuwMan.cpp
 *
 *  Created on: 1 mrt. 2012
 *      Author: Kolja Doove
 */



#include "SneeuwMan.hpp"
#include <ma.h>


SneeuwMan::SneeuwMan(int positionX, int positionY)
{
	this->positionX = positionX;
	this->positionY = positionY;
}


void SneeuwMan::draw()
{
	maSetColor(0x888888);
	maFillRect(this->positionX, this->positionY -30, 30, 30);
	maFillRect(this->positionX +5, this->positionY -50, 20, 20);

}

void SneeuwMan::move( int direction)
{

	this->positionX += direction;

}

