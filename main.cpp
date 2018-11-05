#include <iostream>
#include <classes/Flat.h>
#include <classes/House.h>
#include <classes/HRoom.h>
#include <classes/LRoom.h>
#include <classes/Street.h>

using namespace std;

int main()
{
    LRoom *myLRoom = new LRoom(true, 5, 2);
    HRoom *myHRoom = new HRoom(5, 6, 1);
    Flat *myFlat = new Flat(2);
    myFlat->addRoom(*myLRoom);
    myFlat->addRoom(*myHRoom);
    House *house = new House(1);
    house->addFlat(*myFlat);
    delete(house);
    delete(myFlat);
    delete(myHRoom);
    delete(myLRoom);
    return 0;
}

