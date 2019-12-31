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
//threeWheeler class 
class FourWheeler : public Vehicle { 
    public: 
    void printVehicle() { 
        cout << "I am four wheeler" << endl; 
    } 
}; 

//define client class
//create object method declaration
int main() { 
    cout <<"Main thread is strated..!!\n";
 
    // main thread started
    //create client object
    //create vehicle object
    //call print method
    return 0; 
} 