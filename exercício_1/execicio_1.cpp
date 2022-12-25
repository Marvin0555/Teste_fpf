//Exercício 1:

//Escrever uma função int exercise1(int a, int b) que receba dois números positivos e retorne a quantidade de 1's da representação binária de seu produto.
//Exemplo: Dados A=3 e B=7, seu produto é 21 e pode ser representado em binário por 10101 que por sua vez contém 3 vezes o caractere 1. Portanto para entrada A=3 e B=7 o retorno será 3.


#include <iostream>

int recebe_valor(int i){
    int z;
    while(true)
    {
        std::cout << "Digite o " << i << " numero: ";
        std:: cin >>  z;
        if( z < 1 )
        {
            std::cout << z << " não é positiv, digite um valor positivo \n";
        }
        else{
            break;
        }
    }
    return z;
}

int valor_binario(int valor_produto)
{   int n = 0;
    int i = 0;
    int binario[50];

    std::cout << "O valor de " << valor_produto << " em binario é: " ;

    while( valor_produto != 0 )
    {   
        binario[i] = valor_produto % 2;
        if(valor_produto % 2 == 0)
        {
            valor_produto/=2;
        }
        else
        {
            valor_produto/=2;
            n++;
        }
        i++;
    }
    for(int j = i -1; j >=0 ; j--)
    {
        std::cout << binario[j];
    }

    std::cout << "\n";
    std::cout << "O valor binario tem ";
    return n;
}


int main()
{
    int x = recebe_valor(1);
    int y = recebe_valor(2); 

    std:: cout << valor_binario(x*y) << " caracteres 1" << "\n";

    return 0;
}