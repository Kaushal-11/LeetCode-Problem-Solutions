#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    public :
    string CompanyName;
    float Cost;
    float Mileage;
   
};

class Car : public Vehicle{
    public :
    int Seats;
    char FuelType;

    void get(){
        getline(cin, CompanyName);
        cin>>Mileage;
        cin>>Cost;
        cin>>Seats;
        cin>>FuelType;
        }

    void put(){
        cout<<"Company Name: "<<CompanyName<<endl;
        cout<<"Mileage: "<<Mileage<<endl;
        cout<<"Price: "<<Cost<<endl;
        cout<<"Seating capacity: "<<Seats<<endl;
        cout<<"Fuel type: "<<FuelType<<endl;
    }    
    };

class Bike : public Vehicle{
    public :
    int No_of_gears;
    float fuel_tank_capacity;
    float discbreak_size;

    void get(){
        cin>>CompanyName;
        cin>>Mileage;
        cin>>Cost;
        cin>>No_of_gears;
        cin>>fuel_tank_capacity;
        cin>>discbreak_size;
    }

    void put(){
        cout<<"Company Name: "<<CompanyName<<endl;
        cout<<"Mileage: "<<Mileage<<endl;
        cout<<"Price: "<<Cost<<endl;
        cout<<"Number of gears: "<<No_of_gears<<endl;
        cout<<"Fuel tank Capacity: "<<fuel_tank_capacity<<endl;
        cout<<"Disc brake size: "<<discbreak_size<<endl;
    }
};

int main() {
    Car c;
    Bike b;
    c.get();
    b.get();
    cout<<"Car"<<endl;
    c.put();
    cout<<"Bike"<<endl;
    b.put();
return 0;
}