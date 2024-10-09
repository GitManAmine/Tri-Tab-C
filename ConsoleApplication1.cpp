#include <stdio.h>
#include <stdlib.h>

void tri(int tab[], int taille) {
    for (int i = 0; i < taille - 1; i++)
    {
        for (int j = 0; j < taille - i - 1; j++)
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
    int taille;
    printf("Taille du tableau : ");
    scanf_s("%d", &taille);
    
    int* tab = (int*)malloc(taille * sizeof(int));
    if (tab == NULL) {
        printf("Erreur d'allocation mémoire.\n");
        return 1;
    }

    for (int i = 0; i < taille; i++)
    {
        printf("Remplir le tableau : ");
        scanf_s("%d", &tab[i]);
    }

    printf("Contenu du tableau :\n");

    tri(tab, taille);

    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }

    free(tab);

    return 0;
}
