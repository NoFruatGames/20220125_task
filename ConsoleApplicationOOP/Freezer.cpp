#include "Freezer.h"
Freezer::Freezer() :
    GoodBasic{ 0, 1, "noname", "nodescription" } {
    fillProperties();
}

Freezer::Freezer(int id) :
    GoodBasic{ id, 0, "noname", "nodescription" } {
    fillProperties();
}
Freezer::Freezer(int id, int price) :
    GoodBasic{ id, price, "noname", "nodescription" } {
    fillProperties();
}
Freezer::Freezer(int id, int price, string name) :
    GoodBasic{ id, price, name, "nodescription" } {
    fillProperties();
}
Freezer::Freezer(int id, int price, string name, string description, int cam) :
    GoodBasic{ id, price, name, description } {
    fillProperties(cam);
}
Freezer::Freezer(int id, int price, string name, string description, int cam, int weight) :
    GoodBasic{ id, price, name, description } {
    fillProperties(cam,weight);
}
Freezer::Freezer(int id, int price, string name, string description, int cam, int weight, string color, string country, int doors) :
    GoodBasic{ id, price, name, description } {
    fillProperties(cam, weight,doors,color,country);
}
void Freezer::fillProperties(int cam, int weight, int doors, string color, string country)
{
    _cameras = cam;
    _weight = weight;
    _doors = doors;
    _color = color;
    _country = country;
}
int Freezer::getCameras() {
    return _cameras;
}
string Freezer::getColor()
{
    return _color;
}
string Freezer::getCountry()
{
    return _country;
}
int Freezer::getDoors()
{
    return _doors;
}
int Freezer::getWeight() {
    return _weight;
}

void Freezer::setCameras(int cam) {
    if (cam > 0 && cam < 5) {
        _cameras = cam;
    }
    else {
        _cameras = 2;
    }
    
}
void Freezer::setColor(string color)
{
    _color = color;
}
void Freezer::setCountry(string country)
{
    _country = country;
}
void Freezer::setDoors(int doors)
{
    _doors = doors;
}
void Freezer::setWeight(int weight) {
    _weight = weight;
}

void Freezer::printHello() {
    std::cout << "Hello from class!\n";
}

void Freezer::printString(string dataToPrint) {
    std::cout << dataToPrint + "\n";
}

void Freezer::toString() {
    cout << "toString inside FreezeOld: id" << getItemId() << " Price:" << getPrice() << " Name:" << getName() << " Descr:" << getDescription() << " Sections:" << getCameras() << " Weight:" << getWeight() << " Color: " << _color << " Country: " << _country << " Doors: " << _doors <<  "\n";
}