#include"BaseObject.h"
BaseObject::BaseObject(int id, string name, string position) {
	this->id = id;
	this->name = name;
	this->position = position;
}
BaseObject::~BaseObject() {
	printf("BaseObject destructor\n");
}
int BaseObject::getId() {
	return id;
}
string BaseObject::getName() {
	return name;
}
string BaseObject::getPosition() {
	return position;
}
void BaseObject::move() {
	printf("move\n");
}