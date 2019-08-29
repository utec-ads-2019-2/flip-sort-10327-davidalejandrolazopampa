#include <iostream>
#include <cstdio>
#include <stdio.h>//para usar el scanf
#include <cstring>
#define TAM_MAXIMO 1000//Tamaño
int main(){

    int cant,array[TAM_MAXIMO];

    while(scanf("%d",&cant)==1){
        for(int i = 0;i<cant;++i) scanf("%d",&array[i]);
        int k = 0;
        for(int i = 1;i<cant;++i)
            for(int j = 0;j<i;++j)
                if(array[j]>array[i])
                    ++k;
        //printf("\n");
        printf("Minimum exchange operations : %d\n",k);
    }

    return 0;

}