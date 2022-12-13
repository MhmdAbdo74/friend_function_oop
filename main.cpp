#include <iostream>
using namespace std;
class classB;
class classA {
public:
classA() : numA(12) {}

private:
int numA;
  friend int add (classA,classB);

};
class classB{
public:
classB() :numB(13){}
private:
int numB;
    friend int add (classA,classB);
};
int add(classA obj1,classB obj2){
return (obj1.numA + obj2.numB);
}
int main() {
    classA object1;
    classB object2;
cout<<"sum "<< add(object1,object2);
}
