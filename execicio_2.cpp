//Dado um array A não-vazio com N elementos inteiros. O array contém um número ímpar de elementos e cada elemento do array pode ser pareado com outro elemento de mesmo valor, exceto por apenas um elemento que não estará pareado.

//Por exemplo um array de 9 elementos como: A[0] = 2 A[1] = 1 A[2] = 2 A[3] = 1 A[4] = 3 A[5] = 3 A[6] = 7 A[7] = 2 A[8] = 2


#include <iostream>


int exercise2(int a[], int tamanho){
    int valor_initi = a[0];
    int indices = 0;
    for(int i = 0; i < tamanho; i++)
    {
        if(valor_initi == a[i] && indices != i)
        {
            indices ++;
            valor_initi = a[indices];
            i = -1;
        
        }
    }
    return indices;
}
int main ()
{
    int A[] = {1, 2, 7, 2, 7, 3, 1, 5, 3};
    int tamanho = sizeof(A)/sizeof(int);
    //std:: cout << tamanho << "\n";
    std:: cout << "O elemento no índice "<< exercise2(A, tamanho) << " possui valor " << A[exercise2(A,tamanho)]<< " e não está pareado" << "\n";
    return exercise2(A, tamanho);
}

