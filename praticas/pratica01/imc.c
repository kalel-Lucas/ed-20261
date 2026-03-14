        #include <stdio.h> 

    float devolve_IMC(float altura, float peso) {
         if (altura<=0.0 || peso<=0.0)
             return 0.0;
         {
            return peso/(altura*altura);
         };
     }

     int main () {
         printf("\n\tResultado do IMC => %.2f",devolve_IMC(1.75,0.0));
         printf("\n\tResultado do IMC => %.2f",devolve_IMC(1.76,50.0));
         printf("\n\tResultado do IMC => %.2f",devolve_IMC(1.75,75.0));
         printf("\n\tResultado do IMC => %.2f",devolve_IMC(1.68,89.0));
         printf("\n\tResultado do IMC => %.2f",devolve_IMC(1.92,70.0)); 
         printf("\n\tResultado do IMC => %.2f",devolve_IMC(2.00,100.0));
         printf("\n\tResultado do IMC => %.2f",devolve_IMC(1.76,67.0));
          

         
     }