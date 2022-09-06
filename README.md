# EDI-2022-2023-I
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas, minutos;
    printf("Horas?\n");
    scanf("%d", &horas);
    printf("Minutos?\n");
    scanf("%d", &minutos);
    if((horas>=0&&horas<=11)&&minutos<=59){
        printf("Buenos Dias");
    }else if((horas>=12&&horas<=17)&&minutos<=59){
        printf("Buenas Tardes");
    }else if((horas>=18&&horas<=23)&&minutos<=59){
        printf("Buenas Noches");
    }else{
        printf("Esa hora no es valida");
    }
    return 0;
}
