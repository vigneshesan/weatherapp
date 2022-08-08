// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int a[5] = {1,2,3,4,5}; //input array
   int even[5] = {0,0,0,0,0}; // even array initialized
   int sum_even = 0; // variable for holding even array sum
   int odd[5] = {0,0,0,0,0}; // odd array initialized
   int sum_odd = 0; // variable for holding odd array sum
   
   /* find out if the number is even and assign to the corresponding array */
   for(int i = 0; i<=4; i++){
       if(a[i]%2 == 0){
           even[i]=a[i];
       }
       else {
           odd[i]=a[i];
       }
   }
   
   /* print the even number array and sum all the array elements */
   for (int i=0; i<=4; i++){
       printf ("even %d \n", even[i]);
       sum_even = sum_even + even[i];
   }
     printf ("sum_even %d \n ", sum_even);
     printf ("\n");
   
  /* print the odd number array and sum all the array elements */  
   for (int i=0; i<=4; i++){
       printf ("odd %d \n", odd[i]);
       sum_odd = sum_odd + odd[i];
   }
   printf ("sum_odd %d", sum_odd);
   
    return 0;
}
