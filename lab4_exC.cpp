/*
* File Name: lab4_exC.cpp
* Assignment: Lab 4 Exercise C
* Lab section: B02
* Completed by: Darin Vicaldo, Brandon Nguyen
* Development Date: September 30, 2024
*/

#include <string>

// Interface for Moveable
class Moveable {
public:
    void forward(int n);
    void backward(int n);
};

class Resizable {
public:
    void enlarge(int n);
    void shrink(int n); 
};

// Class Vehicle
class Vehicle : public Resizable, public Moveable {
protected:
    string name; 
public:
    Vehicle(const string& name) : name(name) {}
    void move(); 
    void forward(int n);
    void backward(int n);
    void enlarge(int n);
    void shrink(int n); 
};

// Class car, inherited from Vehicle
class Car : public Vehicle {
private:
    int seats; 
public:
    Car(const string& name, int seats) : Vehicle(name), seats(seats) {}
    void turn();
    void move(); 
};
