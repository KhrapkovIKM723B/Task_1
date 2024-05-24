#include <iostream>
#include <string>
#include <windows.h> 

using namespace std;


class TransportVehicle
{
protected:
    int speed; 
    int enginePower; 

public:
    TransportVehicle(int spd, int power) : speed(spd), enginePower(power) {}

    
    virtual void show() 
    {
        cout << "Швидкість: " << speed << " км/год" << endl;
        cout << "Потужність двигуна: " << enginePower << " к.с." << endl;
    }
};

class Car : public TransportVehicle
{
    int numberOfDoors; 

public:
    Car(int spd, int power, int doors) : TransportVehicle(spd, power), numberOfDoors(doors) {}

    void show() override 
    {
        cout << "Легковий автомобіль:" << endl;
        TransportVehicle::show();
        cout << "Кількість дверей: " << numberOfDoors << endl;
    }
};


class Truck : public TransportVehicle 
{
    int maxLoad; 

public:
    Truck(int spd, int power, int load) : TransportVehicle(spd, power), maxLoad(load) {}

    void show() override 
    {
        cout << "Вантажівка:" << endl;
        TransportVehicle::show();
        cout << "Максимальне навантаження: " << maxLoad << " кг" << endl;
    }
};


class Motorcycle : public TransportVehicle 
{
    string type; 

public:
    Motorcycle(int spd, int power, string t) : TransportVehicle(spd, power), type(t) {}

    void show() override
    {
        cout << "Мотоцикл:" << endl;
        TransportVehicle::show();
        cout << "Тип: " << type << endl;
    }
};

int main()
{
  
    SetConsoleCP(65001); 
    SetConsoleOutputCP(65001); 

    Car car(180, 150, 4);
    Truck truck(120, 400, 10000);
    Motorcycle motorcycle(220, 200, "Спортивний");

    car.show();
    cout << endl;
    truck.show();
    cout << endl;
    motorcycle.show();

    return 0;
}
