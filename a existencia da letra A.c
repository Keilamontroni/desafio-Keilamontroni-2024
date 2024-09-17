#include <stdio.h>
#include <ctype.h>
#include <string.h> // Adicionei esta linha para usar strlen

int countA(char *str) {
    int count = 0;
    int i; // Declare a variável aqui
    for (i = 0; str[i] != '\0'; i++) { // Use a variável declarada fora do loop
        if (tolower(str[i]) == 'a') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    printf("Informe uma string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    int count = countA(str);
    printf("A letra 'a' aparece %d vezes na string.\n", count);

    // Wait for user input before closing
    printf("Pressione qualquer tecla para sair...");
    getchar();
    return 0;
}

