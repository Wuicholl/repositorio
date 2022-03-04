#include <main.h>

#include <LCD.C>
long  x;  //el resultado del convertidor
void main()
{
   setup_adc_ports(AN0_VREF_VREF);  //En esta l�nea se configura el ADC
   setup_adc(ADC_CLOCK_DIV_64);     //la velociad de conversi�n
   lcd_init();                      //se configura la pantalla LCD

   while(TRUE)
   {
   delay_ms(50);
   x=read_adc();
   lcd_gotoxy(1,1);
   printf(LCD_PUTC, "\r valor=%Lu ",x);



      //TODO: User Code
   }

}
