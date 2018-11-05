#ifndef HOUSE_H
#define HOUSE_H


class House
{
    public:
        virtual ~House(){}
        int floors, flatsPerFloor;
        std::list <Flat> flats;
        House(int floors) {
            this->floors = floors;
        }
        House (int floors, std::list<Flat> flats) {
            this->floors = floors;
            this->flats = flats;
        }
        void addFlat(Flat flat){
            this->flats.push_front(flat);
        }

    protected:
    private:
};

#endif // HOUSE_H
