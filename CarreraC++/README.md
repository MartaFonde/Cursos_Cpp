[CARRERA: PROGRAMADOR C++ ](https://openwebinars.net/carreras/programador-cpp/)

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

### 1.	INTRODUCCIÓN A LA PROGRAMACIÓN ###

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
Dado que son ejercicios muy sencillos, no los haré pero subiré los enunciados.

---
### 2. INTRODUCCIÓN A LAS ESTRUCTURAS DE DATOS ###

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
### 3. SOLID Y PATRONES DE DISEÑO ###

En C#

Objetivos curso: Conocer buenas prácticas de programación, generar código escalable, limpio y de calidad y código más mantenible  
Diseño orientado a objetos

Problemas diseño app: demasiadas funcionalidades sin relación en una clase (poco encapsulado), demasiada interrelación/dependencia entre clases (estrechamente acopladas), código duplicado  
Soluciones: elección arquitectura, principios de diseño, patrones de diseño  
Objetivo: Disminuir costes de mantenimiento. Poder añadir/modificar funcionalidades más fácilmente. 

- **SOLID** -> Principios base a seguir antes de proponer una arquitectura de software. Código escalable a un futuro. Alta cohesión y bajo acoplamiento (menor dependencia, mejor especificación propósitos sistema)  
Alta cohesión: Información de una clase coherente, estar relacionada con la clase  
Bajo acoplamiento: Clases menos ligadas entre si. En caso de modificación, menor repercusión posible en el resto. + Reutilización - Dependencia 
     
    - **S**: Single Responsability Principle ([SRP](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/SRP.txt))       
         
    - **O**: Open/Closed Principle ([OCP](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/OPC.txt))
        
    - **L**: Liskov substitution Principle ([LSP](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/LSP.txt))       
                 
    - **I**: Interface Segregation Principle ([ISP](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/ISP.txt))
       
    - **D**: Dependency Inversion Principle ([DIP](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/DIP.txt))       
        
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


**Bibliografía**: Design Patterns. Gang of Four    


Objetivos: catálogos de elementos reusables, evitar la reiteración en la búsqueda de soluciones a problemas ya conocidos y solucionados, vocabulario común entre diseñadores, Estandarizar el modo en que se realiza el diseño, facilitar el aprendizaje  
No -> Imponer ciertas alternativas de diseño frente a otras.


1. **Patrones creacionales** -> Creación de instancia. Encapsular y extraer dicha creación.  
    -  [Abstract Factory](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesCreacionales/AbstractFactory.gif): Interfaz para crear familias de objetos relacionados o dependientes sin especificar sus clases concretas (sin especificarse directamente).                                

    -  [Builder](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesCreacionales/Builder.gif): Separa la construcción de un objeto complejo de su representación para que el mismo proceso de construcción pueda crear diferentes representaciones.                  

    - [Factory Method](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesCreacionales/Factory.gif): Define una interfaz para crear un objeto, pero deja que las subclases decidan de qué clase crear una instancia. Factory Method permite que una clase difiera la creación de instancias a subclases.
      Flexibilidad para crear diferentes objetos. Va a haber una clase abstracta que puede proporcionar un obj predeterminado, pero cada subclase va a crear una instancia de una versión extendida del obj.                           
         
    - [Prototype](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesCreacionales/Prototype.gif): Especifica el tipo de objetos para crear utilizando una instancia prototípica (obj existentes del mismo tipo) y crea nuevos objetos copiando este prototipo.          
 
    - [Singleton](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesCreacionales/Singleton.gif): Se asegura de que una clase tenga solo una instancia y proporciona un punto global de acceso a ella.             


**25/04/2021**  

2. **Patrones estructurales** -> Cómo utilizar estructuras de datos complejas a partir de datos más simples. Crear interconexión entre objetos y que éstas relaciones no se vean afectadas por cambios en los requisitos del prog.
    - [Adapter](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesEstructurales/adapter.gif): Convierte la interfaz de una clase en otra interfaz que los clientes esperan. El Adapter permite que las clases trabajen juntas y que no podrían hacerlo de otra manera debido a interfaces incompatibles.    
    
    - [Bridge](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesEstructurales/bridge.gif): Desacopla una abstracción de su implementación para que los dos puedan variar independientemente.

    - [Composite](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesEstructurales/composite.gif): Compone los objetos en estructuras de árbol para representar jerarquías enteras. Composite permite a los clientes tratar objetos individuales y composiciones de objetos de manera uniforme.

    - [Decorator](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesEstructurales/decorator.gif): Asigna responsabilidades adicionales a un objeto dinámica mente. Ofrecen una alternativa flexible a las subclases para extender la funcionalidad.

    - [Facade](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesEstructurales/facade.gif): Proporciona una interfaz unificada a un conjunto de interfaces en un subsistema. Façade define una interfaz de nivel superior que hace que el subsistema sea más fácil de usar.

    - [Flyweight](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesEstructurales/flyweight.gif): Soporta una gran cantidad de objetos pequeños de manera eficiente.

     - [Proxy](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesEstructurales/proxy.gif): Proporciona un sustituto o un marcador de posición para que otro objeto controle el acceso a él.

3. **Patrones de comportamiento** -> Especifican el comportamiento entre objetos del prog. Interacción y responsabilidades entre clases y objetos, y gestión de algoritmos que la encapsulan.
    -  [Chain of Responsability](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/chainResponsability.gif): Evita acoplar el remitente de una solicitud a su receptor, dándole a más de un objeto la oportunidad de manejar la solicitud. Encadena los objetos receptores y pasa la solicitud a lo largo de la cadena hasta que un objeto lo maneje.

    -  [Command](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/command.gif): Encapsula una solicitud como un objeto, lo que le permite parametrizar a los clientes con diferentes solicitudes, solicitudes de cola o de registro y admite operaciones que no se pueden deshacer.

    -  [Interpreter](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/interpreter.gif): Dado un lenguaje, define una representación para su gramática junto con un intérprete que usa la representación para interpretar sentencias en el idioma.

    -  [Iterator](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/iterator.gif): Proporciona una forma de acceder a los elementos de un objeto agregado de forma secuencial sin exponer su representación subyacente.

    -  [Mediator](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/mediator.gif): Define un objeto que encapsula cómo interactúa un conjunto de objetos. El Mediator promueve el bajo acoplamiento evitando que los objetos se refieran entre sí explícitamente, y le permite variar su interacción de forma independiente.
 
    -  [Memento](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/memento.gif): Sin violar la encapsulación, captura y externaliza el estado interno de un objeto para que el objeto pueda restaurarse a este estado más adelante.

    -  [Observer](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/observer.gif): Define una dependencia de uno a muchos entre los objetos para que cuando un objeto cambie de estado, todos los objetos que dependan de él sean notificados y actualizados automáticamente.

    -  [State](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/state.gif): Permite que un objeto altere su comportamiento cuando cambia su estado interno. El objeto aparecerá para cambiar su clase.
 
    -  [Strategy](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/strategy.gif): Define una familia de algoritmos, encapsula cada uno de ellos y los hace intercambiables entre sí. Strategy permite que el algoritmo varíe independientemente de los clientes que lo utilizan.

    -  [Template Method](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/templateMethod.gif): Define el esqueleto de un algoritmo en una operación, aplazando algunos pasos a las subclases. Template Method permite a las subclases redefinir ciertos pasos de un algoritmo sin cambiar la estructura del algoritmo.

    -  [Visitor](https://github.com/MartaFonde/Cursos_c/blob/master/CarreraC%2B%2B/Apuntes/3.SOLID_PatronesDisenho/patronesComportamiento/visitor.gif): Representa una operación a realizar en los elementos de una estructura de objeto. Visitor le permite definir una nueva operación sin cambiar las clases de los elementos sobre los que opera.

- **Antipatrones de diseño**  

[reposGithub](https://github.com/cdiazal/SOLID_Patterns)

***

**26/04/2021**
### 4. INTRODUCCIÓN A C++ ###

- Alto rendimiento: 
  - Velocidad en ejecución y uso eficiente de la memoria (RAM, registros, caché, disco duro, ...)
  - Lenguaje compilado
  - Llamadas directas a SO y SDKs
  - Múltiples parámetros de optimización
  - Programación genérica: Templates
  - Acceso directo a la memoria. Control de gestión de la memoria.
  - Integración directa con el lenguaje ensamblador 
- Multiplataforma. Compilación por plataforma -> adaptación con cambio de algunos parámetros (llamadas SO)
- Depuración complicada (al tener control de SO, memoria, ..., dificultad compiladores para mostrar errores)
 
**Generación ejecutable**
- Preprocesador -> Interpreta directivas # (Macros, includes, ...) y genera código fuente     
     #include copia y pega en cualquier parte del código lo que tenga .hpp (p.ej } )
        int main(){
        #include "llave.hpp"
- Compilador -> Generación de código objeto (binario)   
    \>g++ -c -Wall holamundo.cpp --> holamundo.o    
- Linker -> Combinación de los módulos generados por compilador y módulos externos (librerías) para generar un ejecutable o librería  
    \>g++ -o hola.exe holamundo.o


**Tipos básicos**: bool, char, wide char, int, double, float, enum, int the_array[]  
Punteros: int *pEntero = &entero  
Sólo los char tienen tamaño fijo (1byte). El resto depende de la implementación (compilación, plataforma, arquitectura, ... )

**27/04/2021**

Modificadores:
- Unsigned: el valor no puede ser negativo.
- Signed: Sirve únicamente para char (por defecto el resto ya son).
- Short: Valor entero que es mayor o igual que char y menor o igual a int.
- Long: Valor entero que es mayor o igual a int.
- Const: Variables que no pueden cambiar su valor durante la ejecución del programa.
- Static: Variables que mantienen su valor aunque su scope haya acabado.
- Volatile: Herramienta que le dice al compilador que la variable puede cambiar su valor durante la ejecución (No puede ser optimizado).

Scope: Vida que tiene una variable. 
El scope de cualquier variable es dependiente del bloque en el que se encuentre.

    int a = 5;
    {
        int b = 4;
        a = b   //ok
    }
    a = b   //falla: b no está declarada

Conversiones:
- int a = static_cast<int>(5.54);  
- const_cast -> Quitar/añadir el modificador const a una variable (!!puede dar un valor indefinido si la variable original era const)  
- dynamic_cast<tipo>() -> Polimorfismo
- reinterpret_cast<tipo>() [ == int y=(int)x] -> Conversión a un tipo cualquiera (= valor reconvirtiendo si tipos = tamaño)

Creación de un tipo (using ó typedef): 
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
- Parámetros y valores de retorno.   

        void ejemplo (int valor,
              int& referencia,
              int *puntero);
              
        void ejemplo2(const int valor,
                      const int& referencia,
                      const int *puntero);

        void ejemplo3(int fijo,
                      int defecto=0);


- Sobrecarga y static  
El modificador static indica que la variable no está asociada al scope y se mantendrá durante toda la ejecución del programa.

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


**Organización del código**  
Declaraciones de funciones  
- Ficheros aparte: Utilización de las mismas funciones en diferentes módulos de compilación.
- Fichero con código fuente y fichero de cabecera(header)
- Separación de la declaración y la definición.

Tipos de ficheros
- Ficheros de definiciones: .cpp, .mm, etc
    - Incluyen ficheros de cabecera 
    - Definición de funciones
    - Definición de variables globales(evitarlas)
    - Son las unidades de compilación

- Ficheros de declaraciones o cabecera (headers): .hpp, .h 
    - Declaración de funciones. 
    - Declaración de tipos nuevos: clases y estructuras, etc...
    - Declaración de templates 
    - Declaración de variables globales (evitarlas)
    
Unidades de compilación  
- Por cada fichero .cpp se crea un fichero objeto compilado.  
- Se realiza la compilación una vez “expandido” el código de los ficheros incluidos con la directivas de preprocesador.   
- Las cabeceras contenidas en un determinado fichero se pre-procesan y compilan. (stdafx) 
    - Evitar cabeceras cambiantes o poco utilizadas. 

[reposGitHub](https://github.com/OpenWebinarsNet/openwebinars_cpp_fundamentos)


***

**29/04/2021**

### 5. CURSO DE GIT ###

- Control versiones de código **distribuido**.
- Funcionalidad distribuida. No depende de un repositorio central (SVN) ni de la red.
- Ramas -> divergencia respecto al flujo principal de funcionalidad. +Control
- Merges: fusión.
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
fter) puntero a un hash id revisión + actual -> HEAD  
Rango divisiones podemos indicar HEAD  y -3 hacia atrás  
$ git log --pretty=format:"%h %an %ar - %s" [funciona sin format]  
$ git show 7651c55 -> fich que hay en una revisión (cambios realizados)  

$ git diff -> compara lo que hay en working directory y commit
$ git diff --staged -> compara working directory con staged (staged == cached)

Clonar repositorio github  
(1º $ git init)
$ git remote add origin https://github.com/sharkdp/bat  
$ git fetch origin -> recupera lo que hay en origin (muestra información versiones)  
$ git pull origin master -> descarga origin a mi master
$ git branch -v -a -> ramas disponibles  

origin: nombre que le damos como norma a la referencia de repos remoto

$ git log --oneline:
(origin/master) de la fuente con la que me he conectado
master -> en mi equipo  
$ git push

$ git clone url . (. -> en path actual, si no crea un dir) init, fetch y pull implícitos 

$ git push origin master: para subir proy con cambios -> introducir credenciales

Deshacer cambios:  
$ git checkout master : Commit -> working directory  

$ git checkout -- nombreArchivo (ó . q reemplaza todo) -> traer de la revisión X los fich indicados al path actual  
p.ej. $ git checkout HEAD(o id hash o tag) fichero  
$ git checkout HEAD~1 fichero  -> un menos que el que está arriba  
$ git checkout HEAD -- . -> recupera todo de la ult versión

$ git reset : Staged -> working directory  
$ git reset HEAD file3

Si el fich está en staged o en commit lo podemos recuperar. Si está en working directory no

$ git reset --hard -> 1º trae de commit a working dir la versión indicada 2º todo lo que estea en staged lo borra  
$ git reset --hard HEAD~1 -> trae la versión anterior a HEAD

$ git revert id -> elegimos que fich revertir
$ git revert HEAD...HEAD~2 --no-edit -> rango. Aplica todo (no elección de fich)

**Ramas**  
Establecer líneas de desarrollo divergentes que parten de la versión del código en rama principal  
Experimentos, nueva funcionalidad... si se aprueba podemos fusionar código completo  

$ git branch -> ver ramas  
$ git branch -a -v -> con ramas remotas + info rama (últ commit)  
$ git branch nuevaRama ramaOrigen   
$ git checkout nombreRama -> cambio a rama

$ git merge nuevaRama ramaPpal -> conmuto/fusiona. Aplica cambios de nuevaRama a Ppal. Elimina lo que había en Ppal (= contenido en ambas ramas)  

$ git branch -d nuevaRama -> elimina rama  

$ git checkout -b newRama -> crea y nos posiciona en nuevaRama  

$ git diff HEAD HEAD~2 -> rango

$ git log -p -n 2 -> aprobaciones versiones + diff + autoria + fecha. -n 2 dos cambios hacia atrás  
$ git log --since="2 weeks ago" --until="2 days ago"  

**git blame**
Filtra autoría de quien ha hecho cambios.  
$ git log -n 15 --oneline -> últimos 15 cambios  
$ git blame scr/output.rs -> autores de commits en el archivo  
$ git blame -L 6,8 scr/output.rs -> autores que han tocado líneas 6 y 8  

**Cherry Picking**  
(Picotear) commits individuales >  detallistas acerca que cuáles de esos commits queremos unir / merge.  
$ git cherry-pick origin/master 5d5bf61 -> Merge de un commit concreto  
$ git cherry-pick --continue

**3/05/2021**  
**Git rebase**
Reestructurar commits y asegurarnos de que son comprensibles antes de subir/push los cambios.  
Condensar varios commits (p. ej commits + antiguos)  Sanear histórico de los proj
Recomendación: Sólo deberíamos hacer rebase de commits que no hayamos compartido con otras personas vía push. El proceso de rebasing de commits provoca que los hash_id commit-ids cambien, lo cual puede resultar en pérdida de commits futuros.  

$ git rebase --interactive --root -> interactive carga pantalla para indicar que commits condenso. root desde donde empiezo a hacer el rebase (1er commit)  
$ git rebase --interactive HEAD HEAD~4 -> rango  

pick -> commit que se queda  
squash -> Condensado 
reword -> reeditar msg de commit  

**Etiquetas**  
Cambios incorporados en versión. 
- Ligeras: $ git tag v1.4-lw  ->  puntero a un commit especifico.
- Anotadas:  $ git tag -a v1.5 -m "Esta es la versión 1.5" -> obj entero. +info

$ git show v1.5  

**Movernos entre commits**  
Recuperar un commit específico y volver a trabajar con él.  
$ git commit --amend -> Enmendar desde staged fich no incluidos en commit. Movemos puntero hacia atrás y luego hacia delante (elimina commit enmendado)  

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
$ git stash apply -> intenta recuperar lo que había. Conflicto. Escogemos lo que permanece.  
$ git add README.md -> escogemos último creado  


**Repositorios Corporativos**  
GitHub y GitLab -> servicios de hosting para Git.  GitLab, además, es software para descargar en local.  

**DevOps**  
Colaboración entre equipos. Mantener flujo de despliegue e integración continua.  

***
**06/05/2021**
### Curso de Programación orientada a objetos con C++ ###
**Memoria**
- Stack
- Heap

**Punteros**  



