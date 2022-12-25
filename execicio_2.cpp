//Dado um array A não-vazio com N elementos inteiros. O array contém um número ímpar de elementos e cada elemento do array pode ser pareado com outro elemento de mesmo valor, exceto por apenas um elemento que não estará pareado.

//Por exemplo um array de 9 elementos como: A[0] = 2 A[1] = 1 A[2] = 2 A[3] = 1 A[4] = 3 A[5] = 3 A[6] = 7 A[7] = 2 A[8] = 2


#include <iostream>


int exercise2(int valores[], int g, int i, int j){
    int v = 0 ;
    if(j > g || i == g) 
    {
        return i;
    }
    else if(valores[i] != valores[j] || i == j)
    {
        v = exercise2(valores,g,i,j+1);   
    }
    else
    {
        v = exercise2(valores,g,i+1,0);
    }
    return v;

}
int main (){
    int valores[] = {1, 2, 3, 3, 7, 2, 5, 5, 1};
    int tamanho = sizeof(valores)/sizeof(int);
    //std:: cout << tamanho << "\n";
    std:: cout << "O elemento no índice "<< exercise2(valores, tamanho-1,0,1) << " possui valor " << valores[exercise2(valores, tamanho-1,0,1)]<< " e não está pareado" << "\n";
    return valores[exercise2(valores, tamanho-1,0,1)];
}

