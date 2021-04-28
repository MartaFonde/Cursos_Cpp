//#include <iostream>
//#include <bitset>
//
//using namespace std;
//
//int main()
//{
//    /***
//    Operadores logicos
//    ***/
//    int bit23 = 0x00800000;
//
//    unsigned int data = -1;
//    signed int signed_data = -1;
//
//    cout << "Bit23 = " << std::bitset<32>(bit23) << endl;
//    cout << "Not Bit23 = " << std::bitset<32>(~bit23) << endl;
//    cout << "data = " << std::bitset<32>(data) << endl;
//    cout << "Signed data = " << std::bitset<32>(signed_data) << endl;
//    cout << "data and Bit23 = " << std::bitset<32>(data & bit23) << endl;
//    cout << "data or Bit23 = " << std::bitset<32>(0 | bit23) << endl;
//    cout << "Bit23 to bit20 = " << std::bitset<32>(0 | bit23 >> 3) << endl; //corrimiento de bits
//    cout << "Bit23 to bit25 = " << std::bitset<32>(0 | bit23 << 2) << endl;
//
//    /***
//    Conversion de numeros
//    ***/
//    float f{ 3.4f };
//    int i = static_cast<int>(f);    
//    //int b = reinterpret_cast<int>(f) ��NON!!
//    //int y=(float)x == reinterpret_cast
//
//    /***
//    Nuevos tipos
//    ***/
//
//    typedef unsigned long long int ULLONG;  //crea un nuevo tipo
//    using ullong = unsigned long long int; //Recomendada
//    //using crea un alias. Evita tama�o, creaci�n nuevo tipo, problemas... 
//
//    ULLONG mi_variable;
//
//    getchar();
//
//    return 0;
//}