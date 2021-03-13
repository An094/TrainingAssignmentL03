#include"StaticObject.cpp"
class House :public StaticObject
{
public:
	House(int id, string name, string position) :StaticObject(id, name, position) {}
	~House() { printf("House destructor\n"); }
	void move() {
		printf("House can't move\n");
	}

private:

};
