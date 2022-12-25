//Dado um array A não-vazio com N elementos inteiros. O array contém um número ímpar de elementos e cada elemento do array pode ser pareado com outro elemento de mesmo valor, exceto por apenas um elemento que não estará pareado.

//Por exemplo um array de 9 elementos como: A[0] = 2 A[1] = 1 A[2] = 2 A[3] = 1 A[4] = 3 A[5] = 3 A[6] = 7 A[7] = 2 A[8] = 2


#include <iostream>
int valores[] = {10, 1, 2,3,10,1,2,3,5};

int verifica(int g, int i, int j){
    int v = 0 ;
    if(j > g || i == g) 
    {
        std:: cout << i << " possui valor ";
        return valores[i];
    }
    else if(valores[i] != valores[j])
    {
        v = verifica(g,i,j+1);   
    }
    else
    {
        v = verifica(g,i+1,0);
    }
    return v;

}
int main (){
    int tamanho = sizeof(valores)/sizeof(int);
    //std:: cout << tamanho << "\n";
    std:: cout << "O elemento no índice " << verifica(tamanho-1,0,1) << " e não está pareado" << "\n";
    return 0;
}
