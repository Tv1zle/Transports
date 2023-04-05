#include <iostream>
using namespace std;


class Transport 
{
public:
    virtual void input() = 0;
    virtual void output() = 0;
    virtual float fuelConsumption() = 0;
    virtual float getCost() = 0;
    virtual void setCost(float cost) = 0;
    virtual float getLoadCapacity() = 0;
    virtual int getPassengerCapacity() = 0;
};

class Car : public Transport 
{
private:
    float cost;
    float fuel;
    float loadCapacity;
    int passengerCapacity;
public:
    void input() 
    {
        cout << "Enter cost: ";
        cin >> cost;
        cout << "Enter fuel consumption: ";
        cin >> fuel;
        cout << "Enter load capacity: ";
        cin >> loadCapacity;
        cout << "Enter passenger capacity: ";
        cin >> passengerCapacity;
    }
    void output() 
    {
        cout << "Cost: " << cost << endl;
        cout << "Fuel consumption: " << fuel << endl;
        cout << "Load capacity: " << loadCapacity << endl;
        cout << "Passenger capacity: " << passengerCapacity << endl;
    }
    float fuelConsumption() 
    {
        return fuel;
    }
    float getCost()
    {
        return cost;
    }
    void setCost(float cost)
    {
        this->cost = cost;
    }
    float getLoadCapacity()
    {
        return loadCapacity;
    }
    int getPassengerCapacity() 
    {
        return passengerCapacity;
    }
};

class Bus : public Transport 
{
private:
    float cost;
    float fuel;
    float loadCapacity;
    int passengerCapacity;
public:
    void input() 
    {
        cout << "Enter cost: ";
        cin >> cost;
        cout << "Enter fuel consumption: ";
        cin >> fuel;
        cout << "Enter load capacity: ";
        cin >> loadCapacity;
        cout << "Enter passenger capacity: ";
        cin >> passengerCapacity;
    }
    void output() 
    {
        cout << "Cost: " << cost << endl;
        cout << "Fuel consumption: " << fuel << endl;
        cout << "Load capacity: " << loadCapacity << endl;
        cout << "Passenger capacity: " << passengerCapacity << endl;
    }
    float fuelConsumption() 
    {
        return fuel;
    }
    float getCost() 
    {
        return cost;
    }
    void setCost(float cost)
    {
        this->cost = cost;
    }
    float getLoadCapacity()
    {
        return loadCapacity;
    }
    int getPassengerCapacity() 
    {
        return passengerCapacity;
    }
};

int main()
{
    const int SIZE = 2;
    Transport* transport[SIZE];
    transport[0] = new Car();
    transport[1] = new Bus();
    for (int i = 0; i < SIZE; i++) {
        transport[i]->input();
        transport[i]->output();
        cout << "Fuel consumption: " << transport[i]->fuelConsumption() << endl;
        cout << "Cost: " << transport[i]->getCost() << endl;
        transport[i]->setCost(50000);
        cout << "New cost: " << transport[i]->getCost() << endl;
        cout << "Load capacity: " << transport[i]->getLoadCapacity() << endl;
        cout << "Passenger capacity: " << transport[i]->getPassengerCapacity() << endl;
        delete transport[i];
    }
}