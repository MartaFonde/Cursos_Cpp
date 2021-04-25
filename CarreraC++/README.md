[CARRERA: PROGRAMADOR ++ ](https://openwebinars.net/academia/carrera/programador-cpp/)

OpenWebinars 

1.	INTRODUCCIÓN A LA PROGRAMACIÓN
2.	INTRODUCCIÓN A LAS ESTRUCTURAS DE DATOS
3.	SOLID Y PATRONES DE DISEÑO
4.	INTRODUCCIÓN A C++
5.	CURSO DE GIT
6.	PROGRAMACIÓN ORIENTADA A OBJETOS CON C++
7.	PROGRAMACIÓN GENÉRICA Y CONCURRENTE
8.	PATRONES E INTERFACES EN C++


***

#### 1.	INTRODUCCIÓN A LA PROGRAMACIÓN ####

**20/04/2021**

-	Fundamentos de la programación estructurada. 
-	Ciclo de desarrollo de una aplicación: análisis, diseño y codificación.

**21/04/2021**

-	Diseño de algoritmos con pseudocódigo. 
-	Entorno de trabajo: PseInt, para escribir pseudocódigo y ejecutarlo.
-	Introducción a los lenguajes de programación. Traductores.
    - Compiladores (ejemplo con C++)
    - Intérpretes (ejemplo con Python)
    - Máquina Virtual (ejemplo con Java)

El curso incluye varias hojas de ejercicios para realizar con pseudocódigo e 
introducirse en la práctica de entrada y salida de información, estructuras 
alternativas y repetitivas, arrays y funciones y procedimientos. 
Dado que son ejercicios muy sencillos  (y muchos ya están subidos en los 
primeros repositorios que he subido aquí), no los haré pero subiré los enunciados.

---
#### 2. INTRODUCCIÓN A LAS ESTRUCTURAS DE DATOS ####

**22/04/2021**

Estructuras de datos en Java  

- Análisis de algoritmos
    - Cómo medir la velocidad de un algoritmo --> Análisis de las instrucciones del algoritmo en base a los datos con los que está trabajando.
    - Notación **Big O** o crecimiento de funciones: nos indica qué tan rápido es un algoritmo,   
    No tiene en cuenta los coeficientes (desviaciones), sólo el factor dominante (elemento que más crece).

- Estructuras de datos
    - Es una forma de organizar una colección de datos en una computadora para que puedan ser utilizados de manera eficiente.  
    Colección de datos relacionados y preparados que permite ciertas operaciones para ese conjunto, permitiéndonos poder hacer algoritmos de una forma más eficiente y segura.  
        - Arrays, listas ligadas, colas, pilas, montículos.

- Datos primitivos y compuestos
    - Primitivos: Booleanos, caracteres, enteros, números de punto flotante, punteros.
    - Compuestos: Registros u objetos, string, array 
          
- Tipos de datos genéricos   
    [Lista genérica](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/2.EstructurasDatos/ListaGenerica.txt)         
    [Pareja <K,V>](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/2.EstructurasDatos/Pareja.txt)
     
- Tipos de datos abstractos (TAD ó ADT)   
    Modelo matemático para definir tipos de datos, con un comportamiento esperado. En Java normalmente se escriben en interfaces.

    Ejemplos:  montículo, el árbol, o la pila, ... 
    Según como se implementen, podrán tener un coste mayor o menor.


**23/04/2021**

  - Arrays estáticos 
    - Almacena de forma contigua los valores en la memoria.
    - Rellena todas las posiciones con un valor por defecto (int con 0, objetos con null, ...) definidos por Java
             

-  Arrays dinámicos (ArrayList)
    - Son un envoltorio a un array estático, y hace operaciones sobre éste para modificar su tamaño de forma óptima.     
      Internamente son una serie de operaciones para crear y borrar (copia) arrays estáticos en base a nuestras operaciones       
          
  
- Listas ligadas 
    - Es una forma de crear una lista con los datos, de tal manera que un dato está enlazado con el siguiente. 
    - Datos no contiguos. Guarda dato y la referencia (enlace) al siguiente en una posición de memoria.
    - Clase Nodo genérica con Dato y Nodo al Siguiente
    - Nodo principio apuntando a Nodo A y un final apuntando al Nodo final (Siguiente = Null)
 
    - Lista ligada doble
        - Cada Nodo tiene dos enlaces, al siguiente y al anterior.
        - No necesario Nodo Anterior y Actual para operar.           
        En Java -> clase LinkedList    


- Pilas (Stack)
    - LIFO (Last in, Last out)
    - Implementar acción deshacer (apilando acciones) o búsqueda en profundidad 
    - Guardar llamadas de las funciones recursivas en el orden en que se deben ejecutar.


- Colas(Queue)
    - FIFO (First in, First Out)
    - Transferir datos entre procesos asíncronos, cola de entrada para servidor, búsqueda de anchura...

- Montículos
    - Retiramos valores de forma ordenada (el array no debe estar necesariamente ordenado) con un coste bajo
    - Es un tipo de árbol binario, tiene un nodo y este dos hijos (puede ser altura n)
    - Dos tipos: max (orden mayor a menor, padre > hijos) y min (p < h)

**Bibliografía recomendada:**
- SedGewick R., Wayne K. Algorithms     
- Lewis, Chase. Java Software Structures. Designing and Using Data Structures
- Bhargava, A. Grokking algorithms

---

**24/04/2021**
#### 3. SOLID Y PATRONES DE DISEÑO ####

En C#

Objetivos curso: Conocer buenas prácticas de programación, generar código escalable, limpio y de calidad y código más mantenible  
Diseño orientado a objetos

Problemas diseño app: demasiadas funcionalidades sin relación en una clase (poco encapsulado), demasiada interrelación/dependencia entre clases (estrechamente acopladas), código duplicado  Soluciones: elección arquitectura, principios de diseño, patrones de diseño  
Objetivo: Disminuir costes de mantenimiento. Poder añadir/modificar funcionalidades más fácilmente. 

- **SOLID** -> Principios base a seguir antes de proponer una arquitectura de software. Código escalable a un futuro. Alta cohesión y bajo acoplamiento (menor dependencia, mejor especificación propósitos sistema)  
Alta cohesión: Información de una clase coherente, estar relacionada con la clase  
Bajo acoplamiento: Clases menos ligadas entre si. En caso de modificación, menor repercusión posible en el resto. + Reutilización - Dependencia 
     
    - **S**: Single Responsability Principle (SRP)       
         
    - **O**: Open/Closed Principle ([OCP](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/3.SOLID_PatronesDisenho/OPC.txt))
        
    - **L**: Liskov substitution Principle ([LSP](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/3.SOLID_PatronesDisenho/LSP.txt))       
                 
    - **I**: Interface Segregation Principle ([ISP](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/3.SOLID_PatronesDisenho/ISP.txt))
       
    - **D**: Dependency Inversion Principle ([DIP](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/3.SOLID_PatronesDisenho/DIP.txt))       
        
    Objetivo ppios SOLID: Código ordenado, legible y fácil de mantener. El código puede ser que aumente de tamaño, pero será de mejor calidad.
    Respetando estos principios se han desarrollado los patrones creacionales, estructurales y de comportamiento. 


- Principios de diseño de software
    - You Aren't Gonna Need It (YAGNI) -Haz la cosa más simple que pueda funcionar-, Keep it simple, Stupid! (KISS), Don't Repeat Yourself (DRY) / Duplication Is Evil (DIE)
    - Ley de Demeter -> "Habla solo con tus amigos cercanos. No hables con extraños." Un método de un objeto sólo puede llamar a métodos del propio objeto, sus argumentos, objetos del método y propiedades del objeto.
        - Mecanismo de detección de acoplamiento (problema de arquitectura). Encapsulamiento clases. 

    - MoSCoW: técnica de priorización de requisitos basada en el hecho de que aunque todos los requisitos se consideren importantes es fundamental destacar aquellos que permiten darle un mayor valor al sistema, lo que permite enfocar los trabajos de manera más eficiente  
         M(Must) S(Should) C(Could) W(Won´t)  -> Esta clasificación puede ser modificada durante el proceso de desarrollo y definirse, en el caso de desarrollos iterativos incrementales, prioridades a nivel de iteración.

- **Patrones de diseño**: forma reutilizable de resolver un problema común (estructura de clases)  
Ahorro de tiempo. Validez de código. Uso de lenguaje común. Aplicaciones robustas, facilitan mantenimiento. Nos ayudan a cumplir muchos ppios SOLID, control de cohesión, acoplamiento, reutilizar código...   


Bibliografía: Design Patterns. Gang of Four    


Objetivos: catálogos de elementos reusables, evitar la reiteración en la búsqueda de soluciones a problemas ya conocidos y solucionados, vocabulario común entre diseñadores, Estandarizar el modo en que se realiza el diseño, facilitar el aprendizaje  
No -> Imponer ciertas alternativas de diseño frente a otras.


1. **Patrones creacionales** -> Creación de instancia. Encapsular y extraer dicha creación.  
    -  Abstract Factory: Interfaz para crear familias de objetos relacionados o dependientes sin especificar sus clases concretas (sin especificarse directamente).                                

    -  Builder: Separa la construcción de un objeto complejo de su representación para que el mismo proceso de construcción pueda crear diferentes representaciones.                  

    - Factory Method: Define una interfaz para crear un objeto, pero deja que las subclases decidan de qué clase crear una instancia. Factory Method permite que una clase difiera la creación de instancias a subclases.
      Flexibilidad para crear diferentes objetos. Va a haber una clase abstracta que puede proporcionar un obj predeterminado, pero cada subclase va a crear una instancia de una versión extendida del obj.                           
         
    - Prototype: Especifica el tipo de objetos para crear utilizando una instancia prototípica (obj existentes del mismo tipo) y crea nuevos objetos copiando este prototipo.          
 
    - Singleton: Se asegura de que una clase tenga solo una instancia y proporciona un punto global de acceso a ella.             


**25/04/2021**  

2. **Patrones estructurales** -> Cómo utilizar estructuras de datos complejas a partir de datos más simples. Crear interconexión entre objetos y que éstas relaciones no se vean afectadas por cambios en los requisitos del prog.
    - Adapter: Convierte la interfaz de una clase en otra interfaz que los clientes esperan. El Adapter permite que las clases trabajen juntas y que no podrían hacerlo de otra manera debido a interfaces incompatibles.    
    
    - Bridge: Desacopla una abstracción de su implementación para que los dos puedan variar independientemente.

    - Composite: Compone los objetos en estructuras de árbol para representar jerarquías enteras. Composite permite a los clientes tratar objetos individuales y composiciones de objetos de manera uniforme.

    - Decorator: Asigna responsabilidades adicionales a un objeto dinámica mente. Ofrecen una alternativa flexible a las subclases para extender la funcionalidad.

    - Facade: Proporciona una interfaz unificada a un conjunto de interfaces en un subsistema. Façade define una interfaz de nivel superior que hace que el subsistema sea más fácil de usar.

    - Flyweight: Soporta una gran cantidad de objetos pequeños de manera eficiente.

     - Proxy: Proporciona un sustituto o un marcador de posición para que otro objeto controle el acceso a él.

3. **Patrones de comportamiento** -> Especifican el comportamiento entre objetos del prog. Interacción y responsabilidades entre clases y objetos, y gestión de algoritmos que la encapsulan.
    -  Chain of Responsability: Evita acoplar el remitente de una solicitud a su receptor, dándole a más de un objeto la oportunidad de manejar la solicitud. Encadena los objetos receptores y pasa la solicitud a lo largo de la cadena hasta que un objeto lo maneje.

    -  Command: Encapsula una solicitud como un objeto, lo que le permite parametrizar a los clientes con diferentes solicitudes, solicitudes de cola o de registro y admite operaciones que no se pueden deshacer.

    -  Interpreter: Dado un lenguaje, define una representación para su gramática junto con un intérprete que usa la representación para interpretar sentencias en el idioma.

    -  Iterator: Proporciona una forma de acceder a los elementos de un objeto agregado de forma secuencial sin exponer su representación subyacente.

    -  Mediator: Define un objeto que encapsula cómo interactúa un conjunto de objetos. El Mediator promueve el bajo acoplamiento evitando que los objetos se refieran entre sí explícitamente, y le permite variar su interacción de forma independiente.
 
    -  Memento: Sin violar la encapsulación, captura y externaliza el estado interno de un objeto para que el objeto pueda restaurarse a este estado más adelante.

    -  Observer: Define una dependencia de uno a muchos entre los objetos para que cuando un objeto cambie de estado, todos los objetos que dependan de él sean notificados y actualizados automáticamente.

    -  State: Permite que un objeto altere su comportamiento cuando cambia su estado interno. El objeto aparecerá para cambiar su clase.
 
    -  Strategy: Define una familia de algoritmos, encapsula cada uno de ellos y los hace intercambiables entre sí. Strategy permite que el algoritmo varíe independientemente de los clientes que lo utilizan.

    -  Template Method: Define el esqueleto de un algoritmo en una operación, aplazando algunos pasos a las subclases. Template Method permite a las subclases redefinir ciertos pasos de un algoritmo sin cambiar la estructura del algoritmo.

    -  Visitor: Representa una operación a realizar en los elementos de una estructura de objeto. Visitor le permite definir una nueva operación sin cambiar las clases de los elementos sobre los que opera.

- **Antipatrones de diseño**  

