// The sum of all the numbers divisible by 7 from 1 to 1000
public class Main {  
  public static void main(String[] args) {
     final int LOWERBOUND = 7;    
     final int UPPERBOUND = 1000;  
     int sum = 0;  
                   
   
     int number = LOWERBOUND;
     while (number <= UPPERBOUND) {
         
        sum = sum + number;
        number = number + 7;          
     }
 
     System.out.println("The sum of all the numbers divisible by 7 from 1 to 1000 is: " + sum);
  }
}
