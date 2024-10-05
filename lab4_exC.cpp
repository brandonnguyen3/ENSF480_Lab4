/*
* File Name: lab4_exC.cpp
* Assignment: Lab 4 Exercise C
* Lab section: B02
* Completed by: Darin Vicaldo, Brandon Nguyen
* Development Date: September 30, 2024
*/

#include <string>

// Moveable and Resizable are interfaces so it should be an abstract class.
class Moveable {
public:
    virtual void forward() = 0; 
    virtual void backward() = 0;
};

class Resizable {
public:
    virtual void enlarge(int n) = 0; 
    virtual void shrink(int n) = 0;
};

// Class Vehicle has to implement the functions of the interfaces
class Vehicle : public Resizable, public Moveable {
protected:
    string name; 
public:
    Vehicle(const string& name) : name(name) {}
    void move(); 
    void forward();
    void backward();
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
    void forward();
    void backward();
    void enlarge(int n);
    void shrink(int n); 
};
