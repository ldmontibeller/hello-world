#include "serial_print.h"
#include "mcc_generated_files/eusart2.h"

void EUSART_SendString(char *str)
{   
    for(int i = 0; str[i] != '\0'; i++) 
    {
        while(EUSART2_is_rx_ready() != 0){}
        EUSART2_Write(str[i]);
   }
}