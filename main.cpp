// Name: Amer Yono
// Student ID: 200711334
// Email: yono004@cougars.csusm.edu

#include <iostream>
#include "ToyFactory.cpp"
using namespace std;

ToyFactory* ToyFactory::CreateFactory(string factory) {
    if (factory == "Robot") return new RobotFactory();
    else if(factory == "Animal") return new AnimalFactory();
}

int main() {
    ToyFactory *Robot = ToyFactory::CreateFactory("Robot");
    ToyFactory *Animal = ToyFactory::CreateFactory("Animal");

    Robot->GetLeg()->action();
    cout << endl;

    Robot->GetArm()->action();
    cout << endl;

    Robot->GetBody()->action();
    cout << endl;

    Robot->GetHead()->action();
    cout << endl;

    Animal->GetLeg()->action();
    cout << endl;

    Animal->GetArm()->action();
    cout << endl;

    Animal->GetBody()->action();
    cout << endl;

    Animal->GetHead()->action();
}