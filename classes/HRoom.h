#ifndef HROOM_H
#define HROOM_H

#include <classes/Room.h>


class HRoom : public Room
{
    public:
        virtual ~HRoom(){}
        int windowQuantity;
        HRoom(int windowQuantity, int colour, int paintPerM2){
            this->windowQuantity = windowQuantity;
            this->colour = colour;
            this->paintPerM2 = paintPerM2;
        }

    protected:
    private:
};

#endif // HROOM_H
