//Dado um array A não-vazio com N elementos inteiros. O array contém um número ímpar de elementos e cada elemento do array pode ser pareado com outro elemento de mesmo valor, exceto por apenas um elemento que não estará pareado.

//Por exemplo um array de 9 elementos como: A[0] = 2 A[1] = 1 A[2] = 2 A[3] = 1 A[4] = 3 A[5] = 3 A[6] = 7 A[7] = 2 A[8] = 2


#include <iostream> //Biblioteca utilizada


int exercise2(int a[], int tamanho){ // Função que recebe o array e o tamanho do array
    int valor_initi = a[0]; // valor_initi recebe o primeiro valor do array
    int indices = 0; //variável que representa a posição do valor que não se repete 
    for(int i = 0; i < tamanho; i++) //Laço de repetição para encontrar o valor que não se repete
    {
        if(valor_initi == a[i] && indices != i) //Condicional que verifica se o número se repete e se ele não está sendo comparado com ele mesmo
        {
            indices ++; //O indice almenta, pois o numero comparado possui um igual
            valor_initi = a[indices];//O valor_initi recebe o próximo valor que vai ser comparado no laço de repetição
            i = -1; //Faz o laço de repetição começar novamente do primeiro termo
        }
    }
    return indices; // retorna o número que não se repete
}
int main () //Função main do sistema
{
    int A[] = {1, 2, 7, 2, 7, 3, 5, 1, 3}; //array de teste
    int tamanho = sizeof(A)/sizeof(int); // verifica o tamanho do array
    std:: cout << "O elemento no índice "<< exercise2(A, tamanho) << " possui valor " << A[exercise2(A,tamanho)]<< " e não está pareado" << "\n"; // printa a mensagem de resposta
    return exercise2(A, tamanho); // retorna o resultado do programa
}
