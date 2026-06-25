#include <iostream>
using namespace std;

class Player
{
private:
    string name;
    int age;
    int score;

public:
    // Default Constructor
    Player()
    {
        name = "Unknown";
        age = 0;
        score = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Player(string n, int a, int s)
    {
        name = n;
        age = a;
        score = s;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Inline Constructor
    Player(int s)
    {
        score = s;
        cout << "Inline Constructor Called" << endl;
    }

    // Copy Constructor
    Player(Player &p)
    {
        name = p.name;
        age = p.age;
        score = p.score;
        cout << "Copy Constructor Called" << endl;
    }

    // Display Function
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Score: " << score << endl;
    }

    // Destructor
    ~Player()
    {
        cout << "Destructor Called for " << name << endl;
    }
};

int main()
{
    // Default Constructor
    Player p1;
    p1.display();

    cout << endl;

    // Parameterized Constructor
    Player p2("Virat", 35, 100);
    p2.display();

    cout << endl;

    // Inline Constructor
    Player p3(85);
    p3.display();

    cout << endl;

    // Copy Constructor
    Player p4 = p2;
    p4.display();

    return 0;
}