#include "mbed.h"

DigitalIn  input_1  (p13);
DigitalIn  input_2  (p16);
DigitalOut output_1 (P23);
DigitalOut output_2 (P25);
 
int main(){
   
 
while(1){ 
 
    if (input_1 == 1){  //turn on p13 if pressed
       output_1 = 1;
       output_2 = 0;
    }
    else 
        if (input_2 == 1){
           output_2 = 1;
           output_1 = 0;
    }
        else{ 
           output_2 = 0;
           output_1 = 0;
 
           return 0;
        }
 
}
}