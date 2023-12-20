public class HiloParImpar implements Runnable {
    private int tipo;

    public HiloParImpar(int tipo) {
        this.tipo = tipo;
    }

    public void run() {
        if (tipo == 1) {
            for (int i = 1; i <= 100; i++) {
                if (i % 2 == 0) {
                    System.out.println(i + " creado con el id: " +Thread.currentThread().getId());
                }
            }
        } else if (tipo == 2) {
            for (int i = 101; i <= 200; i++) {
                if (i % 2 != 0) {
                    System.out.println(i + " creado con el id: " +Thread.currentThread().getId());
                }
            }
        }
    }

    public static void main(String[] args) {
        HiloParImpar hilo1 = new HiloParImpar(1);
        HiloParImpar hilo2 = new HiloParImpar(2);
    
        Thread thread1 = new Thread(hilo1);
        Thread thread2 = new Thread(hilo2);
        
        thread2.start();
        try  
        {    
        	thread2.join();    
        }catch(Exception e){System.out.println(e);}
        
        thread1.start();
    }
    
}

