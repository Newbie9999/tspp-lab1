#ifndef FLAT_H
#define FLAT_H
#include <classes/Room.h>
#include <list>
#include <iostream>


class Flat
{
    public:
        int roomQuantity;
        std::list <Room> rooms;
        Flat(int roomQuantity){
            this->roomQuantity = roomQuantity;
        }

        virtual ~Flat(){
            std::cout << "\nFlat is deleted";
        }
        void addRoom(Room room){
            this->rooms.push_back(room);
        }
};

#endif // FLAT_H
