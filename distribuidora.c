#include <stdio.h>

// •	SP – R$67.836,43 
// •	RJ – R$36.678,66 
// •	MG – R$29.229,88 
// •	ES – R$27.165,48 
// •	Outros – R$19.849,53 

int main(){
    float estados[] = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53};
    float total = 0;
    float percentuais[5];


    
    for(int i=0; i< (sizeof(estados) / sizeof(estados[0])); i++){
        total += estados[i];
    }

    for(int i=0; i< (sizeof(estados) / sizeof(estados[0])); i++){
        percentuais[i] = estados[i]/total;
        printf("Percentual do estado %d: %f %\n", i, percentuais[i] * 100);
    }
    
}