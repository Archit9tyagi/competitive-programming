#include<iostream>
using namespace std;

class Player
{
private:
    string name;

public:
    void setName(string n);
    void display();
};

void Player::setName(string n)
{
    name = n;
}

void Player::display()
{
    cout << name << endl;
}

int main()
{
    Player p1;
    p1.setName("Virat");
    p1.display();
}