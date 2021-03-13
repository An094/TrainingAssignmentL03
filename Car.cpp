#include"DynamicObject.cpp"
class Car :public DynamicObject
{
public:
	Car(int id, string name, string position) :DynamicObject(id, name, position) {}
	~Car() { printf("Car destructor\n"); }
	void move() { printf("Car can move\n"); }

private:

};
