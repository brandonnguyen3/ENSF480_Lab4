/*
* File Name: lab4_exC.cpp
* Assignment: Lab 4 Exercise C
* Lab section: B02
* Completed by: Darin Vicaldo, Brandon Nguyen
* Development Date: October 5, 2024
*/

#include <string>

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

class Vehicle : public Resizable, public Moveable {
protected:
    std::string name; 
public:
    Vehicle(const std::string& name);
    void move(); 
    void forward() override;
    void backward() override;
    void enlarge(int n) override;
    void shrink(int n) override; 
};

class Car final: public Vehicle {
private:
    int seats; 
public:
    Car(const std::string& name, int seats);
    void turn();
    void move() override; 
    void forward() override;
    void backward() override;
    void enlarge(int n) override;
    void shrink(int n) override; 
};

