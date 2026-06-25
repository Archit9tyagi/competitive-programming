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

    // Parameterized constructor
    Player(string n, int a, int s)
    {
        name = n;
        age = a;
        score = s;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Setters
    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        age = a;
    }

    void setScore(int s)
    {
        score = s;
    }

    // Getters
    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    int getScore()
    {
        return score;
    }

    // Display
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Score: " << score << endl;
    }

    // Destructor
    ~Player()
    {
        cout << "Player " << name << " object destroyed" << endl;
    }
};

int main()
{
    // Dynamic object using default constructor
    Player *p1 = new Player();

    p1->setName("Virat");
    p1->setAge(35);
    p1->setScore(100);

    cout << "Player 1 Details:" << endl;
    p1->display();

    cout << endl;

    // Dynamic object using parameterized constructor
    Player *p2 = new Player("Rohit", 37, 85);

    cout << "Player 2 Details:" << endl;
    p2->display();

    cout << endl;

    // Free memory manually
    delete p1;
    delete p2;

    return 0;
}