#include <stdio.h>

int main() {

    int unit;
    float bill = 0.00;
    float discount;
    
    scanf("%d",&unit);
    
    if(unit<0 || unit>1000000){
        printf("Invalid Input!");
        return 0;
    }
    else if(unit<=100){
        bill = unit*5;
        
    }
    
    else if(unit>100 && unit<=300){
        bill = 100*5 + (unit-100)*7;
       
    }
    
    
    
    else {
      bill =  (100*5) + (200*7) + (unit-300)*10 ;
        
    }
    
    if(bill<=1200 && bill>0)
    {
        discount= bill*0.1;
        bill = bill - discount;
        
    }
    
    printf("The electricity bill is: %.2f.",bill);
    
    return 0;
}
       
    
    