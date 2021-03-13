#include"StaticObject.cpp"
class Tree:public StaticObject
{
public:
	Tree(int id, string name, string position):StaticObject(id, name, position){}
	~Tree() { printf("Tree destructor\n"); }
	void move() {
		printf("Tree can't move\n");
	}

private:

};
