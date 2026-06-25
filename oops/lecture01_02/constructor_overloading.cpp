#include <iostream>
using namespace std;

class Player
{
private:
    string name;
    int age;
    int score;

public:
    // Default constructor
    Player()
    {
        name = "Unknown";
        age = 0;
        score = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Constructor with 1 parameter
    Player(string n)
    {
        name = n;
        age = 0;
        score = 0;
        cout << "1 Parameter Constructor Called" << endl;
    }

    // Constructor with 2 parameters
    Player(string n, int a)
    {
        name = n;
        age = a;
        score = 0;
        cout << "2 Parameter Constructor Called" << endl;
    }

    // Constructor with 3 parameters
    Player(string n, int a, int s)
    {
        name = n;
        age = a;
        score = s;
        cout << "3 Parameter Constructor Called" << endl;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Score: " << score << endl;
    }

    ~Player()
    {
        cout << "Destructor Called for " << name << endl;
    }
};

int main()
{
    Player p1;
    cout << endl;

    Player p2("Virat");
    cout << endl;

    Player p3("Rohit", 35);
    cout << endl;

    Player p4("Dhoni", 42, 95);
    cout << endl;

    p1.display();
    cout << endl;

    p2.display();
    cout << endl;

    p3.display();
    cout << endl;

    p4.display();

    return 0;
}