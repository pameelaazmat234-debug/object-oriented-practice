#include <iostream>
using namespace std;

class car{
    private:
        string carBrand;
        string carModel;
        double carPrice;
    public:
    car(string brand, string model, double price)
    {
        carBrand = brand;
        carModel = model;
        carPrice = price;
    }
    void display()
    {
        cout << "Car brand Is: " << carBrand << endl;
        cout << "Car Model Is: " << carModel << endl;
        cout << "Car Price is: " << carPrice << endl;
    }
};

int main()
{
    car obj1("hundda civic", "blue", 90000);
    obj1.display();
    
}