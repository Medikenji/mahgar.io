// ploinc.cpp

#include "ploinc.h"

Ploinc::Ploinc() : Blob()
{
	this->position = {static_cast<float>(rand() % Config::SWIDTH), static_cast<float>(rand() % Config::SHEIGHT)};
	this->_size = 3;
}

Ploinc::~Ploinc()
{
}
