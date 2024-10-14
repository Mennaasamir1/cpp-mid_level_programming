#include <iostream>
using namespace std;

/**
 * struct MyDog - a dog's basic info
 * @name: name of dog.
 * @owner: name of the dog's owner.
 * 
 * Description: this is a struct that represents a dog.
 */

struct MyDog
{
    string name;
    string Owner;
};

enum MyDogInf {age = 5, id = 12456};

int main(void)
{
    MyDog MyDog1;
    MyDogInf age = MyDogInf::age;
    MyDogInf id = MyDogInf::id;

    cout << "Name of dog: " << MyDog1.name << endl;
    cin >> MyDog1.name;


    cout << "Owner: " << MyDog1.Owner << endl;
    cin >> MyDog1.Owner;

    cout << "Dog information:" << endl;
    cout << "Age: " << age << " years old" << endl;
    cout << "id: " << id << endl;

}