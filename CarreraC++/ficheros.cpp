//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    cout << "introduce un numerito ";
//    int x{};
//    cin >> x;
//    cout << "El numero introducido es: " << x << endl;
//
//    //char c; //introducimos 65
//    //cin >> c;
//    //cout << "El numero introducido es: " << c << endl;  //char solo coge el 1er carácter. No controla la conversión directa
//
//    auto file = "example.txt"; //auto coge el tipo a partir del valor que tiene a la derecha
//    //sería igual que const char* file = "example.txt"; puntero a dir de memoria con cadena cte 
//
//    ofstream output_file;
//    output_file.open(file, ios::trunc); //trunc -> si no existe lo crea
//    if (!output_file.is_open()) //comprobamos si está abierto
//    {
//        cout << "ERROR the file is not open" << endl;
//        return 0; // finish the execution
//    }
//
//    output_file << "This is an example\n This is other line\n";
//    output_file << "\tThe third and the last line\n";
//
//    output_file.close();    //escribe al cerrar
//
//    ifstream input_file;
//    input_file.open(file);
//    if (!input_file.is_open())
//    {
//        cout << "Unable to open file" << endl;
//        return 0;
//    }
//
//    string line;
//
//    while (getline(input_file, line)) //mientras que haya lineas en el fich asigna a line
//    {
//        cout << line << endl;
//    }
//
//    input_file.close();
//
//    getchar();
//
//    fstream file_stream;
//
//    /*ios::in - input
//    ios::out - output
//    ios::binary - binary
//    ios::ate - final del fichero
//    ios::app - para añadir datos
//    ios::trunc - truncar el fichero*/
//    string binary_text("This is a binary example");
//
//    auto binaryfile = "binary.bin";
//    file_stream.open(binaryfile, ios::out | ios::in | ios::binary | ios::trunc); 
//    if (!file_stream.is_open())
//    {
//        cout << "ups" << endl;
//        getchar();
//        return 0;
//    }
//
//    file_stream.write(binary_text.c_str(), binary_text.size());
//    cout << "binary text = " << binary_text.c_str() << endl;
//    double d = 3.4;
//    file_stream.write(reinterpret_cast<char*>(&d), sizeof(d)); //no static_cast porque no es una conversión directa
//    file_stream.seekg(0, file_stream.beg);  //vamos a una dirección del fich. Posición 0
//
//    char* buffer = new char[binary_text.size() + 1];
//    buffer[binary_text.size()] = '\0'; // '\0' para no stackoverflow
//    //memset(buffer, '\0', binary_text.size() + 1);
//
//    file_stream.read(buffer, binary_text.size());
//    double read_double = 0;
//    file_stream.read(reinterpret_cast<char*>(&read_double), sizeof(double));
//    file_stream.close();
//
//    cout << buffer << " - " << read_double << endl;
//
//    getchar();
//
//}