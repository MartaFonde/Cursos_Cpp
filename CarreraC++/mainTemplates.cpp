//#include <iostream>
//#include <typeinfo>
//#include <functional>
//#include <memory>
//#include "listaEnlazadaGenerica_templates.hpp"
//#include "singleton_templates.hpp"
//
////Templates: Generar código genérico que no sea dependiente de tipos o valores.
//
////template basico
//template<class T>
//void foo() {
//    std::cout << typeid(T).name() << std::endl;
//}
//
////(en main)
////foo();    //error. Requiere de un id de tipo
////foo<int>();
//
////uso del parametro del template
//template<class T>
//T&& bar(const T& var) { 
//    T ret = var;  //crea una copia del valor que le pasamos   
//    return std::move(ret); //lo devuelve como referencia
//}
//
////especialización -- para un tipo específico queremos que el comportamiento sea diferente
//template<>
//float&& bar(const float& var) {
//    std::cout << "Called bar template specialization for float" << std::endl;
//    float ret = var + 0.5f;
//    return std::move(ret);
//}
//
////templating default arguments
//template <class T = int>    //por defecto trabaja con int. Se podrían pasar floats
//T&& add(const T& a, const T& b)     //los dos valores deben de ser del mismo tipo
//{
//    return std::move(a + b);
//}
////add(10, 10) };
////add(5.5f, 5.5f) };
//
//
////templating nontype objects
//template <unsigned int N = 10> //dependiente del valor entero N. Por defecto 10
//std::function<int(const int& n)> build_add_function() {
//    return [](const int& n)->int {
//        return n + N;
//    };
//}
//
//
//
//int main() {
//    std::cout << "Types from template foo" << std::endl;
//    foo<int>(); //imprime id de tipo
//    foo<float>();
//    foo<double>();
//    foo<char>();
//    foo<char*>();
//    std::cout << std::endl;
//
//    std::cout << "Simple template bar" << std::endl;
//    int a = 10;
//    int i = bar<int>(a);
//    std::cout << "i:" << i << " a:" << a << std::endl;
//    std::cout << std::endl;
//
//    std::cout << "Simple specialized(float) template bar" << std::endl;
//    float aa = 10.f;
//    float ii = bar<float>(aa);  //si no hay template especializada usa la genérica
//    //float ii = bar(aa); //funciona igual. Más claridad si especificamos
//    std::cout << "ii:" << ii << " aa:" << aa << std::endl;
//    std::cout << std::endl;
//
//    std::cout << "Simple default argument template add" << std::endl;
//    int added_n{ add(10, 10) };
//    std::cout << added_n << std::endl;
//    std::cout << std::endl;
//
//    std::cout << "Simple default argument template add using other type" << std::endl;
//    float added_n2{ add<float>(5.5f, 5.5f) };
//    std::cout << added_n2 << std::endl;
//    std::cout << std::endl;
//
//    std::cout << "Function factory template using non-typed argument" << std::endl;
//    auto f = build_add_function();  //10
//    auto ff = build_add_function<20>();
//    int v{ f(1) }; //11
//    int vv{ ff(1) };    //21
//    std::cout << v << " <-> " << vv << std::endl;
//
//
//    std::cout << "Templated list example" << std::endl;
//    MyList<int> l;
//    for (auto& n : { 9,8,7,6,5,4,3,2,1 }) {
//        l.append(n);
//    }
//    std::cout << l << std::endl;
//    
//    //MyClass::getInstance();
//
//    return 0;
//}