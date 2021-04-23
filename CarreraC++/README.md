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

**20/04/2021 - 21/04/2021**

-	Fundamentos de la programación estructurada. 
-	Ciclo de desarrollo de una aplicación: análisis, diseño y codificación.
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


#### 2. INTRODUCCIÓN A LAS ESTRUCTURAS DE DATOS ####

**22/04/2021**

Estructuras de datos en Java  

- Análisis de algoritmos
    - Cómo medir la velocidad de un algoritmo. 
    - Notación O grande (big O) o crecimiento de funciones: nos indica qué tan rápido es un algoritmo,   
    y que no tiene en cuenta los coeficientes, sólo el factor dominante.  
       *O(n) siendo n el nº de operaciones* 
- Estructuras de datos
    - Es una forma de organizar una colección de datos en una computadora para que puedan ser utilizados de manera eficiente.  
    Colección de datos relacionados y preparados que permite ciertas operaciones para ese conjunto, dándonos más juego, permitiéndonos poder hacer algoritmos de una forma más eficiente, y más segura.  
        - Arrays, listas ligadas, colas, pilas, montículos.
- Datos primitivos y compuestos
    - Primitivos: Booleanos, caracteres, enteros, números de punto flotante, punteros.
    - Compuestos: Registros u objetos, string, array, 
- Tipos de datos genéricos

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

    Se especifca el tipo de dato a través de <>
         
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

    También podríamos decir que el tipo de dato usado en valores sean solo aquellos que extienden de la interfaz Usuarios, evitando así, que podamos usar cualquier otro tipo de dato, para ello se haría de la siguiente manera

        'public class Pareja<K, V extends Usuarios> { }' 
 
- Tipos de datos abstractos    
 
    También conocidos como TAD o ADT por sus siglas en inglés podría definirse como un modelo matemático para definir tipos de datos, con un comportamiento esperado. En Java normalmente los ADT, se escriben en interfaces.

        public interface Pila<T>{
            void push(T t)

            void T pop()

            void T peek()

            boolean isEmpty()

            int size()
        }

    Ejemplos:  montículo, el árbol, o la pila, ...  luego estas se implementan con arrays por ejemplo que son simplemente una estructura de datos para implementar un ADT de una lista por ejemplo.
    Según como se implementen, podrán tener un coste mayor o menor.


**23/04/2021**

- Arrays estáticos
- Arrays dinámicos
- Listas ligadas
- Pilas
- Colas
- Montículos
