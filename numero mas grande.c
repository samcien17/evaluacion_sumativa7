#include<stdio.h>

int main(){
    float numero[10];
    float maxnum;
    int cont=0;

    printf("Programa que calcula que numero es mas grande\n");

    for( int i = 0; i < 10; i++){
        printf("Introdusca el %d munero: ",i+1);
        scanf("%f", &numero[i]);}
        numero[0]=maxnum;
    for( int i = 0; i < 10; i++){
        if(numero[i]>maxnum ){maxnum=numero[i];
        }
    }
    for( int i = 0; i < 10; i++){
        if(numero[i]==maxnum){
            cont=cont+1;
        }
    }
printf("el numero mayor es %.2f \n" ,maxnum);
printf(" el numero aparece %d",cont );
return 0;

}
