//random pivot will be gathered and 
//the valus will be sorted using merge sort 
//based on the indicated pivot



import java.util.Random;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Karls
 */
//100
//1000
//100
public class QuicksortRandom {
			 //declare function for option 2
    public void randomElementPivot(int begin, int end, int[] array)
			 {
			   //begin random pivot
			   if ((end - begin) <= 0)
			     return;
        
			   //generate a random pivot
			   else
			     {
			       Random rand = new Random();
			       //generate a random usng the elements in the array
			       int pivotRandom = begin + rand.nextInt(end - begin + 1);
			       swap(pivotRandom, end, array);

			       //start pivot comparison at end
			       int pivot = array[end];
			       //begin comparisom
			       int positioning = positioning(begin, end, pivot, array);
			       //compare through beginning and then end
			       randomElementPivot(begin, positioning - 1,array);
			       //compare trough pivot and end
			       randomElementPivot(positioning + 1, end, array);
			     }
			 }
    
    
    public int positioning(int left, int right, long pivot, int[] array)
			 {
			   //declare left and right comparison
			   int leftPtr = left - 1;
			   int rightPtr = right;
			   while (true)
			     {
			       //depending on pivot start from begginning to pivot
			       while (array[++leftPtr] < pivot)
				 ;
            
			       //depending on pivot start from end to pivot
			       while (rightPtr > 0 && array[--rightPtr] > pivot)
				 ;

			       //once the comparisons surpass each other then exit
			       if (leftPtr >= rightPtr)
				 break;
			       else
                
				 //else keep serching for swaps
				 swap(leftPtr, rightPtr, array);
			     }
        
			   //keep traversing
			   swap(leftPtr, right, array);
        
			   //returning positioning
			   return leftPtr;
			 }
    
			 //swap elements by using a temp value and reassigning
 public  void swap(int int1, int int2, int[] array)
 {
     int temp = array[int1];
			   array[int1] = array[int2];
			   array[int2] = temp;
			 }

    
		       }
  
