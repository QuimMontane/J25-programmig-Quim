public class Main {
  public static void main(String[] args) {
    System.out.println("Hello World");
     final int limiteInferior = 1;
      final int limiteSuperior = 1000;
      int sum  = 0;  
      
      int number = limiteInferior;
      while (number <= limiteSuperior) {
            // number = LOWERBOUND, LOWERBOUND+1, LOWERBOUND+2, ..., UPPERBOUND for each iteration
         if ((number % 3 == 0 || number % 5 == 0 || number % 7 == 0)) { 
         if (( number % 15 != 0 && number % 21 != 0 && number % 35 != 0 && number % 105 != 0 )){
         sum += number;
         }
         number ++; 
      } 
      // Print the result
      System.out.println("The sum of all the numbers divisible by 3, 5, or 7, but not by 15, 21, 35, or 105 and from 1 to 1000 is:" + sum);
  
}
}
}
