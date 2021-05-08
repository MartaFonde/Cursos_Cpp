#include <iostream>
//#include "memoria.hpp"
//#include "clases.hpp"
//#include "herencia.hpp"
//
//int main() {
//    std::cout << "Memory management examples" << std::endl;
//    all_memory_examples();
//    std::cout << "Structures management examples" << std::endl;
//    all_structures_examples();
//    std::cout << "Class management examples" << std::endl;
//    class_example();
//    std::cout << "Inheritance examples" << std::endl;
//    LimitRunApp().run_test_app();
//    std::cout << "Friend example" << std::endl;
//    test_friends();
//    std::cout << "Polymorphism example" << std::endl;
//    test_polymorphism();
//    return 0;
//}

union U1
{
    int a;
    int b;

};

union U2
{
    U1   u;
    int  i;
};

int main() {
    U1 u1{ 10 };
    u1.a = 100;
    u1.b = u1.a * 10;
    U2 u2{ u1 };
    u2.i /= 10;
    std::cout << u2.i << ", " << u2.u.a << ", " << u2.u.b;
}
//class Base1
//{
//public:
//    Base1() { std::cout << " Base1's constructor" << std::endl; }
//};
//
//class Base2
//{
//public:
//    Base2() { std::cout << " Base2's constructor" << std::endl; }
//};
//
//class Derived : public Base1, public Base2
//{
//    
//public:
//    int na;
//    Derived() { std::cout << " Derived's constructor" << std::endl; }
//};

//int main()
//{
//    Derived* d = new Derived;
//    return 0;
//}

//class Base1
//{
//public:
//    ~Base1() { std::cout << " Base1's destructor" << std::endl; }
//};
//
//class Base2
//{
//public:
//    ~Base2() { std::cout << " Base2's destructor" << std::endl; }
//};
//
//class Derived : public Base1, public Base2
//{
//public:
//    ~Derived() { std::cout << " Derived's destructor" << std::endl; }
//};
//
//int main()
//{
//    Derived d;
//    //return 0;
//    int* A = new int(10);
//    std::cout << A;
//}