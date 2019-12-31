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
class TwoWheeler : public Vehicle { 
public: 
    void printVehicle() { 
        cout << "I am two wheeler" << endl; 
    } 
}; 
class FourWheeler : public Vehicle { 
    public: 
    void printVehicle() { 
        cout << "I am four wheeler" << endl; 
    } 
}; 

int main() { 
    cout <<"Main thread is strated..!!\n";
    return 0; 
} 