[CARRERA: PROGRAMADOR ++ ](https://openwebinars.net/academia/carrera/programador-cpp/)

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

#### 1.	INTRODUCCI�N A LA PROGRAMACI�N ####

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
Dado que son ejercicios muy sencillos  (y muchos ya est�n subidos en los 
primeros repositorios que he subido aqu�), no los har� pero subir� los enunciados.

---
#### 2. INTRODUCCI�N A LAS ESTRUCTURAS DE DATOS ####

**22/04/2021**

Estructuras de datos en Java  

- An�lisis de algoritmos
    - C�mo medir la velocidad de un algoritmo --> An�lisis de las instrucciones del algoritmo en base a los datos con los que est� trabajando.
    - Notaci�n Big O o crecimiento de funciones: nos indica qu� tan r�pido es un algoritmo,   
    No tiene en cuenta los coeficientes (desviaciones), s�lo el factor dominante (elemento que m�s crece).


        ***O(n)** siendo n el n�mero de elementos* 

        ![Big O](2.EstructurasDatos/Big_O.jpg)

- Estructuras de datos
    - Es una forma de organizar una colecci�n de datos en una computadora para que puedan ser utilizados de manera eficiente.  
    Colecci�n de datos relacionados y preparados que permite ciertas operaciones para ese conjunto, permiti�ndonos poder hacer algoritmos de una forma m�s eficiente y segura.  
        - Arrays, listas ligadas, colas, pilas, mont�culos.

- Datos primitivos y compuestos
    - Primitivos: Booleanos, caracteres, enteros, n�meros de punto flotante, punteros.
    - Compuestos: Registros u objetos, string, array 
          
- Tipos de datos gen�ricos

        public class ListaGenerica <T>{

            private ArrayList<T> lista = new ArrayList<T>();

            public ListaGenerica() {}

            public T get(int index) {
                return lista.remove(index);
            }

            public void delete(int index) {
                lista.remove(index);
            }

            public void add(T integer) {
                lista.add(integer);
            }

            public int size() {
                return lista.size();
            }

        }

    Se especifca el tipo de dato a trav�s de <>
         
        public class Pareja<K,V> {

            private K key;
            private V value;
    
            public Pareja(K key, V value) {
                this.key = key;
                this.value = value;
            }

            public K getKey() {
                return key;
            }

            public void setKey(K key) {
                this.key = key;
            }

            public V getValue() {
                return value;
            }

            public void setValue(V value) {
                this.value = value;
            }
        }

    Tambi�n podr�amos decir que el tipo de dato usado en valores sean solo aquellos que extienden de la interfaz Usuarios, evitando as�, que podamos usar cualquier otro tipo de dato

        public class Pareja<K, V extends Usuarios> { } 
 
- Tipos de datos abstractos (TAD � ADT)
 
    Modelo matem�tico para definir tipos de datos, con un comportamiento esperado. En Java normalmente se escriben en interfaces.

        public interface Pila<T>{
            void push(T t)

            void T pop()

            void T peek()

            boolean isEmpty()

            int size()
        }

    Ejemplos:  mont�culo, el �rbol, o la pila, ...  Se implementan con arrays (una estructura de datos para implementar un ADT de una lista por ejemplo).
    Seg�n como se implementen, podr�n tener un coste mayor o menor.


**23/04/2021**

  - Arrays est�ticos 
    - Almacena de forma contigua los valores en la memoria.
    - Rellena todas las posiciones con un valor por defecto (int con 0, objetos con null, ...) definidos por Java
    - ADT (operaciones):
        - Crear(tama�o)
            - Coste O(N). Recorre cada posici�n de la memoria con el valor por defecto
        - EstablecerValorEn(valor, posici�n)
            - Coste O(1)  
        - Obtener(posici�n)
            -  A trav�s de la posici�n de memoria donde empieza el array, y el tama�o de cada objeto, accede a la posici�n
            -  Coste O(1) 
        - B�squeda
            - Coste O(N), porque en el peor caso estar� en la �ltima posici�n
        - Ordenar 
            - Coste O(NLogN)
            - Arrays.sort(array)
        - B�squeda (en array ordenado)
            - Coste O(LogN) 
            - Arrays.binarySearch(array, key)            
        - Copiar un rango     
            - Arrays.copyOfRange(array, desde incluido, hasta no incluido)             
            - Coste O(N), en el peor caso copia todas las posiciones
             

-  Arrays din�micos (ArrayList)
    - Son un envoltorio a un array est�tico, y hace operaciones sobre este para modificar su tama�o de forma �ptima.     
      Internamente son una serie de operaciones para crear y borrar (copia) arrays est�ticos en base a nuestras operaciones       
    - ADT
        - Crear()
            - Por defecto, array vac�o con capacidad de 10. Coste: O(N)
        - Agregar(elemento)
            - Primero asegura capacidad interna del array. Si sobrepasa, crea un nuevo array con mayor capacidad (+/- el doble) en el que copia todos los elementos del viejo.
            - Amortizar coste de inserci�n -> O(1) = establecer
            - Coste O(N) en el peor caso
        - Agregar(elemento, posici�n)
            - Coste O(N) en el peor caso, insertando en 0
        - Borrar(posici�n)
            - Coste O(N) igual que el caso anterior
        - Obtener(posici�n)
            - Coste O(1) = est�ticos
        - Establecer(elemento, posici�n)
            - Coste O(1)
          
  
- Listas ligadas 
    - Es una forma de crear una lista con los datos, de tal manera que un dato est� enlazado con el siguiente. 
    - Datos no contiguos. Guarda dato y la referencia (enlace) al siguiente en una posici�n de memoria.
    - Clase Nodo gen�rica con Dato y Nodo al Siguiente
    - Nodo principio apuntando a Nodo A y un final apuntando al Nodo final (Siguiente = Null)
    - ADT:
        - Insertar al principio
            - Coste O(1) ---> Nuevo Nodo B -> B.siguiente = Principio -> Principio = B
        - Insertar al final
            - Coste O(1) con lista vac�a --> Nuevo Nodo A -> Principio y Final apuntando a A
            - Coste O(1) en lista con objetos --> Nuevo Nodo B -> Final.sig = B -> Final = B
        - Insertar en posici�n
            - Coste: O(N)
               - Nuevo Nodo, sig = null
               - Recorrer lista con dos nodos: Anterior mantendr� nodo anterior y Actual en nodo que se est� comprobando si es el buscado
               - Anterior.sig = Nuevo
               - Nuevo.sig = Actual 
        - Eliminar al principio 
            - Coste O(1) ---> Principio = Nodo A.sig
        - Eliminar en posici�n o al final
            - Coste O(N) ---> igual que Insertar en posici�n -> Anterior.sig = Actual.sig
        - Obtener elemento del principio
            - Coste O(1)
        - Obtener elemento del final
            - Coste O(1)
        - Acceso a posici�n
            - Coste O(N) -> Recorrer al menos todo. Posici�n de memoria desconocida
 
    - Lista ligada doble
        - Cada Nodo tiene dos enlaces, al siguiente y al anterior.
        - No necesario Nodo Anterior y Actual para operar.           
        En Java -> clase LinkedList    


- Pilas (Stack)
    - LIFO (Last in, Last out)
    - Implementar acci�n deshacer (apilando acciones) o b�squeda en profundidad 
    - Guardar llamadas de las funciones recursivas en el orden en que se deben ejecutar.
    - ADT: Crear, Apilar (push), Desapilar (pop), Ver la cima, Tama�o, Ver si est� vac�a

    - Implementar pila con lista ligada. ADT:
          - Apilar/Desapilar -- Insertar/Eliminar (SE QUITA) al principio. Coste O(1)
          - Ver la cima Coste O(1)

    - Implementar pila con array din�mico
          - Cima variable top inicializada a -1
          - Apilar: top++ --> Insertar elemento en top. Coste O(1)
          - Desapilar: top--  Coste O(1)
          - Ver la cima con top. Coste O(1)


- Colas(Queue)
    - FIFO (First in, First Out)
    - Transferir datos entre procesos as�ncronos, cola de entrada para servidor, b�squeda de anchura...
    - ADT: crear, encolar, desencolar, "" = pila
     
    - Implementar cola con lista ligada. 
        - Encolar -- Insertar al final. Coste O(1)
        - Desencolar -- Eliminar (SE QUITA) al inicio. Coste O(1)
        - Ver al frente con top. 1er elemento lista. Coste O(1)
 

- Mont�culos
    - Retiramos valores de forma ordenada (el array no debe estar necesariamente ordenado) con un coste bajo
    - Es un tipo de �rbol binario, tiene un nodo y este dos hijos (puede ser altura n)
    - Dos tipos: max (orden mayor a menor, padre > hijos) y min (p < h)
    - Ha de rellenarse de izq a der sin dejar ning�n nodo en medio sin hijos
    - Implementar algoritmo de Prim, de Dijkstra, lista ordenada de inserci�n muy r�pida y eficiente
    - ADT de una implementaci�n cola de prioridad:
        - Crear: array din�mico
        - Insertar elem: �ltima pos array. M�todo flotar -> mover elem a pos correspondiente
            Acceder a padre a O(1) -> si k>0, padre est� en pos (k-1)/2 
            Nodos = 2^(altura+1)- 1 == Altura = Log2(Nodos) --> Altura = Log2(lista.size) --> Coste O(LogN)
        - Retirar elemento max/min: quitamos 1er elem, el �ltimo se coloca en la 1a pos y usamos m�todo hundir: comprobaci�n con hijos m�s peq/may -> (2*k)+1 hijo izq, (2*k)+2 hijo der --> O(LogN)  
    
    - HeapSort: algoritmo de ordenamiento que se basa simplemente en ir retirando todos los elementos de un mont�culo (heap) e irlo insertando por ese orden en el array
        - Coste O(NLogN)

**Bibliograf�a recomendada:**
- SedGewick R., Wayne K. Algorithms     
- Lewis, Chase. Java Software Structures. Designing and Using Data Structures
- Bhargava, A. Grokking algorithms

---
#### 3. SOLID Y PATRONES DE DISE�O ####

En C#

**24/04/2021**

Objetivos curso: Conocer buenas pr�cticas de programaci�n, generar c�digo escalable, limpio y de calidad y c�digo m�s mantenible  
Dise�o orientado a objetos

Problemas dise�o app: demasiadas funcionalidades sin relaci�n en una clase (poco encapsulado), demasiada interrelaci�n/dependencia entre clases (estrechamente acopladas), c�digo duplicado  
Soluciones: elecci�n arquitectura, principios de dise�o, patrones de dise�o  
Objetivo: Disminuir costes de mantenimiento. Poder a�adir/modificar funcionalidades m�s f�cilmente. C�p

- **SOLID** -> Principios base a seguir antes de proponer una arquitectura de software. C�digo escalable a un futuro. Alta cohesi�n y bajo acoplamiento (menor dependencia, mejor especificaci�n propositos sistema)
    - Alta cohesi�n: Informaci�n de una clase coherente, estar relacionada con la clase
    - Bajo acoplamiento: Clases menos ligadas entre si. En caso de modificaci�n, menor repercusi�n posible en el resto. + Reutilizaci�n - Dependencia 
     
    - **S**: Single Responsability Principle (SRP) 
        - "Cada m�dulo de software debe tener una sola raz�n para cambiar." Cada clase debe tener un �nico trabajo/proposito.  
        - 
    - **O**: Open/Closed Principle (OCP)
        - Un m�dulo/clase est� abierto para extensi�n y cerrado para modificaci�n. Si queremos a�adir funcionalidades nuevo lo ideal ser�a poder construir sobre lo que ya existe (sin modificaciones grandes). No alterar a menos que haya errores.  
            Extensiones --> Interfaces/Clases abstractas -> Posibles arreglos para clases que las implementen  

    - **L**: Liskov substitution Principle (LSP)
        - "Si S es un subtipo de T, entonces los objetos de tipo T en un programa de computadora pueden ser sustituidos por objetos de tipo S (es decir, los objetos de tipo S pueden sustituir objetos de tipo T ), sin alterar ninguna de las propiedades deseables de ese programa (la correcci�n, la tarea que realiza, etc.)" Wikipedia   
        - Establece que deber�a poder usarse una clase derivada en lugar de la clase ppal y con mismo comportamiento sin modificaciones.
             Derivada no afecte comportamiento de la ppal. Clase derivada debe ser sustituible por su clase base. 
        - Extensi�n de ppio OCP: Clases derivadas ampl�en clases base sin modificar su comportamiento.  
                 
    - **I**: Interface Segregation Principle (ISP)
        - "Los clientes no deben ser forzados a implementar interfaces que no usan. En lugar de una sola interfaz, se prefieren muchas interfaces peque�as basadas en grupos de m�todos (muy relacionados, alta cohesi�n), cada uno de los cuales sirve a un subm�dulo."  
             Una interfaz debe estar m�s relacionada con el c�digo que la usa (del cliente) que con el c�digo que la implementa (la clase).  
             Cada interfaz debe de tener un prop�sito/responsabilidad �nico (ppio SRP)                              

    - **D**: Dependency Inversion Principle (DIP)
        - Los m�dulos de alto nivel no deben depender de m�dulos de bajo nivel (+ op. detalladas), si no de abstracciones.  
        - Las abstracciones no deben depender de los detalles. Los detalles deben depender de las abstracciones.  
        - Patrones que ayuden a abstraer nuestros m�dulos.  
        - Inyeccion de dependencia (inversi�n de control).   
        - Evitar acoplamiento entre alto-bajo nivel(cambios de una clase pueden romper otra) --> Hacer que dependan de abstracciones
        
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


Bibliograf�a: Design Patterns. Gang of Four    


Objetivos: cat�logos de elementos reusables, evitar la reiteraci�n en la b�squeda de soluciones a problemas ya conocidos y solucionados, vocabulario com�n entre dise�adores, Estandarizar el modo en que se realiza el dise�o, facilitar el aprendizaje  
No -> Imponer ciertas alternativas de dise�o frente a otras.


1. Patrones creacionales -> Creaci�n de instancia. Encapsular y extraer dicha creaci�n.  
    -  **Abstract Factory** (Frecuencia de uso: Alta)
         - Interfaz para crear familias de objetos relacionados o dependientes sin especificar sus clases concretas (sin especificarse directamente).  
         
        [Plantilla Estructura](https://github.com/cdiazal/SOLID_Patterns/tree/master/Patterns/Creational%20Patterns/GangOfFour.Abstract.Structural)  

        ![Abstract Factory](3.SOLID_PatronesDisenho/patronesCreacionales/AbstractFactory.gif)   

        [Ejemplo](https://github.com/cdiazal/SOLID_Patterns/tree/master/Patterns/Creational%20Patterns/GangOfFour.Abstract.RealWorld)

        *Creaci�n de jerarqu�a paralela de objetos y abstracci�n de la creaci�n de objetos- No se crean todas las clases dentro de Cliente.*                 

    -  **Builder** (Frecuencia de uso: Media baja)
        - Separa la construcci�n de un objeto complejo de su representaci�n para que el mismo proceso de construcci�n pueda crear diferentes representaciones.  
         
         [C�digo Estructural](https://github.com/cdiazal/SOLID_Patterns/tree/master/Patterns/Creational%20Patterns/GangOfFour.Builder.Structural)

         ![Builder](3.SOLID_PatronesDisenho/patronesCreacionales/Builder.gif)

          [Ejemplo](https://github.com/cdiazal/SOLID_Patterns/tree/master/Patterns/Creational%20Patterns/GangOfFour.Factory.RealWorld)

    - **Factory Method** (Frecuencia de uso: Alta)
        - Define una interfaz para crear un objeto, pero deja que las subclases decidan de qu� clase crear una instancia. Factory Method permite que una clase difiera la creaci�n de instancias a subclases.
        - Flexibilidad para crear diferentes objetos. Va a haber una clase abstracta que puede proporcionar un obj predeterminado, pero cada subclase va a crear una instancia de una versi�n extendida del obj.
         
        [C�digo Estructural](https://github.com/cdiazal/SOLID_Patterns/tree/master/Patterns/Creational%20Patterns/GangOfFour.Factory.Structura)

        ![Factory](3.SOLID_PatronesDisenho/patronesCreacionales/Factory.gif)
        
        [Ejemplo](https://github.com/cdiazal/SOLID_Patterns/tree/master/Patterns/Creational%20Patterns/GangOfFour.Factory.RealWorld)
         
    - **Prototype** (Frecuencia de uso: Media)
        - Especifica el tipo de objetos para crear utilizando una instancia protot�pica (obj existentes del mismo tipo) y crea nuevos objetos copiando este prototipo.  
        
        [C�digo Estructural](https://github.com/cdiazal/SOLID_Patterns/tree/master/Patterns/Creational%20Patterns/GangOfFour.Prototype.Structura)  

        ![Prototype](3.SOLID_PatronesDisenho/patronesCreacionales/Prototype.gif)  

        [Ejemplo](https://github.com/cdiazal/SOLID_Patterns/tree/master/Patterns/Creational%20Patterns/GangOfFour.Prototype.RealWorld)  
 
    - **Singleton**  (Frecuencia de uso: Media alta)
        - Se asegura de que una clase tenga solo una instancia y proporciona un punto global de acceso a ella.
        
        [C�digo Estructural](https://github.com/cdiazal/SOLID_Patterns/tree/master/Patterns/Creational%20Patterns/GangOfFour.Singleton.Structural)
        
        ![Singleton](3.SOLID_PatronesDisenho/patronesCreacionales/Singleton.gif)

        [Ejemplo](https://github.com/cdiazal/SOLID_Patterns/tree/master/Patterns/Creational%20Patterns/GangOfFour.Singleton.RealWorld)


2. Patrones estructurales -> C�mo utilizar estructuras de datos complejas a partir de datos m�s simples. Crear interconexi�n entre objetos y que �stas relaciones no se vean afectadas por cambios en los requisitos del prog.
  
3. Patrones de comportamiento -> Especifican el comportamiento entre objetos del prog. Interacci�n y responsabilidades entre clases y objetos, y gesti�n de algoritmos que la encapsulan.
