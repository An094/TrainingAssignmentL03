#pragma once
#include "BaseObject.h"
class StaticObject : public BaseObject
{
public:
	StaticObject(int id, string name, string position): BaseObject(id, name, position) { }
	~StaticObject() {
		printf("StaticObject destructor\n");
	}
	void move() { printf("Can't move"); }
};