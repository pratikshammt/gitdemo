#include <iostream> 
using namespace std; 
  
enum VehicleType { 
    VT_TwoWheeler,    VT_ThreeWheeler,    VT_FourWheeler 
}; 
  
// Library classes 
class Vehicle { 
public: 
    virtual void printVehicle() = 0; 
    static Vehicle* Create(VehicleType type); 
}; 
class ThreeWheeler : public Vehicle { 
public: 
    void printVehicle() { 
        cout << "I am three wheeler" << endl; 
    } 
}; 
class FourWheeler : public Vehicle { 
    public: 
    void printVehicle() { 
        cout << "I am four wheeler" << endl; 
    } 
}; 