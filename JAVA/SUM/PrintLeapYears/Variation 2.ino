public class Main {
  public static void main(String[] args) {
     final int limiteInferior = 999;
      final int limiteSuperior = 2010;
      int counter  = 0;    
 
      int number = limiteInferior;
      while (number <= limiteSuperior) {
		if ( number % 4 == 0 && (number % 100 != 0 || number % 1000 == 0)) 
         {
         	counter++; 
			System.out.println(number + "AD");
         }
        number++;  // Next number
      } 
      // Print the result
      System.out.println("Total number of leap years " + counter);
 
   }
}
