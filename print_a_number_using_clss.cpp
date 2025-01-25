#include<iostream>
using namespace std;
class a{
    int a,b;
    public:
    void get_data(int x,int y){
        a = x;
        b = y;
    }
    void dis(){
        cout<<"a="<<a;
        cout<<"b = "<<b;
    }
};
int main(){
    a A;
    A.get_data(2,5);
    A.dis();
}
