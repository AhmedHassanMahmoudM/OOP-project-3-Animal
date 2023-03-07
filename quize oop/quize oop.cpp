
// quize oop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Animal {
public:
    int age;
    string gender;
    string color;
    // Animal(){}
    void set_age(int a) {
        age = a;
    }
    int get_age() {
        return age;
    }
    void set_gender(string g) {
        gender = g;
    }
    string get_gender() {
        return gender;
    }
    void set_color(string c) {
        color = c;
    }
    string get_color() {
        return color;
    }
    // pure virtual function:
    virtual void display() = 0;
    virtual void sound() = 0;
};
class Cat :public Animal {
public:
    void display() {
        cout << "age = " << age << " " << "gender = " << gender << " " << "color = " << color << endl;
    }
    void sound() {
        cout << "the sound of the cat" << endl;
    }
};
class Dog :public Animal {
public:
    void display() {
        cout << "age = " << age << " " << "gender = " << gender << " " << "color = " << color << endl;
    }
    void sound() {
        cout << "the sound of the dogs" << endl;
    }
};
int main()
{
   // Animal* Animal_pte;
    Dog d1;
   // Animal_pte = &d1;
    d1.set_age(12);
    d1.set_color("red");
    d1.set_gender("*****");
    d1.sound();
    d1.display();

    cout << endl;

    Cat c1;
    c1.set_color("blue");
    c1.set_age(14);
    c1.set_gender("#####");
    c1.sound();
    c1.display(); 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
