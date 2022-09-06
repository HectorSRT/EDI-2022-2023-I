#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l1,l2,l3;
    printf("Medida de los lados del triangulo: \n");
    scanf("%d%d%d", &l1,&l2,&l3);
    if(l1==l2&&l2==l3){
        printf("Triangulo equilatero");
    }else if((l1==l2&&l2!=l3)||(l2==l3&&l3!=l1)||(l1==l3&&l1!=l2)){
        printf("Triangulo isosceles");
    }else{
        printf("Triangulo Escaleno");
    }
    return 0;
}
