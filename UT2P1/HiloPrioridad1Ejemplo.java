// Clase crea tres objetos de la clase HiloPrioridad1

public class HiloPrioridad1Ejemplo {
    public static void main(String args[]) {    
      HiloPrioridad1 h1 = new HiloPrioridad1("Hilo1");
      HiloPrioridad1 h2 = new HiloPrioridad1("Hilo2");
      HiloPrioridad1 h3 = new HiloPrioridad1("Hilo3");	
        
      h1.setPriority(Thread.NORM_PRIORITY);
      h2.setPriority(Thread.MAX_PRIORITY);    
      h3.setPriority(Thread.MIN_PRIORITY);   
      
      h1.start();	
      h2.start();
      h3.start();  	
  
     try {
        Thread.sleep(10000);
      } catch (Exception e) { }
  
  
      h1.pararHilo() ;
      h2.pararHilo() ;
      h3.pararHilo() ;
      
      System.out.println("h2 (Prioridad Normal): " + h2.getContador() + " La prioridad ha sido: " + h2.getPriority());
      System.out.println("h1 (Prioridad Maxima): " + h1.getContador() + " La prioridad ha sido: " + h1.getPriority());  	
      System.out.println("h3 (Prioridad Minima): " + h3.getContador() + " La prioridad ha sido: " + h3.getPriority());
  
    }
    
  }// HiloPrioridad1Ejemplo