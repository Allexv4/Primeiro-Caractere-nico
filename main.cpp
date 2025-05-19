/// Objetivo: percorrer uma string e encontrar o primeiro elemento que não se repete
/// ex: firstUniqueChar("aabbccvtt")
/// output: v
/// ex2: firstuniquechar("aabbccdd") --> não ha elemento unico
/// caso: não ouver caracter unico retorna null

#include <iostream>
#include <unordered_map>
#include <string>

std::string firstUniqueChar(const std::string& str) {
    std::unordered_map<char, int> charCount;

    // Primeiro loop: percorre toda a string e enumera quantas vezes cada caracter aparece
    for (char c : str) {
        charCount[c]++;
    }

    // Segundo loop: encontra o primeiro caractere que a contagem é 1
    for (char c : str) {
        if (charCount[c] == 1) {
            return std::string(1, c);  // retorna como string
        }
    }

    return "null"; // não encontrou nenhum caracter unico
}
int main() {
    std::string input;

    std::cout << "Digite uma string: ";
    std::getline(std::cin, input);  // Lê a linha completa (incluindo espaços, se houver)

    std::string result = firstUniqueChar(input);

    std::cout << "Primeiro caractere unico: " << result << std::endl;

    return 0;
}
