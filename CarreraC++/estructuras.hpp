#ifndef __EXAMPLES_ESTRUCTURAS_HPP__
#define __EXAMPLES_ESTRUCTURAS_HPP__

#include <iostream>

struct MyFstStruct
{
    int m_value;

    MyFstStruct() : m_value(0) {}
    MyFstStruct(int val) : m_value(val) {}
    void add_to_value(const int& val) { m_value += val; }
};

struct  Persona         //var independientes
{
    int dni;
    char nombre;
    unsigned edad;
};

struct Asd : public Persona {
    int a = dni;

};

union Vector2D      //var dependientes. Comparten memoria. Lo que hagamos en una de ellas afecta al resto
{
    struct { float x, y; }; // = floar x; float y;
    float   vector[2];
    Vector2D(const float& _x, const float& _y) : x(_x), y(_y) {}    //ctor
    Vector2D(const float vars[2])
    {
        vector[0] = vars[0];
        vector[1] = vars[1];
    }
};


enum MyEnum 
{
    HEY = 3,
    OH = 5, //ID -> 5
    LETS,
    GO  //7
};

enum class MyClassEnum      //claridad de código
{
    HEY,    //ID por si solo. No se pueden realizar comparaciones con enteros
    OH,
    LETS,
    GO
};

void foo(MyClassEnum val) {   //No int. Sólo le podemos pasar un valor definido en MyClassEnum +control
    switch (val) {
    case MyClassEnum::GO:
        break;
    default:
        break;
    }
}

//int a = MyEnum::GO;
//MyClassEnum b = MyClassEnum::GO; //No podemos hacer una tranformación implícita a entero. Tiene que ser del tipo MyClassEnum
//bool c = a == 3;
//bool c2 = b == 19; //Compilador Error. No hay operadores para comparar la expresión
//cout << a << endl; //OK
//cout << b << endl; //no podemos imprimirlo. No asociado ningún valor.Es un ID neutro
//bool res = b == MyClassEnum::LETS; //OK
//booll res = a == b //No podemos comparar enum con enumClass


void struct_example()
{
    MyFstStruct s(10);
    s.m_value = 20;

    Persona p;
    p.dni = 45354354;
    p.edad = 25;

    std::cout << "MyFstStruc value" << std::endl;
    std::cout << s.m_value << std::endl;
    std::cout << "MyFstStruc add 10 to value" << std::endl;
    s.add_to_value(10);
    std::cout << s.m_value << std::endl;

}



void union_example()
{
    struct TestStruct       // 4 floats
    {
        float x, y;
        float vector[2];
    };
    std::cout << "TestStruct size : " << sizeof(TestStruct) << std::endl; // ocupa el doble -> = dir memoria -> 4 floats
    std::cout << "Vector2D   size : " << sizeof(Vector2D) << std::endl; // 2 floats x y
    Vector2D u1(10, 10);//build by x y constructor
    Vector2D u2({ 50, 50 }); //build by array constructor
    std::cout << "Union access by xy   : " << u1.x << ", " << u1.y << std::endl;
    std::cout << "Union access by array: " << u1.vector[0] << ", " << u1.vector[1] << std::endl;
    std::cout << "Union access u1.vector = u2.vector by array: " << std::endl;
    u1.vector[0] = u2.vector[0];
    u1.vector[1] = u2.vector[1];
    std::cout << "Union access by xy   : " << u1.x << ", " << u1.y << std::endl; //50  = pos memoria
}


void all_structures_examples()
{
    std::cout << "Struct example: " << std::endl;
    struct_example();
    std::cout << "Union example: " << std::endl;
    union_example();
}

#endif //EXAMPLES_ESTRUCTURAS_HPP