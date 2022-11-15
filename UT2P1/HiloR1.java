//Clase implementa interfaz Runnable.
// La interfaz Runnable añade la funcionalidad de Hilos a una clase con solo implementarla
// Runnable proporciona un único método "run"
public class HiloR1 implements Runnable {

    //método run -> funcionalidad del hilo
	public void run() {
		for (int i=1; i<=5; i++)
		System.out.println("Hola desde el Hilo: " +  Thread.currentThread().getId() + 
		"\nNombre del hilo: " + Thread.currentThread().getName() +
		"\nValor del contador i: " + i);
	}
}