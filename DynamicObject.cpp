#pragma once
#include "BaseObject.h"
class DynamicObject : public BaseObject
{
public:
	DynamicObject(int id, string name, string position) : BaseObject(id, name, position) {}
	~DynamicObject() {
		printf("DynamicObject destructor\n");
	}
	void move() { printf("Can move"); }
};