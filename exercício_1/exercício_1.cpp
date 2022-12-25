//Exercício 1:

//Escrever uma função int exercise1(int a, int b) que receba dois números positivos e retorne a quantidade de 1's da representação binária de seu produto.
//Exemplo: Dados A=3 e B=7, seu produto é 21 e pode ser representado em binário por 10101 que por sua vez contém 3 vezes o caractere 1. Portanto para entrada A=3 e B=7 o retorno será 3.


#include <iostream>

int recebe_valor(int i){ // Função responsável por receber os dos valore de entrada
    int z; // variável que recebe o valor digitado
    while(true) // laço de repetição 
    {
        std::cout << "Digite o " << i << " numero: "; // printa uma mensagem 
        std:: cin >>  z; // recebe o valor digitado
        if( z < 1 ) // verifica se o valor é positivo 
        {
            std::cout << z << " não é positiv, digite um valor positivo \n"; // printa a mensagem se o valor não for positivo
        }
        else{
            break; //quebra o laço se o valor for positivo
        }
    }
    return z; // retorna o valor recebido 
}

int exercise1(int x , int y) //
{   int n = 0;// contador de números 1
    int i = 0;//variável utilizada como índice do vetor binário
    int valor_produto = x*y; //resultado do produto dos números de entrada
    int binario[50]; //vetor inteiro que recebe o valor do número em binário
    std::cout << "O valor de " << x*y << " em binario é: "; // printa uma mensagem do resultado do valor
    while( valor_produto != 0 ) //O laor de repetição só para quando o produto for igual a 0
    {   
        binario[i] = valor_produto % 2; // binário recebe os restos das divisões, ou seja, 0 e 1 que são os valores binários do produto de dois números
        if(valor_produto % 2 == 0) // verifica se o resto é igual a 0
        {
            valor_produto/=2; // valor_produto é dividido na metade 
        }
        else // entra aqui se o resto não for 0, logo ele é 1
        {
            valor_produto/=2; // valor_produto é dividido na metade 
            n++; // o contador de números 1 no binário é incrementado
        }
        i++; // incrementa o i para permitir a variável binária receber o próximo valor binário
    }
    for(int j = i -1; j >= 0 ; j--) // laço de repetição para inverter o vetor binário
    {
        std::cout << binario[j]; // printa os valores do vetor binario
    }

    std::cout << "\n"; // faz um \n no print
    std::cout << "O valor binario tem "; //printa a mensagem no terminal
    return n;
}


int main()
{
    int x = recebe_valor(1); //convoca a função (recebe_valor) que vai retornar o valor para x
    int y = recebe_valor(2); //convoca a função (recebe_valor) que vai retornar o valor para y
    std:: cout << exercise1(x, y) << " caracteres 1" << "\n"; // printa o número de caracteres 1 no valor do produto de dois números
    return 0;
}