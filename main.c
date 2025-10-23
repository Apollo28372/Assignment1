#include <stdio.h>
#include "mylib.h"
#include "arraylib.h"
/* The following Program doesn't Handle all errors and is limited to  integer DATA Type */

int main() {
	  int choice,choice1, num,size=0,value=0,b,k,error1;
	  char ch;
	   do {
        printf("\n\n\n============= MENU ================\n");
        printf("1. Number Operations \n");
        printf("2. 1D INTEGER Array Operations  \n");
        printf("3. Exit  \n");
        printf("Enter your choice: ");
        error1=scanf("%d", &choice1);
        if(!error1){
        	printf("Invalid choice! Please select between 1  %c  3.\n\n",'-');
        	while((ch=getchar() )!='\n' && ch!=EOF);
        	continue;
		}
        if (choice1 == 3) {
        	
            printf("Exiting program. KABOOOOOMMM!!!! Goodbye!\n\n");
            break;
        }
        if(choice1<1||choice1>3){
        	printf("Invalid choice! Please select between 1  %c  3.\n\n",'-');
        	continue;
        	
		}/* Super Mario was released on 1985 and it  had an huge impact on console development and popularity */
	   
	   switch (choice1) {
            case 1:
            	do {
                    printf("\n\n\n=====   MENU FOR NUMBER OPERATIONS   =====\n");
                    printf("1. Check Armstrong Number\n");
                    printf("2. Check Adams Number\n");
                    printf("3. Check Prime Palindrome Number\n");
                    printf("4. Exit Number Operations \n");
                    printf("Enter your choice: ");
                    error1=scanf("%d", &choice);
                    if(!error1){
        	                printf("Invalid choice! Please select between 1  %c  4.\n\n",'-');
        	                while((ch=getchar() )!='\n' && ch!=EOF);
        	                continue;
		                    }
 
 
                    if (choice == 4) {
                        printf("Exiting Numbers Operations \n\n");
                        break;
                        }
                        if(choice<1||choice>4){
                        	printf("Invalid choice! Please select between 1  %c  4.\n\n",'-');
                        	continue;
						}
						do{
						
                    printf("\nEnter a number: ");
                    error1=scanf("%d", &num);
                    if(!error1){
                    	printf("Invalid input. ");
                    	while((ch=getchar() )!='\n' && ch!=EOF);
        	                continue;
                    	
					}}while(!error1);
                    printf("\n");
                    switch (choice) {
                        case 1:
                            if (isArmstrong(num))
                                printf("%d is an Armstrong number.\n", num);
                            else
                                printf("%d is NOT an Armstrong number.\n", num);
                            break;
                        case 2:
                            if (isAdams(num))
                                printf("%d is an Adams number.\n", num);
                            else
                                printf("%d is NOT an Adams number.\n", num);
                            break;
                        case 3:
                            if (isPrimePalindrome(num))
                                printf("%d is a Prime Palindrome number.\n", num);
                            else
                                printf("%d is NOT a Prime Palindrome number.\n", num);
                            break;
                        
                                
                       }
               }           while (choice != 4);
            break;
	        case 2:
	        	printf("\n\n\n\n");
	        	do{
				
	        	printf("Enter the number of elements in the 1D Array  :  ");
	        	error1=scanf("%d",&size);
				if(!error1){
        	                printf("Invalid choice! Please Enter an integer \n\n");
        	                while((ch=getchar() )!='\n' && ch!=EOF);
        	                continue;
		                    }}
	        	while(size<1);
	        	int arr[size],q=0;
	        	printf("\n");
	        	while(q<size){
	        		printf("Enter the %d position Element of the Array  :  ",(q+1));
	        		error1=scanf("%d",&arr[q]);
	        		if(!error1){
        	                printf("Invalid choice! Please Give an Integer Value.\n\n");
        	                while((ch=getchar() )!='\n' && ch!=EOF);
        	                continue;
		                    }
		            q++;
				}
	        	
	        	
	        	do {
                    printf("\n\n\n\n============= MENU FOR 1D INTEGER ARRAY OPERATIONS =============\n");
                    printf("1. Find the index of the greatest element \n");
                    printf("2. Find the index of the smallest element \n");
                    printf("3. Find the average of the array  \n");
                    printf("4. Display the Array \n");
                    printf("5. Search for an element in the Array  \n");
                    printf("6. To reverse the array  \n");
                    printf("7. To sort the Array in non decreasing order \n");
                    printf("8. To find the Second Highest Element of the Array .\n   In case the highest element occurs 2 times. It will be considered the second highest element \n");
                    printf("9. To rotate an Array By K positions \n");
                    printf("10. Exit ARRAY OPERATIONS  \n");
                    printf("Enter your choice: ");
                    error1=scanf("%d", &choice);
                    if(!error1){
        	                printf("Invalid choice! Please select between 1  %c  10.\n\n",'-');
        	                while((ch=getchar() )!='\n' && ch!=EOF);
        	                continue;
		                    }
                    if (choice == 10) {
                        printf("\n\n Exiting ARRAY OPERATIONS   \n\n");
                        break;
                        }
                    switch (choice) {
                        case 1:
                            printf("The Greatest Element is :  %d\n",findMaxIndex(arr,size));
                            break;
                        case 2:
                            printf("The Smallest Element is :  %d\n",findMinIndex(arr,size));
                            break;
                        case 3:
                            findAverage(arr,size);
                            
                            break;
                        case 4:
                            displayArray(arr,size);
                            break;
                        case 5:
                        	printf("\n Enter the value to be searched :  ");
                        	scanf("%d",&value);
                            LinearSearch(arr,size,value);
                            break;
                        case 6:
                            reverseArray(arr,size);
                            break;
                        case 7:
                            sortArray(arr,size);
                            break;
                        case 8:
                            b=Sec_Highest(arr,size);
                            printf("\n The Second Highest Element is : %d \n",b);
                            break;
                        case 9:
                        	
                        	printf("\n Enter the  value of k : ");
                        	scanf("%d",&k);
                            rotate_k(arr,size,k);
                            break;
                            
                        
                        default:
                                printf("\nInvalid choice! Please select between 1  %c  10.\n\n",'-');
                       }
    

        
		}while(choice !=10);
		    break;
		    
	       	}
}while(choice!=3);return 0;}
