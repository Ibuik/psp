//Clase Hilo1 extiende Thread
public class Hilo1 extends Thread {
	private int x;

    // Constructor de la clase
	Hilo1(int x) {
		this.x = x;
	}

    // metodo run -> funcionalidad del hilo
	public void run() {
		for (int i = 0; i < x; i++)
			System.out.println("Ejecutando dentro del Hilo... " + i + " con el id" + getId());
	}

	public static void main(String[] args) {
		Hilo1 p1 = new Hilo1(10);
		p1.start();
		Hilo1 p2 = new Hilo1(20);
		p2.start();
		Hilo1 p3 = new Hilo1(30);
		p3.start();
	}// main

}//PrimerHilo