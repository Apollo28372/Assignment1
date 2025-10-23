
#include "mylib.h"
int power(int a,int b)

    {
	int i=0,c=a;
    for (;i<(b-1);i++){
	       a*=c;}
    return a;
    }


int isArmstrong(int num)


    {
    	
    	
    int neko=num,peach=0,i=0;
    short int mario=0;


    if(num<0){return 0;}
    else if (num<=9){return 1;}

    while(neko!=0){mario++;neko/=10;}

    neko=num;

    for(;i<mario;i++){
	    peach+=power((neko%10),mario);
	    neko/=10;
	
        }

    if(peach==num){return 1;}

    else{return 0;
        }
    
	
	}
    
    
int isAdams(int num)
    
	{
	
	if(num<0){
        return 0;}
	else if(num<4){
	    return 1;
	    }
      if(num<10){
        return 0;
	    }
	int reverse=0,square=num*num;
	
	while(num!=0){
		reverse*=10;
		reverse +=num%10;
		num/=10;
	    }
	
	reverse*=reverse;
	
	while(reverse!=0){num*=10;
		num+=reverse%10;
		reverse/=10;
	    }
	
	if(num==square){
	    return 1;
	    }
	
	else{
		return 0;
	    }
	

	}
	
	
	
int isPrimePalindrome(int num)

    {
    	
    	
    	if(num<=1){
    		return 0;
		}
    	else if(num==2){
    		return 1;
		}
    	int reverse=0, monkey=num;
    	
    	while(monkey!=0){
    		reverse*=10; reverse+=monkey%10;monkey/=10;
    		
		}
		
		if(reverse!=num){
			return 0;
		}
		
		else {
			for(monkey=2;monkey<num;monkey++){
				if(!(num%monkey)){
					return 0;
				}
			}
		}
		
		return 1;
		
		
	}
