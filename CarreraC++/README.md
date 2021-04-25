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
#### 3. SOLID Y PATRONES DE DISE�O ####

En C#

Objetivos curso: Conocer buenas pr�cticas de programaci�n, generar c�digo escalable, limpio y de calidad y c�digo m�s mantenible  
Dise�o orientado a objetos

Problemas dise�o app: demasiadas funcionalidades sin relaci�n en una clase (poco encapsulado), demasiada interrelaci�n/dependencia entre clases (estrechamente acopladas), c�digo duplicado  Soluciones: elecci�n arquitectura, principios de dise�o, patrones de dise�o  
Objetivo: Disminuir costes de mantenimiento. Poder a�adir/modificar funcionalidades m�s f�cilmente. 

- **SOLID** -> Principios base a seguir antes de proponer una arquitectura de software. C�digo escalable a un futuro. Alta cohesi�n y bajo acoplamiento (menor dependencia, mejor especificaci�n prop�sitos sistema)  
Alta cohesi�n: Informaci�n de una clase coherente, estar relacionada con la clase  
Bajo acoplamiento: Clases menos ligadas entre si. En caso de modificaci�n, menor repercusi�n posible en el resto. + Reutilizaci�n - Dependencia 
     
    - **S**: Single Responsability Principle (SRP)       
         
    - **O**: Open/Closed Principle ([OCP](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/3.SOLID_PatronesDisenho/OPC.txt))
        
    - **L**: Liskov substitution Principle ([LSP](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/3.SOLID_PatronesDisenho/LSP.txt))       
                 
    - **I**: Interface Segregation Principle ([ISP](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/3.SOLID_PatronesDisenho/ISP.txt))
       
    - **D**: Dependency Inversion Principle ([DIP](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/3.SOLID_PatronesDisenho/DIP.txt))       
        
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


1. **Patrones creacionales** -> Creaci�n de instancia. Encapsular y extraer dicha creaci�n.  
    -  Abstract Factory: Interfaz para crear familias de objetos relacionados o dependientes sin especificar sus clases concretas (sin especificarse directamente).                                

    -  Builder: Separa la construcci�n de un objeto complejo de su representaci�n para que el mismo proceso de construcci�n pueda crear diferentes representaciones.                  

    - Factory Method: Define una interfaz para crear un objeto, pero deja que las subclases decidan de qu� clase crear una instancia. Factory Method permite que una clase difiera la creaci�n de instancias a subclases.
      Flexibilidad para crear diferentes objetos. Va a haber una clase abstracta que puede proporcionar un obj predeterminado, pero cada subclase va a crear una instancia de una versi�n extendida del obj.                           
         
    - Prototype: Especifica el tipo de objetos para crear utilizando una instancia protot�pica (obj existentes del mismo tipo) y crea nuevos objetos copiando este prototipo.          
 
    - Singleton: Se asegura de que una clase tenga solo una instancia y proporciona un punto global de acceso a ella.             


**25/04/2021**  

2. **Patrones estructurales** -> C�mo utilizar estructuras de datos complejas a partir de datos m�s simples. Crear interconexi�n entre objetos y que �stas relaciones no se vean afectadas por cambios en los requisitos del prog.
    - Adapter: Convierte la interfaz de una clase en otra interfaz que los clientes esperan. El Adapter permite que las clases trabajen juntas y que no podr�an hacerlo de otra manera debido a interfaces incompatibles.    
    
    - Bridge: Desacopla una abstracci�n de su implementaci�n para que los dos puedan variar independientemente.

    - Composite: Compone los objetos en estructuras de �rbol para representar jerarqu�as enteras. Composite permite a los clientes tratar objetos individuales y composiciones de objetos de manera uniforme.

    - Decorator: Asigna responsabilidades adicionales a un objeto din�mica mente. Ofrecen una alternativa flexible a las subclases para extender la funcionalidad.

    - Facade: Proporciona una interfaz unificada a un conjunto de interfaces en un subsistema. Fa�ade define una interfaz de nivel superior que hace que el subsistema sea m�s f�cil de usar.

    - Flyweight: Soporta una gran cantidad de objetos peque�os de manera eficiente.

     - Proxy: Proporciona un sustituto o un marcador de posici�n para que otro objeto controle el acceso a �l.

3. **Patrones de comportamiento** -> Especifican el comportamiento entre objetos del prog. Interacci�n y responsabilidades entre clases y objetos, y gesti�n de algoritmos que la encapsulan.
    -  Chain of Responsability: Evita acoplar el remitente de una solicitud a su receptor, d�ndole a m�s de un objeto la oportunidad de manejar la solicitud. Encadena los objetos receptores y pasa la solicitud a lo largo de la cadena hasta que un objeto lo maneje.

    -  Command: Encapsula una solicitud como un objeto, lo que le permite parametrizar a los clientes con diferentes solicitudes, solicitudes de cola o de registro y admite operaciones que no se pueden deshacer.

    -  Interpreter: Dado un lenguaje, define una representaci�n para su gram�tica junto con un int�rprete que usa la representaci�n para interpretar sentencias en el idioma.

    -  Iterator: Proporciona una forma de acceder a los elementos de un objeto agregado de forma secuencial sin exponer su representaci�n subyacente.

    -  Mediator: Define un objeto que encapsula c�mo interact�a un conjunto de objetos. El Mediator promueve el bajo acoplamiento evitando que los objetos se refieran entre s� expl�citamente, y le permite variar su interacci�n de forma independiente.
 
    -  Memento: Sin violar la encapsulaci�n, captura y externaliza el estado interno de un objeto para que el objeto pueda restaurarse a este estado m�s adelante.

    -  Observer: Define una dependencia de uno a muchos entre los objetos para que cuando un objeto cambie de estado, todos los objetos que dependan de �l sean notificados y actualizados autom�ticamente.

    -  State: Permite que un objeto altere su comportamiento cuando cambia su estado interno. El objeto aparecer� para cambiar su clase.
 
    -  Strategy: Define una familia de algoritmos, encapsula cada uno de ellos y los hace intercambiables entre s�. Strategy permite que el algoritmo var�e independientemente de los clientes que lo utilizan.

    -  Template Method: Define el esqueleto de un algoritmo en una operaci�n, aplazando algunos pasos a las subclases. Template Method permite a las subclases redefinir ciertos pasos de un algoritmo sin cambiar la estructura del algoritmo.

    -  Visitor: Representa una operaci�n a realizar en los elementos de una estructura de objeto. Visitor le permite definir una nueva operaci�n sin cambiar las clases de los elementos sobre los que opera.

- **Antipatrones de dise�o**  

