/*
* File Name: lab4_exC.cpp
* Assignment: Lab 4 Exercise C
* Lab section: B02
* Completed by: Darin Vicaldo, Brandon Nguyen
* Development Date: September 30, 2024
*/

#include <string>

// Interface for Moveable, pure virtual functions
class Moveable {
public:
    virtual void forward() = 0; 
    virtual void backward() = 0;
};

class Resizable {
public:
    void enlarge(int n);
    void shrink(int n); 
};

// Class Vehicle, which inherits from Moveable
class Vehicle : public Moveable {
protected:
    string name; 
public:
    Vehicle(const string& name) : name(name) {}
    void move(); 
};

// Class car, derived from Vehicle
class Car : public Vehicle {
private:
    int seats; 
public:
    Car(const string& name, int seats) : Vehicle(name), seats(seats) {}
    void turn();
};
