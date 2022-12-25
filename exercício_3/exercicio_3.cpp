//Dado um array A não-vazio com N elementos inteiros. Escreva uma função que retorne o menor inteiro positivo que não ocorre em A.

//Escreva uma função int exercise3(int[] a) que dado um array de N inteiros com as condições já mencionadas, retorne o valor do menor inteiro positivo não presente no array.

#include <iostream> //Biblioteca utilizada

int exercise3(int a[], int t){ // Função que recebe o array e o tamanho do array
    int valor_initi = 1; // Menor valor inteiro positivo possível
    for(int i = 0; i < t;i++) // Laço de repetição para encontrar o menor valor inteiro positivo possível
    {
        if(valor_initi == a[i]) // Condicional para verificar se o número está no array 
        {
            valor_initi++; //menor valor inteiro positivo é aumentado em mais 1, pois ele está dentro do array
            i = -1; // faz o laço de repetição começar do primeiro termo do array para verificar se o novo menor valor inteiro positivo (valor_initi) entra novamente no laço de condição
        }
    }
    return valor_initi; // retorna o menor valor inteiro positivo possível
}

int main ()
{
    int A[] = {2 , 3, 1 ,6 ,4}; //array de teste
    int tamanho = sizeof(A)/sizeof(int); // verifica o tamanho do array


    std:: cout << "O menor inteiro positivo não presente no array é " <<exercise3(A, tamanho) << "\n"; // printa a mensagem de resposta
    return exercise3(A, tamanho); // retorna o resultado do programa

}
