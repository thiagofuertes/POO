        #include <stdio.h>

        int main (int argc, char * argv[]){
            int a;
            int b;
            int c;
            int ejercicio;
        printf("A que ejercicio queres acceder?? \n");
        printf("1: Calcular si es negativo o positivo \n");
        printf("2: Calcular si es par o impar \n");
        printf("3: Calcular si un numero es divisible por 2 o por 3 \n");
        printf("4: Calcular cual es el mayor de 3 numeros \n");
        scanf("%d", &ejercicio);
        

        switch(ejercicio){
            case 1:    
            printf("elegiste calcular si es negativo o positivo\n");
            printf("ingresá un valor para calcular si es negativo o positivo\n");
            scanf("%d", &a);
            if(a == 0){
                printf("el numero es cero\n");
            }
            else if (a > 0){
                printf("el numero es positivo\n");
            }
            else printf("El numero es negativo\n");
            break;

            case 2:
            printf("elegiste calcular si es par o impar\n");
            printf("ingresa un numero para comprobar si es par o impar\n");
            scanf("%d", &a);
            if(a == 0){
                printf("el numero es cero\n");
            }
            else if( a % 2 == 0){
                printf("el numero es par\n");
            }
            else{
                printf("el numero es impar\n");
            }
            break;

            case 3:
            printf("elegiste calcular si es divisible por 2 o por 3\n");
            printf("ingresa un numero para comprobar si es divisible por 2 o por 3\n");
            scanf("%d", &a);
            if (a == 0)
            {
                printf("el numero es cero\n");
            }
            
            else if (a % 2 == 0 && a % 3 == 0)
            {
                printf("el numero ingresado es divisible por 2 Y por 3\n");
            }
            else if(a % 2 == 0 ){
                printf("el numero ingresado es divisible por 2\n");
            }
            else if(a % 3 == 0){
                printf("el numero ingresado es divisible por 3\n");
            }
            else{
                printf("no es divisible ni por 2 ni por 3\n");
            }

            break;

            case 4:
            printf("elegiste calcular el mayor de tres numeros\n");
            printf("ingresa los 3 numeros a comparar\n");
            printf("ingresar el numero a\n");
            scanf("%d", &a);
            printf("ingresar el numero b\n");
            scanf("%d", &b);
            printf("ingresar el numero c\n");
            scanf("%d", &c);
            if(a == b && a == c) {
                printf("Los numeros son iguales");
        }  else  if(a == b && a > c) {
            printf("Son los mayores es A y B");
        } else if(a == c && a > b) {
                printf("Los mayores son A y C");
        } else  if(c == b && c > a ) {
                printf("Son los mayores es C y B");
         }  else if(c > b && c > a) {
            printf("El mayor es C");
         }  
           else if(a > b && a > b) {
            printf("El mayor es A");
           }
          else {
            printf("El mayor es B"); 
        }
            break; 

         }
         return 0;
        }
            
     
         