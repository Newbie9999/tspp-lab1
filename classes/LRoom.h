#ifndef LROOM_H
#define LROOM_H

#include <classes/Room.h>


class LRoom : public Room
{
    public:
        virtual ~LRoom(){}
        bool parket;
        LRoom(bool parket, int colour, int paintPerM2){
            this->parket = parket;
            this->colour = colour;
            this->paintPerM2 = paintPerM2;
        }

    protected:
    private:
};

#endif // LROOM_H
