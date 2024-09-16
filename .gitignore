#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[], int n) {
    int i, j;
    char temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    char letras[100];
    printf("Digite várias letras sem espaços: ");
    scanf("%s", letras);

    int n = strlen(letras);
    bubbleSort(letras, n);

    printf("Letras ordenadas: %s\n", letras);
    return 0;
}
