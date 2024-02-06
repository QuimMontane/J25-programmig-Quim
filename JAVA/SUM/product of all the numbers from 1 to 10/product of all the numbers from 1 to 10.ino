// product of all the numbers from 1 to 10
public class Main {  
  public static void main(String[] args) {
     final int LOWERBOUND = 1;    
     final int UPPERBOUND = 10;  
 
     int product = 1;  
   
     int number = LOWERBOUND;
     while (number <= UPPERBOUND) {
       
        product = product * number;
        number = number + 1;  
     }
     
   
     System.out.println("The product of all the numbers from 1 to 10 is: " + product);
  }
}
