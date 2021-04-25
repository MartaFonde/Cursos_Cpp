
public class ListaLigadaDoble<T> {
    public static final int MAX_SIZE = Integer.MAX_VALUE;
    private int size = 0;
    private Node head = null;


    private class Node{
        private Node nodoSiguiente;
        private T t;

        private Node(T t){
            this.t = t;
        }
    }

    public void insertarAlFinal(T dato) {
        if(size + 1 < MAX_SIZE) {
            Node nuevoNodo = new Node(dato);
            if(head == null) {
                head = nuevoNodo;
            }else {
                Node cursor = head;
                while(cursor.nodoSiguiente != null) {
                    cursor = cursor.nodoSiguiente;
                }
                cursor.nodoSiguiente = nuevoNodo;
            }
            size ++;
        }else {
                throw new OutOfMemoryError("Error: tamaño de la lista al maximo");
        }
    }
}    