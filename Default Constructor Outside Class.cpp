#include <iostream>
using namespace std;

    class Car{
    int mileage;
    char name[50];
    double cost;
    public:
    Car();
    void display();
    };
    
    Car::Car(){
        cout<<"Enter the Mileage of Car: ";
        cin>>mileage;
        cout<<"Enter the Name of Car: ";
        cin>>name;
        cout<<"Enter the Cost of Car: ";
        cin>>cost;
    }
    void Car::display(){
        cout<<"Car Name: "<<name;
        cout<<"\n"<<name<<" Mileage: "<<mileage;
        cout<<"\n"<<name<<" Cost: "<<cost;
    }
    int main(){
    Car c1;
    c1.display();
    return 0;
    }
    
