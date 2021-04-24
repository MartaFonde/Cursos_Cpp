import java.util.LinkedList;

public class PriorityQueueEjercicio {
    public static void main(String[] args) {
        LinkedList<Character> lista = new LinkedList<Character>();
        
        lista.add('o');
        lista.addFirst('h');
        lista.addLast('a');

        lista.add(2, 'l');  

        for (Character character : lista) {
            lista.get(0);
            System.out.print(character);
        }

        // lista.remove();
        // lista.remove(2);
        // lista.removeFirst();

        System.out.println(lista.get(0));
        

    }
}