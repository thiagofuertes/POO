#include <stdio.h>
#include <stdlib.h>

 
 int main (void) {
    int ejercicio;
    printf("1 ejercicio calcular el costo de viaje de egresados: ");
    printf("\n2 ejercicio calcular el sueldo y la comsion de una venta: ");
    printf("\n3 ejercicio calcular tus notas finales: ");
    printf("\n4 ejercicio calcular numeros pares entre 2 numeros: ");
    printf("\n5 ejercicio calcular donde se encontran 2 choches: ");
    printf("\ningrese que ejercicio quiere: ");
    scanf("%d", &ejercicio);
    switch (ejercicio){
        case 1:
     int alumnos;
    printf("ingrese una cantidad de alumnos: ");
    scanf("%d", &alumnos);
    double precioviaje = 0;
    double precioalum;

    if (alumnos >= 100){
        precioviaje = alumnos * 500.0;
        printf ("el precio del viajes por %d alumnos, es de %.2f ", alumnos , precioviaje);
    }
     else if (alumnos <= 99 && alumnos >=50){
        precioviaje = alumnos * 400.0; 
        printf ("el precio del viajes por %d alumnos, es de %.2f ", alumnos, precioviaje);
    }
     else if (alumnos <=49 && alumnos >=30){
        precioviaje = alumnos * 300.0;
            printf ("el precio del viajes por %d alumnos,es de %.2f ", alumnos, precioviaje);
     }
    else if (alumnos < 30){
        precioviaje = 6000.0;
            printf ("el precio del viajes por %d alumnos, es de %.2f ", alumnos, precioviaje);
            precioalum = precioviaje / alumnos;
            printf("\n");
            printf ("Cada alumo paga aprox: %.2f ", precioalum);
    }
    break;

    case 2:
    float sueldo;
    float total;
    float comision;
    float venta;
    float acumulador;
    printf("ingrese el sueldo base: ");
    scanf("%f" , &sueldo);
    for(int i = 0; i < 3; i++){
        printf("Ingrese sus ventas:");
        scanf("%f" , &venta);
        acumulador= acumulador + venta;
    }
    comision= acumulador * 0.10;
     printf("Sus comisiones son de: %.2f", comision);
     total= comision + sueldo;
     printf("\nSu sueldo total es de: %.2f", total);
    break;

    case 3:
    float notas_parciales[3];
    float notas_examen_final;
    float notas_trabajo_final;
    float notas_final;

    printf("Ingrese las calificaciones de los tres parciales:\n");
    for (int i = 0; i < 3; i++) {
        printf("Parcial %d: ", i + 1);
        scanf("%f", &notas_parciales[i]);
    }
    printf("Ingrese la calificación del examen final: ");
    scanf("%f", &notas_examen_final);
    printf("Ingrese la calificación del trabajo final: ");
    scanf("%f", &notas_trabajo_final);

    float promedio_parciales = 0;
    for (int i = 0; i < 3; i++) {
        promedio_parciales += notas_parciales[i];
    }
    promedio_parciales /= 3;

    notas_final = promedio_parciales * 0.55 + notas_examen_final * 0.30 + notas_trabajo_final * 0.15;

    printf("La calificación final del alumno es: %.2f\n", notas_final);
    break;
    
    case 4:
    int num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    printf("Números pares entre %d y %d:\n", num1, num2);
    for (int i = num1; i <= num2; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    break;
    
    case 5: 
    float distancia_coche1 = 70.0;
    float distancia_coche2 = 150.0;
    float velocidad;
    printf("Ingrese la velocidad: ");
    scanf("%f", &velocidad);
    int tiempo = (distancia_coche2 - distancia_coche1) / velocidad;

    float posicion_encuentro = distancia_coche1 + (velocidad * tiempo);
    printf("Los coches se encontrarán en el kilómetro %.2f.\n", posicion_encuentro);
    break;
    }
        return 0;
 }
 