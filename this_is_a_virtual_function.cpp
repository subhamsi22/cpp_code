// make a cpp code for virtual function 
#include<iostream>
using namespace std;
class animal {
    public:
    virtual void bark(){
        cout<<"this is a animal bark "<<endl;
    }
};
class dog : public animal{
    public:
    void bark(){
        cout<<"this is a dog bark"<<endl;
    }
};
class cat : public animal{
    public:
    void bark(){
        cout<<"this is a cat meow"<<endl;
    }
};
int main(){
    animal* animalptr;
    dog d;
    cat c;
    animalptr = &d;
    animalptr->bark();
    animalptr = &c;
    animalptr->bark();
}
