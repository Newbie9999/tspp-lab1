#ifndef STREET_H
#define STREET_H
#include <classes/House.h>
#include <map>
using namespace std;

class Street
{
    public:
        std::list <House> houses;
        double volume;
        std::map <int, float> paintVolume;
        int parket;
        float glass;
        Street(double volume, int parket, float glass){
            this->volume = volume;
            this->parket = parket;
            this->glass = glass;
        }
        Street(double volume, int parket, float glass, std::list<House> houses){
            this->volume = volume;
            this->parket = parket;
            this->glass = glass;
            this->houses = houses;
        }
        void addHouse(House house) {
            this->houses.push_front(house);
        }
        void setPaintVolume(int paint, float volume) {
            this->paintVolume.insert(std::pair<int, float>(paint, volume));
        }

    virtual ~Street();
    protected:
    private:
};

#endif // STREET_H
