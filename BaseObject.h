#pragma once
#ifndef _BASE_OBJECT_H_
#define _BASE_OBJECT_H_

#include <iostream>
using namespace std;

class BaseObject
{
public:
	BaseObject(int, string, string);
	virtual ~BaseObject();
	int getId();
	string getName();
	string getPosition();
	virtual void move();

private:
	int id;
	string name;
	string position;
};

#endif // !_BASE_OBJECT_H_
