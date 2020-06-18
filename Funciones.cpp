/*Por cada uno de los empleados que trabajan en una fábrica se ingresa por cada uno de ellos el valor de
cada hora y la cantidad de horas trabajadas , se pide realizar una función sin tipo, que devuelva al programa principal el sueldo a cobrar
por el empleado:

Sueldo = 0 (cero), si la cantidad de horas trabajadas es 0 (cero).
Caso contrario el sueldo se calcula teniendo en cuenta que se le realiza un descuento del 11% para jubilación y de un 3% para obra social,
y si trabajó más de 60 hs tiene un premio de 5% sobre el total de cantidad de horas*valor de la hora.

Mostrar además en el programa principal el concepto total en pago de sueldos por la fábrica.

NOTA: El final de datos se da ,cuando ingresa un valor de hora igual a 0 (cero).*/

#include <stdio.h>
#include <stdlib.h>

int Sueldoacobrar(int CHT,float VHT);


float SFE=0; //Sueldo final con descuentos del empleados
float SUE=0; // Sueldo del empleado
float SUED=0; //Sueldo con descuento del 14%
float SAE=0; //Sueldos a pagar por la empresa



int main ()
{

  float X=0; //valor de cada hora
  int Y=0; //cantidad de horas trabajadas
  float Z=0; //resultado


  printf("Ingrese el valor de la hora: ");
  scanf("%f",&X);
  printf("Ingrese la cantidad de la hora: ");
  scanf("%f",&Y);

  if(VCH!=0)
  {

    Z=Sueldoacobrar(X,Y);
    printf("El sueldo de el empleado es:%f",Z);

  }

  system("pause");
  return 0;
}

int Sueldoacobrar(int CHT,float VHT)
{

    SUE=CHT*VCH;//sueldo de cada empleado
    //  SAE=SAE+SUE;//contador de cuanto tendra que pagar la empresa al final

    SUED=SUE-(SUE*0.14);

     if (CHT>60)
     {

       SUED=SUED+(SUE*0.05);

     }

  return SUED;

}
