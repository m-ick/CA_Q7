#include "mbed.h"
/*
    This program toggle the LEDs with the intervals of
    LED1 - every 2 seconds
    LED2 - every 5 seconds 

*/

DigitalOut every2s(LED1);
DigitalOut every5s(LED2);

int main()
{    
    printf("Both Led 1 and Led 2 are off\r\n"); 
    while(true){
        wait_us(2000000);
        every2s = 1;
        every5s = 0;
        printf("Led 1 is on, Led 2 is off\r\n");
        wait_us(5000000);
        every2s = 0;
        every5s = 1;
        printf("Led 1 is off, Led 2 is on\r\n");
    }
    return 0;
}
