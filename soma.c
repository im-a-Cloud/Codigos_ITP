#include <stdio.h>
int inverte(int vet[4], int pos) {
    if (pos < 4/2) {
        int aux = vet[pos];
        int nova_pos = 4 - pos - 1;
        vet[pos] = vet[nova_pos];
        vet[nova_pos] = aux;
        inverte(vet, pos+1);
    }
}
int main(void) {
    int vet[4];
    for(int i = 0; i < 4; i++){
        scanf("%d", &vet[i]);
    }
    inverte(vet, 0);
    for(int i = 0; i < 4; i++) {
        printf("%d%c", vet[i], (i == 4-1)? '\n':' ');
    }
    return 0;
}