# Primeiro Caractere Único

Este código em C++ recebe uma string como entrada e retorna o primeiro caractere que não se repete.
Foi construído utilizando a linguagem C++ e a STL (unordered_map, string, iostream) para garantir eficiência e simplicidade.
Foi desenvolvido com o objetivo de praticar manipulação de strings, uso de mapas hash e aplicação de lógica condicional para identificação de padrões.

# Instruções de uso
Você digita uma string qualquer, e o programa mostra o primeiro caractere que aparece somente uma vez.

1- Digite uma string: aabbcde 

2- Primeiro caractere único: c

3- Digite uma string: aabb

4- Primeiro caractere único: null

# Processo que ocorre no código:
1- O programa lê a string digitada pelo usuário.

2- Utiliza um unordered_map para contar quantas vezes cada caractere aparece.

3- Percorre a string original novamente para identificar o primeiro caractere com contagem igual a 1.

4- Se encontrar, exibe o caractere. Caso contrário, retorna "null".
