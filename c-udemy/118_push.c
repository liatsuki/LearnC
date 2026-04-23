#include <stdio.h>

int tamanho_maximo = 10;
int pilha[10];
int topo = -1; // tamanho da pilha - 1, sendo 10 a ultima posicao sera 9

// Colocar na pilha, na ultima posicao
void push(int valor) {
    if (topo == tamanho_maximo - 1) { // descobrir se esta na ultima posicao
        printf("Erro: pilha cheia!\n"); // se for igual
        return;
    }
    // senao
    topo++; // incrementar a posicao
    pilha[topo] = valor;
}

// ver o ultimo da pilha
int top() {
    if (topo == -1) { // se a pilha estiver vazia
        printf("Pilha vazia!\n");
        return -1; // porque a funcao top e inteiro
    }
    // senao
    return pilha[topo];
}

void pop() {
    if (topo == -1) { // se a pilha estiver vazia
        printf("Pilha vazia!\n");
        return;
    }
    // senao
    topo--; // decremento do topo
}

void imprimirPilha() {
    if (topo == -1) { // se a pilha estiver vazia
        printf("Pilha vazia!\n");
        return;
    }
    // senao
    printf("Elementos da pilha:\n");
    for (int i = topo; i >= 0; i--) { // imprimir de baixo para cima
        printf("  %d\n", pilha[i]);
    }
}

int main() {

    push(10);
    push(67);
    push(99); // topo

    imprimirPilha();

    printf("Topo atual: %d\n", top()); // vai mostrar o topo - 99

    pop(); // retirar um elemento (apaga mesmo)

    printf("Topo atual: %d\n", top()); // agora 67

    imprimirPilha();

    return 0;
}