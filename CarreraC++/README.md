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

- Control versiones de c�digo **distribuido**.
- Funcionalidad distribuida. No depende de un repositorio central (SVN) ni de la red.
- Ramas -> divergencia respecto al flujo principal de funcionalidad. +Control
- Merges: fusi�n.
- Todo el flujo temporal en local.
- Estados: Modificado (untracked) -> Preparado (staged) -> Confirmado (commited)

Herramientas: TkDIFF, gitlab

$ git init  
$ git add readme.md / add .  
$ git commit -m "tag"  
$ git difftool -> dif visual  

.gitignore -> *.tmp
Al eliminar fichero ignorado = status. Git no lo ve.

**2/05/2021**    
$ git status

Eliminar fichero:  
$ git rm readme.md (Eliminar ficheros ignorados no hace nada)  
Renombrar/Mover archivo:  
$ git mv readme2.md readme3.md -> pasa el fich al area de staged

Cualquier movimiento implica que tiene que estar desplazado lo que hagamos en el area de staged y posteriormente en commit
mv -> Borra fich y aparece fich nuevo
mv -> add

$ git log --oneline -> ver commits (revisiones) hash id + tag. --oneline Info resumida 
fter) puntero a un hash id revisi�n + actual -> HEAD  
Rango divisiones podemos indicar HEAD  y -3 hacia atr�s  
$ git log --pretty=format:"%h %an %ar - %s" [funciona sin format]  
$ git show 7651c55 -> fich que hay en una revisi�n (cambios realizados)  

$ git diff -> compara lo que hay en working directory y commit
$ git diff --staged -> compara working directory con staged (staged == cached)

Clonar repositorio github  
(1� $ git init)
$ git remote add origin https://github.com/sharkdp/bat  
$ git fetch origin -> recupera lo que hay en origin (muestra informaci�n versiones)  
$ git pull origin master -> descarga origin a mi master
$ git branch -v -a -> ramas disponibles  

origin: nombre que le damos como norma a la referencia de repos remoto

$ git log --oneline:
(origin/master) de la fuente con la que me he conectado
master -> en mi equipo  
$ git push

$ git clone url . (. -> en path actual, si no crea un dir) init, fetch y pull impl�citos 

$ git push origin master: para subir proy con cambios -> introducir credenciales

Deshacer cambios:  
$ git checkout master : Commit -> working directory  

$ git checkout -- nombreArchivo (� . q reemplaza todo) -> traer de la revisi�n X los fich indicados al path actual  
p.ej. $ git checkout HEAD(o id hash o tag) fichero  
$ git checkout HEAD~1 fichero  -> un menos que el que est� arriba  
$ git checkout HEAD -- . -> recupera todo de la ult versi�n

$ git reset : Staged -> working directory  
$ git reset HEAD file3

Si el fich est� en staged o en commit lo podemos recuperar. Si est� en working directory no

$ git reset --hard -> 1� trae de commit a working dir la versi�n indicada 2� todo lo que estea en staged lo borra  
$ git reset --hard HEAD~1 -> trae la versi�n anterior a HEAD

$ git revert id -> elegimos que fich revertir
$ git revert HEAD...HEAD~2 --no-edit -> rango. Aplica todo (no elecci�n de fich)

**Ramas**  
Establecer l�neas de desarrollo divergentes que parten de la versi�n del c�digo en rama principal  
Experimentos, nueva funcionalidad... si se aprueba podemos fusionar c�digo completo  

$ git branch -> ver ramas  
$ git branch -a -v -> con ramas remotas + info rama (�lt commit)  
$ git branch nuevaRama ramaOrigen   
$ git checkout nombreRama -> cambio a rama

$ git merge nuevaRama ramaPpal -> conmuto/fusiona. Aplica cambios de nuevaRama a Ppal. Elimina lo que hab�a en Ppal (= contenido en ambas ramas)  

$ git branch -d nuevaRama -> elimina rama  

$ git checkout -b newRama -> crea y nos posiciona en nuevaRama  

$ git diff HEAD HEAD~2 -> rango

$ git log -p -n 2 -> aprobaciones versiones + diff + autoria + fecha. -n 2 dos cambios hacia atr�s  
$ git log --since="2 weeks ago" --until="2 days ago"  

**git blame**
Filtra autor�a de quien ha hecho cambios.  
$ git log -n 15 --oneline -> �ltimos 15 cambios  
$ git blame scr/output.rs -> autores de commits en el archivo  
$ git blame -L 6,8 scr/output.rs -> autores que han tocado l�neas 6 y 8  

**Cherry Picking**  
(Picotear) commits individuales >  detallistas acerca que cu�les de esos commits queremos unir / merge.  
$ git cherry-pick origin/master 5d5bf61 -> Merge de un commit concreto  
$ git cherry-pick --continue

**3/05/2021**  
**Git rebase**
Reestructurar commits y asegurarnos de que son comprensibles antes de subir/push los cambios.  
Condensar varios commits (p. ej commits + antiguos)  Sanear hist�rico de los proj
Recomendaci�n: S�lo deber�amos hacer rebase de commits que no hayamos compartido con otras personas v�a push. El proceso de rebasing de commits provoca que los hash_id commit-ids cambien, lo cual puede resultar en p�rdida de commits futuros.  

$ git rebase --interactive --root -> interactive carga pantalla para indicar que commits condenso. root desde donde empiezo a hacer el rebase (1er commit)  
$ git rebase --interactive HEAD HEAD~4 -> rango  

pick -> commit que se queda  
squash -> Condensado 
reword -> reeditar msg de commit  

**Etiquetas**  
Cambios incorporados en versi�n. 
- Ligeras: $ git tag v1.4-lw  ->  puntero a un commit especifico.
- Anotadas:  $ git tag -a v1.5 -m "Esta es la versi�n 1.5" -> obj entero. +info

$ git show v1.5  

**Movernos entre commits**  
Recuperar un commit espec�fico y volver a trabajar con �l.  
$ git commit --amend -> Enmendar desde staged fich no incluidos en commit. Movemos puntero hacia atr�s y luego hacia delante (elimina commit enmendado)  

$ git checkout id  -> commit antiguo
$ git checkout -b solo_readme -> nueva rama desde un estado del tiempo  
$ git branch -v -a -> ver ramas  

$ checkout -> movernos a un puntero en el tiempo y generar todo el contenido  
$ git checkout -b -> nueva rama  
$ git checkout nombreRama -> desplazarnos entre ramas  

**Git stash**  
Copia/foto que nos permite almacenar temporalmente lo que tengamos en staged  
$ git stash  
$ git rm README.md  
$ echo "aa" > README.md
$ git stash apply -> intenta recuperar lo que hab�a. Conflicto. Escogemos lo que permanece.  
$ git add README.md -> escogemos �ltimo creado  


**Repositorios Corporativos**  
GitHub y GitLab -> servicios de hosting para Git.  GitLab, adem�s, es software para descargar en local.  

**DevOps**  
Colaboraci�n entre equipos. Mantener flujo de despliegue e integraci�n continua.  

***
**06/05/2021**
### Curso de Programaci�n orientada a objetos con C++ ###
**Memoria**
- Stack
- Heap

**Punteros**  



