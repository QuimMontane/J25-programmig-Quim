// sum of the square of all the numbers from 1 to 100
public class Main {  
  public static void main(String[] args) {
     final int LOWERBOUND = 1;    
     final int UPPERBOUND = 100;  
     int sumOfSquares = 0;  
   
     int number = LOWERBOUND;
     while (number <= UPPERBOUND) {
        sumOfSquares = sumOfSquares + (number * number);
        number = number + 1;  
     }
     
 
     System.out.println("The sum of the squares of all the numbers from 1 to 100 is: " + sumOfSquares);
  }
}
