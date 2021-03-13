// Lesson3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"Tree.cpp"
#include"Car.cpp"
#include"House.cpp"
#include"Motorbike.cpp"
#include<list>
using namespace std;

list<BaseObject*> createListObject() {
    list<BaseObject*> listObject;
    listObject.push_back(new Tree(1, "Flower", "in the garden"));
    listObject.push_back(new Car(2, "Vinfast", "on the road"));
    listObject.push_back(new House(3, "my house", "soc son"));
    listObject.push_back(new Motorbike(4, "ducati", "ha noi"));
    return listObject;
}

void freeMemory(list<BaseObject*> listObj) {
    for (list<BaseObject*>::iterator i = listObj.begin(); i != listObj.end(); i++) {
        delete* i;
    }
    listObj.clear();
}

int main()
{
    list<BaseObject*> listObj = createListObject();
    for (auto obj : listObj) {
        printf("%s\n",obj->getName().c_str());
        obj->move();
        printf("%s\n", obj->getPosition().c_str());
        printf("\n");
    }
    freeMemory(listObj);
    return 0;
}
