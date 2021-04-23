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

**20/04/2021 - 21/04/2021**

-	Fundamentos de la programaci�n estructurada. 
-	Ciclo de desarrollo de una aplicaci�n: an�lisis, dise�o y codificaci�n.
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


#### 2. INTRODUCCI�N A LAS ESTRUCTURAS DE DATOS ####

**22/04/2021**

Estructuras de datos en Java  

- An�lisis de algoritmos
    - C�mo medir la velocidad de un algoritmo. 
    - Notaci�n O grande (big O) o crecimiento de funciones: nos indica qu� tan r�pido es un algoritmo,   
    y que no tiene en cuenta los coeficientes, s�lo el factor dominante.  
       *O(n) siendo n el n� de operaciones* 
- Estructuras de datos
    - Es una forma de organizar una colecci�n de datos en una computadora para que puedan ser utilizados de manera eficiente.  
    Colecci�n de datos relacionados y preparados que permite ciertas operaciones para ese conjunto, d�ndonos m�s juego, permiti�ndonos poder hacer algoritmos de una forma m�s eficiente, y m�s segura.  
        - Arrays, listas ligadas, colas, pilas, mont�culos.
- Datos primitivos y compuestos
    - Primitivos: Booleanos, caracteres, enteros, n�meros de punto flotante, punteros.
    - Compuestos: Registros u objetos, string, array, 
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

    Tambi�n podr�amos decir que el tipo de dato usado en valores sean solo aquellos que extienden de la interfaz Usuarios, evitando as�, que podamos usar cualquier otro tipo de dato, para ello se har�a de la siguiente manera

        'public class Pareja<K, V extends Usuarios> { }' 
 
- Tipos de datos abstractos    
 
    Tambi�n conocidos como TAD o ADT por sus siglas en ingl�s podr�a definirse como un modelo matem�tico para definir tipos de datos, con un comportamiento esperado. En Java normalmente los ADT, se escriben en interfaces.

        public interface Pila<T>{
            void push(T t)

            void T pop()

            void T peek()

            boolean isEmpty()

            int size()
        }

    Ejemplos:  mont�culo, el �rbol, o la pila, ...  luego estas se implementan con arrays por ejemplo que son simplemente una estructura de datos para implementar un ADT de una lista por ejemplo.
    Seg�n como se implementen, podr�n tener un coste mayor o menor.


**23/04/2021**

- Arrays est�ticos
- Arrays din�micos
- Listas ligadas
- Pilas
- Colas
- Mont�culos
