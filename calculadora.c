#include <16F877a.h>
#device ADC = 10
#use delay(crystal = 20000000)
#FUSES NOWDT, NOBROWNOUT, NOLVP

//Directiva para utilizar puerto USART
#use rs232(BAUD=9600, XMIT = PIN_C6, RCV=PIN_C7)

int8 sumar(int8 a, int8 b)
{
   int8 resultado1 = a + b;
   return resultado1;
}


int8 resta(int8 R1, int8 R2)
{
   int8 resultado2 = R1 - R2;
   return resultado2;
}

int8 mult(int8 M1, int8 M2)
{
   int8 resultado3 = M1 * M2;
   return resultado3;
}

int8 div(int8 D1, int8 D2)
{
   int8 resultado4 = D1 / D2;
   return resultado4;
}

void main()
{
   setup_uart(9600); //Configurar baudios
   
   printf("Hola mundo\n\r");
   
   int8 num1 = 2;
   int8 num2 = 3;
   int8 res1, res2, res3, res4;

   res1 = sumar(num1,num2);
   res2 = resta(num1,num2);
   res3 = mult(num1,num2);
   res4 = div(num1,num2);
   
   printf("%u + %u: %u\n\r",num1,num2,res1);
   printf("%u - %u: %u\n\r",num1,num2,res2);
   printf("%u * %u: %u\n\r",num1,num2,res3);
   printf("%u / %u: %u\n\r",num1,num2,res4);
   while (1)
    {
    
    }
}
