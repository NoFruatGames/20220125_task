#pragma once
#include "GoodBasic.h"
class Freezer : public GoodBasic
{
private:

    int _cameras;
    int _weight;
    string _color;
    string _country;
    int _doors;
public:
    Freezer();

    Freezer(int id);
    Freezer(int id, int price);
    Freezer(int id, int price, string name);
    Freezer(int id, int price, string name, string description, int cam);
    Freezer(int id, int price, string name, string description, int cam, int weight);
    Freezer(int id, int price, string name, string description, int cam, int weight, string color, string country, int doors);

    void fillProperties(int cam = 0, int weight = 0, int doors = 0, string color = "nocolor", string country = "nocountry");


    int getCameras();
    string getColor();
    string getCountry();
    int getDoors();
    int getWeight();

    void setCameras(int cam);
    void setColor(string color);
    void setCountry(string country);
    void setDoors(int doors);
    void setWeight(int weight);

    void printHello();

    void printString(string dataToPrint);

    void toString();
};

