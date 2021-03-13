#include"DynamicObject.cpp"
class Motorbike :public DynamicObject
{
public:
	Motorbike(int id, string name, string position) :DynamicObject(id, name, position) {}
	~Motorbike() { printf("Motorbike destructor\n"); }
	void move() { printf("Motorbike can move\n"); }

private:

};
