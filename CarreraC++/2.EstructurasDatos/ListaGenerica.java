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