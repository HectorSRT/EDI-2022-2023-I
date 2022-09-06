#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, precio=10, op, descuento;
    printf("Peso de las manzanas compradas?\n");
    scanf("%f", &peso);
    if(peso>=0&&peso<=2){
        printf("%.2f", precio);
    }else if(peso>=2.01&&peso<=5){
        precio=precio*peso;
        descuento=10;
        op=precio*(descuento/100);
        precio=precio-op;
        printf("%.2f", precio);
    }else if(peso>=5.01&&peso<=10){
        precio=precio*peso;
        descuento=15;
        op=precio*(descuento/100);
        precio=precio-op;
        printf("%.2f", precio);
    }else if(peso>=10.01){
        precio=precio*peso;
        descuento=20;
        op=precio*(descuento/100);
        precio=precio-op;
        printf("%.2f", precio);
    }
    return 0;
}
