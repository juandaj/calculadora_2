
#include <stdio.h>
#include "calculadora.h"
int main (void)
{int op;

printf("elija la operacion que quiere hacer, 1-suma,2-resta,3-division,4-multiplicacion");
scanf("%d",&op);
printf("ingrese dos valores a operar");
scanf("%d",&a);
scanf("%d",&b);

switch(op)
{
case 1:
r=suma(a,b);
break;
case 2:
r=resta(a,b);
break;
case 3:
r=division(a,b);
break;
case 4:
r=multiplicacion(a,b);
break;

}

printf("el resultado es:%d",r);

return 0;
}
