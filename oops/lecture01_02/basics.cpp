#include <iostream>
using namespace std;


class Player
{
    // access modifier default is private and others are public and protected:
private:
    string name;
    int age;
    int score;

protected:
    string team;

public:

    // default costructor
    Player()
    {
        name = "Unknown";
        age = 0;
        score = 0;
        team = "No Team";

        
    }
    // parameterised constructor
    Player(string n, int a, int s, string t)
    {
        name = n;
        age = a;
        score = s;
        team = t;
        
    }
    // setters and getters
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

    void setTeam(string t)
    {
        team = t;
    }

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

    string getTeam()
    {
        return team;
    }
    // display function if i want to access using object like player1.display()
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Score: " << score << endl;
        cout << "Team: " << team << endl;
    }
    // destructor
    ~Player()
    {
        cout << "Player "<<name<< " object destroyed" << endl;
    }
};


int main()
{
    Player p1;
    p1.setName("Virat");
    p1.setAge(35);
    p1.setScore(100);
    p1.setTeam("India");

    cout << "Player 1 Details:" << endl;
    p1.display();

    cout << endl;

    Player p2("Rohit", 37, 85, "India");

    cout << "Player 2 Details:" << endl;
    p2.display();

    cout<<"size of p1 is "<<sizeof(p1)<<endl<<"size of p2 is "<<sizeof(p2);
    cout<<endl;
    cout<<"Size of player class is "<<sizeof(Player)<<endl;


    return 0;
}