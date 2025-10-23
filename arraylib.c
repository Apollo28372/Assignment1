#include "arraylib.h"
#include <stdio.h>

int findMaxIndex(int arr[],int size){
	int i=0,Max=arr[0];
	for(;i<size;i++){
		if(Max<arr[i]){
			Max=arr[i];
			
		}
	}
	printf("\nThe following array has the greatest element at index :  ");
	i=0;
	for(;i<size;i++){
		if(Max==arr[i]){
			printf("%d    ",i);
		}
		}
	printf("\n");
	return Max;
}


int findMinIndex(int arr[],int size){
	int i=0,Min=arr[0];
	for(;i<size;i++){
		if(Min>arr[i]){
			Min=arr[i];
			
		}
	}
	printf("\nThe following array has minimum value at index  :  ");
	i=0;
	for(;i<size;i++){
		if(Min==arr[i]){
			printf("%d    ",i);
		}
        }
    printf("\n");
	return Min;
}
	
	
float findAverage(int arr[],int size){
	float Trio=0;
	int i=0;
	for(;i<size;i++){
		Trio+=arr[i];
	}
	Trio*=1.0;
	Trio/=size;
	printf(" The average is  :  %f   \n",Trio);
	return Trio;
	
	}
	
void displayArray(int arr[],int size){
	int i=0;
	printf("\n The following array is :  \n ");
	for(;i<size;i++){
		printf("   %c%d%c",'[',arr[i],']');
	}
	printf("\n");
	
}


int LinearSearch(int arr[],int size, int value)
    
	{
		
		
	int i=0,p=0;
	printf("The given value is at the following index :  ");
	for(;i<size;i++){
		if(value==arr[i]){
			printf("%d    ",i);
			p=1;
		}
	}
	if(p==0){printf("\n NONE. Element Not Found  ");
	}
	printf("\n");

return 0;


   }


void reverseArray(int arr[],int size)

   {
   	
   int arr2[size],i=0;
   for(;i<size;i++){
   	
   	    arr2[i]=arr[size-1-i];
   	   
        }	
   	i=0;
   	for(;i<size;i++){
   		arr[i]=arr2[i];
	   }
   	
   }
   
void sortArray(int arr[],int size)

   {
   	
   	int i=0, demons;
   	size--;
   	while(size !=0)
	   {
	   
   	    for(;i<size;i++){
   		    if(arr[i]>arr[i+1]){
   			    demons=arr[i+1];
   			    arr[i+1]=arr[i];
   			    arr[i]=demons;
		   }
   		
	   }
	i=0;
    size--;	   
	   
       }
   	
   	
   }

int Sec_Highest(int arr[],int size) {
	int i=1,a,b;
	for(;i<size;i++){
		
		if(i==1){
		      if(arr[0]>arr[1]){a=arr[0];b=arr[1];
		       }
	           else{a=arr[1];b=arr[0];
	            }
		}
	     else{ 
		      if(arr[i]>=a){b=a;a=arr[i];}
		       else{ 
			            if(arr[i]>b){b=arr[i];}
					}
		    }
		    
	}
    return b;

}


int rotate_k(int arr[],int size,int k) 
    {
    	
    int i=0;
	if(k>size){k%=size;}
	int arr1[size];
	for(;i<(size-k);i++){arr1[i+k]=arr[i];}
	i=0;
    for(;i<k;i++){arr1[i]=arr[size-k+i];}
    i=0;
    for(;i<size;i++){arr[i]=arr1[i];}
return 1;	
    	
    	
    } 
    
    

