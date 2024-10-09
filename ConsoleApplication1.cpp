#include <stdio.h>
#include <stdlib.h>

void sort(int tab[], int size) {
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if(tab[j] > tab[j + 1]){
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}


int main() {
    int size;
    char choice;

    do {

        printf_s("========================================\n");
        printf_s("       Bubble sort \ Tri a bulles       \n");
        printf_s("========================================\n");

        printf("Size of the array : ");
        scanf_s("%d", &size);
    
        int* tab = (int*)malloc(size * sizeof(int));
        if (tab == NULL) {
            printf("Memory allocation error.\n");
            return 1;
        }

        for (int i = 0; i < size; i++)
        {
            printf("Number %d : ", i + 1);
            scanf_s("%d", &tab[i]);
        }

        printf("Unsorted array : ");
        for (int i = 0; i < size; i++) {
            printf("%d ", tab[i]);
        }

        printf("\n");

        sort(tab, size);

        printf("Sorted array: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", tab[i]); 
        }

        printf("\n");

        free(tab);

        printf("Appuyer sur 'c' pour continuer ou 'q' pour quitter : ");

        while (getchar() != '\n');
        choice = getchar();

    } while (choice != 'q');

    printf("Bye\n");


    return 0;

}


