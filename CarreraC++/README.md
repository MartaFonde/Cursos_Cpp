[CARRERA: PROGRAMADOR C++ ](https://openwebinars.net/carreras/programador-cpp/)

OpenWebinars 

1.	INTRODUCCI�N A LA PROGRAMACI�N
2.	INTRODUCCI�N A LAS ESTRUCTURAS DE DATOS
3.	SOLID Y PATRONES DE DISE�O
4.	INTRODUCCI�N A C++
5.	CURSO DE GIT
6.	PROGRAMACI�N ORIENTADA A OBJETOS CON C++
7.	PROGRAMACI�N GEN�RICA Y CONCURRENTE
8.	PATRONES E INTERFACES EN C++


***

### 1.	INTRODUCCI�N A LA PROGRAMACI�N ###

**20/04/2021**

-	Fundamentos de la programaci�n estructurada. 
-	Ciclo de desarrollo de una aplicaci�n: an�lisis, dise�o y codificaci�n.

**21/04/2021**

-	Dise�o de algoritmos con pseudoc�digo. 
-	Entorno de trabajo: PseInt, para escribir pseudoc�digo y ejecutarlo.
-	Introducci�n a los lenguajes de programaci�n. Traductores.
    - Compiladores (ejemplo con C++)
    - Int�rpretes (ejemplo con Python)
    - M�quina Virtual (ejemplo con Java)

El curso incluye varias hojas de ejercicios para realizar con pseudoc�digo e 
introducirse en la pr�ctica de entrada y salida de informaci�n, estructuras 
alternativas y repetitivas, arrays y funciones y procedimientos. 
Dado que son ejercicios muy sencillos, no los har� pero subir� los enunciados.

---
### 2. INTRODUCCI�N A LAS ESTRUCTURAS DE DATOS ###

**22/04/2021**

Estructuras de datos en Java  

- An�lisis de algoritmos
    - C�mo medir la velocidad de un algoritmo --> An�lisis de las instrucciones del algoritmo en base a los datos con los que est� trabajando.
    - Notaci�n **Big O** o crecimiento de funciones: nos indica qu� tan r�pido es un algoritmo,   
    No tiene en cuenta los coeficientes (desviaciones), s�lo el factor dominante (elemento que m�s crece).

- Estructuras de datos
    - Es una forma de organizar una colecci�n de datos en una computadora para que puedan ser utilizados de manera eficiente.  
    Colecci�n de datos relacionados y preparados que permite ciertas operaciones para ese conjunto, permiti�ndonos poder hacer algoritmos de una forma m�s eficiente y segura.  
        - Arrays, listas ligadas, colas, pilas, mont�culos.

- Datos primitivos y compuestos
    - Primitivos: Booleanos, caracteres, enteros, n�meros de punto flotante, punteros.
    - Compuestos: Registros u objetos, string, array 
          
- Tipos de datos gen�ricos   
    [Lista gen�rica](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/2.EstructurasDatos/ListaGenerica.txt)         
    [Pareja <K,V>](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/2.EstructurasDatos/Pareja.txt)
     
- Tipos de datos abstractos (TAD � ADT)   
    Modelo matem�tico para definir tipos de datos, con un comportamiento esperado. En Java normalmente se escriben en interfaces.

    Ejemplos:  mont�culo, el �rbol, o la pila, ... 
    Seg�n como se implementen, podr�n tener un coste mayor o menor.


**23/04/2021**

  - Arrays est�ticos 
    - Almacena de forma contigua los valores en la memoria.
    - Rellena todas las posiciones con un valor por defecto (int con 0, objetos con null, ...) definidos por Java
             

-  Arrays din�micos (ArrayList)
    - Son un envoltorio a un array est�tico, y hace operaciones sobre �ste para modificar su tama�o de forma �ptima.     
      Internamente son una serie de operaciones para crear y borrar (copia) arrays est�ticos en base a nuestras operaciones       
          
  
- Listas ligadas 
    - Es una forma de crear una lista con los datos, de tal manera que un dato est� enlazado con el siguiente. 
    - Datos no contiguos. Guarda dato y la referencia (enlace) al siguiente en una posici�n de memoria.
    - Clase Nodo gen�rica con Dato y Nodo al Siguiente
    - Nodo principio apuntando a Nodo A y un final apuntando al Nodo final (Siguiente = Null)
 
    - Lista ligada doble
        - Cada Nodo tiene dos enlaces, al siguiente y al anterior.
        - No necesario Nodo Anterior y Actual para operar.           
        En Java -> clase LinkedList    


- Pilas (Stack)
    - LIFO (Last in, Last out)
    - Implementar acci�n deshacer (apilando acciones) o b�squeda en profundidad 
    - Guardar llamadas de las funciones recursivas en el orden en que se deben ejecutar.


- Colas(Queue)
    - FIFO (First in, First Out)
    - Transferir datos entre procesos as�ncronos, cola de entrada para servidor, b�squeda de anchura...

- Mont�culos
    - Retiramos valores de forma ordenada (el array no debe estar necesariamente ordenado) con un coste bajo
    - Es un tipo de �rbol binario, tiene un nodo y este dos hijos (puede ser altura n)
    - Dos tipos: max (orden mayor a menor, padre > hijos) y min (p < h)

**Bibliograf�a recomendada:**
- SedGewick R., Wayne K. Algorithms     
- Lewis, Chase. Java Software Structures. Designing and Using Data Structures
- Bhargava, A. Grokking algorithms

---

**24/04/2021**
### 3. SOLID Y PATRONES DE DISE�O ###

En C#

Objetivos curso: Conocer buenas pr�cticas de programaci�n, generar c�digo escalable, limpio y de calidad y c�digo m�s mantenible  
Dise�o orientado a objetos

Problemas dise�o app: demasiadas funcionalidades sin relaci�n en una clase (poco encapsulado), demasiada interrelaci�n/dependencia entre clases (estrechamente acopladas), c�digo duplicado  
Soluciones: elecci�n arquitectura, principios de dise�o, patrones de dise�o  
Objetivo: Disminuir costes de mantenimiento. Poder a�adir/modificar funcionalidades m�s f�cilmente. 

- **SOLID** -> Principios base a seguir antes de proponer una arquitectura de software. C�digo escalable a un futuro. Alta cohesi�n y bajo acoplamiento (menor dependencia, mejor especificaci�n prop�sitos sistema)  
Alta cohesi�n: Informaci�n de una clase coherente, estar relacionada con la clase  
Bajo acoplamiento: Clases menos ligadas entre si. En caso de modificaci�n, menor repercusi�n posible en el resto. + Reutilizaci�n - Dependencia 
     
    - **S**: Single Responsability Principle ([SRP](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/SRP.txt))       
         
    - **O**: Open/Closed Principle ([OCP](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/OPC.txt))
        
    - **L**: Liskov substitution Principle ([LSP](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/LSP.txt))       
                 
    - **I**: Interface Segregation Principle ([ISP](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/ISP.txt))
       
    - **D**: Dependency Inversion Principle ([DIP](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/DIP.txt))       
        
    Objetivo ppios SOLID: C�digo ordenado, legible y f�cil de mantener. El c�digo puede ser que aumente de tama�o, pero ser� de mejor calidad.
    Respetando estos principios se han desarrollado los patrones creacionales, estructurales y de comportamiento. 


- Principios de dise�o de software
    - You Aren't Gonna Need It (YAGNI) -Haz la cosa m�s simple que pueda funcionar-, Keep it simple, Stupid! (KISS), Don't Repeat Yourself (DRY) / Duplication Is Evil (DIE)
    - Ley de Demeter -> "Habla solo con tus amigos cercanos. No hables con extra�os." Un m�todo de un objeto s�lo puede llamar a m�todos del propio objeto, sus argumentos, objetos del m�todo y propiedades del objeto.
        - Mecanismo de detecci�n de acoplamiento (problema de arquitectura). Encapsulamiento clases. 

    - MoSCoW: t�cnica de priorizaci�n de requisitos basada en el hecho de que aunque todos los requisitos se consideren importantes es fundamental destacar aquellos que permiten darle un mayor valor al sistema, lo que permite enfocar los trabajos de manera m�s eficiente  
         M(Must) S(Should) C(Could) W(Won�t)  -> Esta clasificaci�n puede ser modificada durante el proceso de desarrollo y definirse, en el caso de desarrollos iterativos incrementales, prioridades a nivel de iteraci�n.

- **Patrones de dise�o**: forma reutilizable de resolver un problema com�n (estructura de clases)  
Ahorro de tiempo. Validez de c�digo. Uso de lenguaje com�n. Aplicaciones robustas, facilitan mantenimiento. Nos ayudan a cumplir muchos ppios SOLID, control de cohesi�n, acoplamiento, reutilizar c�digo...   


**Bibliograf�a**: Design Patterns. Gang of Four    


Objetivos: cat�logos de elementos reusables, evitar la reiteraci�n en la b�squeda de soluciones a problemas ya conocidos y solucionados, vocabulario com�n entre dise�adores, Estandarizar el modo en que se realiza el dise�o, facilitar el aprendizaje  
No -> Imponer ciertas alternativas de dise�o frente a otras.


1. **Patrones creacionales** -> Creaci�n de instancia. Encapsular y extraer dicha creaci�n.  
    -  [Abstract Factory](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesCreacionales/AbstractFactory.gif): Interfaz para crear familias de objetos relacionados o dependientes sin especificar sus clases concretas (sin especificarse directamente).                                

    -  [Builder](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesCreacionales/Builder.gif): Separa la construcci�n de un objeto complejo de su representaci�n para que el mismo proceso de construcci�n pueda crear diferentes representaciones.                  

    - [Factory Method](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesCreacionales/Factory.gif): Define una interfaz para crear un objeto, pero deja que las subclases decidan de qu� clase crear una instancia. Factory Method permite que una clase difiera la creaci�n de instancias a subclases.
      Flexibilidad para crear diferentes objetos. Va a haber una clase abstracta que puede proporcionar un obj predeterminado, pero cada subclase va a crear una instancia de una versi�n extendida del obj.                           
         
    - [Prototype](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesCreacionales/Prototype.gif): Especifica el tipo de objetos para crear utilizando una instancia protot�pica (obj existentes del mismo tipo) y crea nuevos objetos copiando este prototipo.          
 
    - [Singleton](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesCreacionales/Singleton.gif): Se asegura de que una clase tenga solo una instancia y proporciona un punto global de acceso a ella.             


**25/04/2021**  

2. **Patrones estructurales** -> C�mo utilizar estructuras de datos complejas a partir de datos m�s simples. Crear interconexi�n entre objetos y que �stas relaciones no se vean afectadas por cambios en los requisitos del prog.
    - [Adapter](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesEstructurales/adapter.gif): Convierte la interfaz de una clase en otra interfaz que los clientes esperan. El Adapter permite que las clases trabajen juntas y que no podr�an hacerlo de otra manera debido a interfaces incompatibles.    
    
    - [Bridge](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesEstructurales/bridge.gif): Desacopla una abstracci�n de su implementaci�n para que los dos puedan variar independientemente.

    - [Composite](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesEstructurales/composite.gif): Compone los objetos en estructuras de �rbol para representar jerarqu�as enteras. Composite permite a los clientes tratar objetos individuales y composiciones de objetos de manera uniforme.

    - [Decorator](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesEstructurales/decorator.gif): Asigna responsabilidades adicionales a un objeto din�mica mente. Ofrecen una alternativa flexible a las subclases para extender la funcionalidad.

    - [Facade](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesEstructurales/facade.gif): Proporciona una interfaz unificada a un conjunto de interfaces en un subsistema. Fa�ade define una interfaz de nivel superior que hace que el subsistema sea m�s f�cil de usar.

    - [Flyweight](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesEstructurales/flyweight.gif): Soporta una gran cantidad de objetos peque�os de manera eficiente.

     - [Proxy](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesEstructurales/proxy.gif): Proporciona un sustituto o un marcador de posici�n para que otro objeto controle el acceso a �l.

3. **Patrones de comportamiento** -> Especifican el comportamiento entre objetos del prog. Interacci�n y responsabilidades entre clases y objetos, y gesti�n de algoritmos que la encapsulan.
    -  [Chain of Responsability](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/chainResponsability.gif): Evita acoplar el remitente de una solicitud a su receptor, d�ndole a m�s de un objeto la oportunidad de manejar la solicitud. Encadena los objetos receptores y pasa la solicitud a lo largo de la cadena hasta que un objeto lo maneje.

    -  [Command](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/command.gif): Encapsula una solicitud como un objeto, lo que le permite parametrizar a los clientes con diferentes solicitudes, solicitudes de cola o de registro y admite operaciones que no se pueden deshacer.

    -  [Interpreter](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/interpreter.gif): Dado un lenguaje, define una representaci�n para su gram�tica junto con un int�rprete que usa la representaci�n para interpretar sentencias en el idioma.

    -  [Iterator](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/iterator.gif): Proporciona una forma de acceder a los elementos de un objeto agregado de forma secuencial sin exponer su representaci�n subyacente.

    -  [Mediator](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/mediator.gif): Define un objeto que encapsula c�mo interact�a un conjunto de objetos. El Mediator promueve el bajo acoplamiento evitando que los objetos se refieran entre s� expl�citamente, y le permite variar su interacci�n de forma independiente.
 
    -  [Memento](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/memento.gif): Sin violar la encapsulaci�n, captura y externaliza el estado interno de un objeto para que el objeto pueda restaurarse a este estado m�s adelante.

    -  [Observer](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/observer.gif): Define una dependencia de uno a muchos entre los objetos para que cuando un objeto cambie de estado, todos los objetos que dependan de �l sean notificados y actualizados autom�ticamente.

    -  [State](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/state.gif): Permite que un objeto altere su comportamiento cuando cambia su estado interno. El objeto aparecer� para cambiar su clase.
 
    -  [Strategy](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/strategy.gif): Define una familia de algoritmos, encapsula cada uno de ellos y los hace intercambiables entre s�. Strategy permite que el algoritmo var�e independientemente de los clientes que lo utilizan.

    -  [Template Method](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/templateMethod.gif): Define el esqueleto de un algoritmo en una operaci�n, aplazando algunos pasos a las subclases. Template Method permite a las subclases redefinir ciertos pasos de un algoritmo sin cambiar la estructura del algoritmo.

    -  [Visitor](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/visitor.gif): Representa una operaci�n a realizar en los elementos de una estructura de objeto. Visitor le permite definir una nueva operaci�n sin cambiar las clases de los elementos sobre los que opera.

- **Antipatrones de dise�o**  

[reposGithub](https://github.com/cdiazal/SOLID_Patterns)

***

**26/04/2021**
### 4. INTRODUCCI�N A C++ ###

- Alto rendimiento: 
  - Velocidad en ejecuci�n y uso eficiente de la memoria (RAM, registros, cach�, disco duro, ...)
  - Lenguaje compilado
  - Llamadas directas a SO y SDKs
  - M�ltiples par�metros de optimizaci�n
  - Programaci�n gen�rica: Templates
  - Acceso directo a la memoria. Control de gesti�n de la memoria.
  - Integraci�n directa con el lenguaje ensamblador 
- Multiplataforma. Compilaci�n por plataforma -> adaptaci�n con cambio de algunos par�metros (llamadas SO)
- Depuraci�n complicada (al tener control de SO, memoria, ..., dificultad compiladores para mostrar errores)
 
**Generaci�n ejecutable**
- Preprocesador -> Interpreta directivas # (Macros, includes, ...) y genera c�digo fuente     
     #include copia y pega en cualquier parte del c�digo lo que tenga .hpp (p.ej } )
        int main(){
        #include "llave.hpp"
- Compilador -> Generaci�n de c�digo objeto (binario)   
    \>g++ -c -Wall holamundo.cpp --> holamundo.o    
- Linker -> Combinaci�n de los m�dulos generados por compilador y m�dulos externos (librer�as) para generar un ejecutable o librer�a  
    \>g++ -o hola.exe holamundo.o


**Tipos b�sicos**: bool, char, wide char, int, double, float, enum, int the_array[]  
Punteros: int *pEntero = &entero  
S�lo los char tienen tama�o fijo (1byte). El resto depende de la implementaci�n (compilaci�n, plataforma, arquitectura, ... )

**27/04/2021**

Modificadores:
- Unsigned: el valor no puede ser negativo.
- Signed: Sirve �nicamente para char (por defecto el resto ya son).
- Short: Valor entero que es mayor o igual que char y menor o igual a int.
- Long: Valor entero que es mayor o igual a int.
- Const: Variables que no pueden cambiar su valor durante la ejecuci�n del programa.
- Static: Variables que mantienen su valor aunque su scope haya acabado.
- Volatile: Herramienta que le dice al compilador que la variable puede cambiar su valor durante la ejecuci�n (No puede ser optimizado).

Scope: Vida que tiene una variable. 
El scope de cualquier variable es dependiente del bloque en el que se encuentre.

    int a = 5;
    {
        int b = 4;
        a = b   //ok
    }
    a = b   //falla: b no est� declarada

Conversiones:
- int a = static_cast<int>(5.54);  
- const_cast -> Quitar/a�adir el modificador const a una variable (!!puede dar un valor indefinido si la variable original era const)  
- dynamic_cast<tipo>() -> Polimorfismo
- reinterpret_cast<tipo>() [ == int y=(int)x] -> Conversi�n a un tipo cualquiera (= valor reconvirtiendo si tipos = tama�o)

Creaci�n de un tipo (using � typedef): 
using ulong = unsigned long int;   
typedef unsigned long int ulong;

Mapa de bits -> #include <bitset>
~ , & , | , ^ , >> , <<


**28/04/2021**

**Estructuras de control**:
if/else , switch, ternarias  
bucles  
ficheros

**Funciones**  
- Par�metros y valores de retorno.   

        void ejemplo (int valor,
              int& referencia,
              int *puntero);
              
        void ejemplo2(const int valor,
                      const int& referencia,
                      const int *puntero);

        void ejemplo3(int fijo,
                      int defecto=0);


- Sobrecarga y static  
El modificador static indica que la variable no est� asociada al scope y se mantendr� durante toda la ejecuci�n del programa.

- Punteros a funciones

C++03 (tipo de retorno (nombre de variable)(tipo de parametros))

    void f()
    {
        cout << "hola";
    }

    int main()
    {
        void (*my_function)();
        my_function = &f;

        my_function();
    }

C++11

    #include <functional>

    void f()
    {
        cout << "hola";
    }

    int main()
    {
        std::function<void()> my_function = &f;

        my_function();
    }


**Organizaci�n del c�digo**  
Declaraciones de funciones  
- Ficheros aparte: Utilizaci�n de las mismas funciones en diferentes m�dulos de compilaci�n.
- Fichero con c�digo fuente y fichero de cabecera(header)
- Separaci�n de la declaraci�n y la definici�n.

Tipos de ficheros
- Ficheros de definiciones: .cpp, .mm, etc
    - Incluyen ficheros de cabecera 
    - Definici�n de funciones
    - Definici�n de variables globales(evitarlas)
    - Son las unidades de compilaci�n

- Ficheros de declaraciones o cabecera (headers): .hpp, .h 
    - Declaraci�n de funciones. 
    - Declaraci�n de tipos nuevos: clases y estructuras, etc...
    - Declaraci�n de templates 
    - Declaraci�n de variables globales (evitarlas)
    
Unidades de compilaci�n  
- Por cada fichero .cpp se crea un fichero objeto compilado.  
- Se realiza la compilaci�n una vez �expandido� el c�digo de los ficheros incluidos con la directivas de preprocesador.   
- Las cabeceras contenidas en un determinado fichero se pre-procesan y compilan. (stdafx) 
    - Evitar cabeceras cambiantes o poco utilizadas. 

[reposGitHub](https://github.com/OpenWebinarsNet/openwebinars_cpp_fundamentos)


***

**29/04/2021**

### 5. CURSO DE GIT ###

- Control versiones de c�digo.
- Funcionalidad distribuida. No depende de un repositorio central (SVN) ni de la red.
- Ramas -> divergencia respecto al flujo principal de funcionalidad. +Control
- Merges: fusi�n.
- Todo el flujo temporal en local.
- Estados: Modificado (untracked) -> Preparado (staged) -> Confirmado (commited)

Herramientas: TkDIFF, gitlab


**02/05/2021**   
**ORGANIZACI�N DEL C�DIGO FUENTE Y OTROS ELEMENTOS DEL PROYECTO**     
**Creaci�n repositorio** : Git Init, Status, Add, Commit, Ignore  
**Cambios**: Git diff. Hist�rico -> Git log , Show    
**Trabajo en remoto**: Git Remote, Push, Pull   
**Deshacer cambios**: Git Checkout, Reset, Reset Hard, Revert  
**Reparar conflictos de uni�n con merge**: Git Merge  

**FLUJOS DE TRABAJO**  
**Ramas**: Git Branch, Push <branch_name>, branch -d <branch_name>  
**Autor�a**: Git Blame  
**"Picotear" commits**: Git cherry-pick   
  
**03/05/2021**  
  
**Reescribir commits**: Git rebase  
**Etiquetas**: git tag  
**Moverse entre estados**: git checkout <hash_id>  
**Guardar estado**: git stash apply

**Repositorios Corporativos**  
GitHub y GitLab -> servicios de hosting para Git.  GitLab, adem�s, es software para descargar en local.  

**DevOps**  
Colaboraci�n entre equipos. Mantener flujo de despliegue e integraci�n continua.  

***
**06/05/2021**
### 6. de Programaci�n orientada a objetos con C++ ###
**Memoria**
- Stack: memoria inmediata que esta enlazada al scope m�s inmediato
- Heap:memor�a din�mica de la cual somos nosotros responsables de gestionar

Punteros:   
Esenciales para memoria din�mica (heap)  
Operaciones: ++ / -- / += / ==  

**08/05/2021**  
**Estructuras de datos**  
Struct  
Union  
Enum Class  
Class  

**Herencia**  
Vtables    
Modificadores    
Polimorfismo  

*** 

**09/05/2021**  

### 7. Programaci�n gen�rica y concurrente con C++ ### 
Prog. gen�rica:
- **Macros**  -> Directivas de preprocesado. Sustituir c�digo. Prog condicional
- **Templates** -> Generar/Expandir c�digo en tiempo de compilaci�n. No dependiente de tipos o valores.

Prog. concurrente:
- **Threads**  -> Hilos de ejecuci�n l�gicos. Comparten la misma memoria aunque tienen su propio stack
    - Control de flujo: 
        - Mutex: Bloquean el acceso, flag
        - Atomic: Encapsulaci�n de acceso �nico
- **Process**  -> dependientes de OS y cada uno ofrece una API diferente para trabajar con ellos  
No comparten memoria.  
Cada uno tiene su propio stack y su propio heap


###  Patrones e interfaces en c++ ###
- **STL**  
Librer�a est�ndar de C++ 
Framework extensible para manejo de datos en programas C++ 
La representaci�n m�s gen�rica, m�s eficiente y  m�s flexible de conceptos (ideas, algoritmos)
Ventajas: Est�ndar, Multiplataforma, Eficiencia
Desventajas: Uso espec�fico

  -  Contenedores secuenciales (array, vector, lista, deque, stack, queue, ... )  
  -  Contenedores asociativos (set, map, multimap, multiset)  
  - Iteradores: punteros para acceder individualmente a los elementos de un contenedor. begin() end()  
    
   [Resumen STL](https://users.cs.northwestern.edu/~riesbeck/programming/c++/stl-summary.html)

- **Interfaces**


- **Patrones de dise�o**



- **Organizaci�n de c�digo**
