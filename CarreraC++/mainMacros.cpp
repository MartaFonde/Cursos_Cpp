//#define DEBUG true //WARNING: DEBUG manual defined, better using cmake
////#define DEBUG true  //"Hello world from release"
//
//#include <iostream>
//#include <string>
//#include "macros.hpp"
//
////macro define
//#define MY_FST_MACRO "Hello world"
//
//
////macro redefine
//#define MY_REDEFINED_MACRO(the_variable) #the_variable  
////a -> "a"
////MY_REDEFINED_MACRO(a); -> Ok. Usa 1a definición
//
////se redefine: (vigente la última)
//#define MY_REDEFINED_MACRO(the_variable, other_variable) (#the_variable#other_variable) 
////MY_REDEFINED_MACRO(a,a); "aa"
//
////# operator
////# -> crea string con el nombre de la variable
////## -> concatena 
//#define INIT_10(a) static int my_var_##a = 10;  
//
//INIT_10(a) // = static int my_var_a = 10
//INIT_10(b)
//
////undef
//#undef INIT_10
//
////INIT_10(c) // ERROR: this will now work, since we just did undef it in the previours line
//
////macros are non-recursive
////#define FAC(n) (n>1)?n*FAC(n-1):1  //código no definido cuando usamos la expresión
//
//#define SQUARE(x) x*x
////SQUARE(5+2) -> x*x -> x = 5+2 -> 5+2*5+2
//#define SQUARE(x) ((x)*(x))
////(5+2)*(5+2)
//
//int main() {
//
//    //macro define
//    std::cout << "________DEFINE________" << std::endl;
//    std::cout << "MY_FST_MACRO  = " << MY_FST_MACRO << std::endl; //Hello World
//
//    int a = 19;
//    std::cout << MY_REDEFINED_MACRO(a); //imprime a 
//
//
//    std::cout << "________CONCAT________" << std::endl;
//    //macro concat
//    std::cout << "my_var_a = " << my_var_a << std::endl;    //my_var_a = 10
//    std::cout << "my_var_b = " << my_var_b << std::endl;    //my_var_b = 10
//
//
//    //std::cout << "________REDEFINE________" << std::endl;
//    ////macro redefinition
//    ////std::cout << MY_REDEFINED_MACRO(10) << std::endl; doesnt work, is redifined
//    //std::cout << "MY_REDEFINED_MACRO(10, 10) = " << MY_REDEFINED_MACRO(10, 10) << std::endl;
//
//
//    //macro recursive error, doesn't work
//    //std::cout << FAC(10) << std::endl;
//
//
//    std::cout << "________SCOPE________" << std::endl;
//    //fun with macros...what is the output
//    std::cout << "SQUARE(10)  = " << SQUARE(10) << std::endl; //10*10 = 100
//    std::cout << "SQUARE(5+2) = " << SQUARE(5 + 2) << std::endl; //7*7 = 49? or 5+2*5+2?
//
//    // MY_VAR_MACRO definida en header macros.hpp
//    std::cout << "________CONDITIONAL________" << std::endl;
//    //macro conditional compilation
//    std::cout << "MY_VAR_MACRO  = " << MY_VAR_MACRO << std::endl;
//
//    std::cout << "________UTILS________" << std::endl;
//    //macro utils. Generadas automáticamente
//    for (auto& s : { __DATE__, __TIME__, __FILE__, std::to_string(__LINE__).c_str() }) {
//        std::cout << s << std::endl;
//    }
//    return 0;
//}