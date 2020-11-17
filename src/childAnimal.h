#include <iostream>
#include "animal.h"

using namespace std;

class Dog : public Mammal
{
private:
    string _owner;

public:
    Dog() : Mammal()
    {
        _owner = "Unknown_Owner";
       
    }

    Dog(string n, COLOR c, string owner) : Mammal(n, c)
    {
        _owner = owner;

      
    }

    ~Dog()
    {
       
    }

    void speak();
    void move();
    void eat();
};

class Cat : public Mammal
{
private:
    string _owner;

public:
    Cat() : Mammal()
    {
        _owner = "Unknown_Owner";
   
    }

    Cat(string n, COLOR c, string owner) : Mammal(n, c)
    {
        _owner = owner;
   
    }

    ~Cat()
    {
     
    }

    void speak();
    void move();
    void eat();
};

class Lion : public Mammal
{
private:
    string _owner;

public:
    Lion() : Mammal()
    {
        _owner = "Unknown_Owner";
       
    }

    Lion(string n, COLOR c, string owner) : Mammal(n, c)
    {
        _owner = owner;
       
    }

    ~Lion()
    {
       
    }

    void speak();
    void move();
    void eat();
};