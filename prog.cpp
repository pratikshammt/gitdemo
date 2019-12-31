#include<iostream>
using namespace std; 
  
// Library classes 
class Vehicle { 
public: 
    virtual void printVehicle() = 0; 
    static Vehicle* Create(VehicleType type); 
}; 
class one : public Vehicle { 
public: 
    void printVehicle() { 
        cout << "I am two wheeler" << endl; 
    } 
}; 
class two : public Vehicle { 
public: 
    void printVehicle() { 
        cout << "I am three wheeler" << endl; 
    } 
}; 
class three : public Vehicle { 
    public: 
    void getVehicle() { 
        cout << "I am four wheeler" << endl; 
    } 
}; 