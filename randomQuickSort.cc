//This program will gather a random pivot element 
//to sort by using merge sort
//User will be requested and n amountof elements 
//and from those n number  elements a random pivot will be chosen

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Karls
 */
import java.util.Random;
import java.util.Scanner;
    

//project will be in reference to project5
			public class QuicksortMain {
   public static void main(String args[]){
     int numbers;
     Scanner choice = new Scanner(System.in);
     QuicksortRandom sort = new QuicksortRandom();
           
     System.out.println("Please enter the amount of values to sort:");
       
     numbers = choice.nextInt();
       
     System.out.println("\n\n");
        
     //System.out.println(numbers);    
       
     //Generate random numbers according to desired mac of elements in an array 
     Random random = new Random();
     int array1[]= new int[numbers];
     int array2[]= new int[numbers];
     for(int i =0; i < numbers; i++){
       //fill in an array with random values
       array1[i] = Math.abs(random.nextInt(numbers));
     }
      
     for(int i =0; i < numbers; i++){
       //fill in an array with random values
       array2[i] = i;
     }
  
     //tested if correct amount of values where produced
     
     /*****************************************/
     //BEST CASE 
     //display the timein nanoseconds
     long startTime1 = System.nanoTime();

     sort.randomElementPivot(0, numbers - 1,array1);

     long stopTime1 = System.nanoTime();
     long elapsedTime = stopTime1 - startTime1;
     System.out.println("\nBEST CASE");
     System.out.println(elapsedTime + " nanoseconds");
     for(int i =0; i < numbers; i++){
       //fill in an array with random values
       System.out.print(array1[i]);
       System.out.print(" ");
     }

     /*************************************/
     //WORST CASE
     long startTime2 = System.nanoTime();

     sort.randomElementPivot(0, numbers - 1,array2);

     long stopTime2 = System.nanoTime();
     long elapsedTime2 = stopTime2 - startTime2;
     System.out.println("\nWORST CASE");
     System.out.println(elapsedTime + " nanoseconds");
     for(int i =0; i < numbers; i++){
       //fill in an array with random values
       System.out.print(array2[i]);
       System.out.print(" ");
     
     }
      
      
      
       
   }
    
			}
