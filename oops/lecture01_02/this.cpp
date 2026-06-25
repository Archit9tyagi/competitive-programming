#include <iostream>
using namespace std;

class Player
{
private:
    string name;
    int age;

public:
    Player(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
    }
};

int main()
{
    Player p1("Virat", 35);
    p1.display();

    return 0;
}