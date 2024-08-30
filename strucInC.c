#include <stdio.h>

// Definindo a estrutura Cachorro
struct Cachorro {
    char *raca;
    char *nome;
    int idade;
    float peso;
};

// Função para imprimir informações sobre um cachorro
void Imprime_Info_Cachorro(struct Cachorro dog) {
    printf("Nome: %s\n", dog.nome);
    printf("Raça: %s\n", dog.raca);
    printf("Idade: %d\n", dog.idade);
    printf("Peso: %.1f\n\n", dog.peso);
}

int main(int argc, char *argv[]) {
    // Inicializando variáveis do tipo Cachorro
    struct Cachorro dog1, dog2, dog3, dog4;

    dog1.raca = "Beagle";
    dog1.nome = "Bob";
    dog1.idade = 3;
    dog1.peso = 1.2;

    dog2.raca = "Pug";
    dog2.nome = "Bill";
    dog2.idade = 5;
    dog2.peso = 0.9;

    dog3.raca = "Terrier";
    dog3.nome = "Lua";
    dog3.idade = 6;
    dog3.peso = 1.4;

    dog4.raca = "Buldog";
    dog4.nome = "Bibi";
    dog4.idade = 15;
    dog4.peso = 2.9;

    // Chamando funções para imprimir informações
    Imprime_Info_Cachorro(dog1);
    Imprime_Info_Cachorro(dog2);
    Imprime_Info_Cachorro(dog3);
    Imprime_Info_Cachorro(dog4);

    return 0;
}
