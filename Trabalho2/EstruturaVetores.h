#ifndef TRABALHO2_ESTRUTURAVETORES_H
#define TRABALHO2_ESTRUTURAVETORES_H

// enumeracoes (enum) ajudam a deixar o codigo mais legivel, possibilitando que voce de significado
// as suas constantes, para mais informacoes https://en.cppreference.com/w/c/language/enum
// as constantes do enum em sua inicialização vao representar o numero resultante da soma do valor da
// constante anterior mais 1, caso nao haja valor algum na primeira constante ela vai ser inicializada com 0
enum
{
    TODAS_ESTRUTURAS_AUXILIARES_VAZIAS = -11,
    NOVO_TAMANHO_INVALIDO,
    NUMERO_INEXISTENTE,
    ESTRUTURA_AUXILIAR_VAZIA,
    TAMANHO_INVALIDO,
    SEM_ESPACO_DE_MEMORIA,
    POSICAO_INVALIDA,
    JA_TEM_ESTRUTURA_AUXILIAR,
    SEM_ESTRUTURA_AUXILIAR,
    SEM_ESPACO,
    SUCESSO
};
#include <stdbool.h>

typedef struct reg
{
    int conteudo;
    struct reg *prox;
} No;

typedef struct linkedList
{
    No *head;
    No *tail;
} list;

typedef struct mainArray
{
    int tamanho;
    int qtdDeElementos;
    int *estruturaAuxiliar;
} vetor_Principal;

bool ehPosicaoValida(int posicao);
bool ehTamanhoValido(int tamanho);
bool existeEstruturaAuxiliar(int posicao);
bool EstruturaCheia(int posicao);
bool EstruturaVazia(int posicao);
bool novoTamanhoEhValido(int posicao, int novoTamanho);
void displayEstrutura();
int criarEstruturaAuxiliar(int posicao, int tamanho);
int inserirNumeroEmEstrutura(int posicao, int valor);
int excluirNumeroDoFinaldaEstrutura(int posicao);
int excluirNumeroEspecificoDeEstrutura(int posicao, int valor);
int excluir(int opcao);
int getDadosEstruturaAuxiliar(int posicao, int vetorAux[]);
int getDadosOrdenadosEstruturaAuxiliar(int posicao, int vetorAux[]);
int getDadosDeTodasEstruturasAuxiliares(int vetorAux[]);
int getDadosOrdenadosDeTodasEstruturasAuxiliares(int vetorAux[]);
int modificarTamanhoEstruturaAuxiliar(int posicao, int novoTamanho);
int getQuantidadeElementosEstruturaAuxiliar(int posicao);
No *montarListaEncadeadaComCabecote();
void getDadosListaEncadeadaComCabecote(No *inicio, int vetorAux[]);
void destruirListaEncadeadaComCabecote(No **inicio);

void inicializar();
void finalizar();
void dobrar(int *x);

int loadData();
int saveData();
void displayMessage(int ret);

void somaEspecial(int *somaA, int *somaB /* vetor_Principal* vetorPrincipal[] */);
void imprimirListaEncadeada(No *inicio);
void lerVetorPrincipal(No *inicio);
No *montarListaEncadeada(No *inicio, int num);

int get_Median(int *array, int size);
No *listaOrdenada(No *inicio);
No *montarListaEncadeadaOrdenada(No *inicio, int num);
void deallocMemory(No **inicio);

#endif // TRABALHO2_ESTRUTURAVETORES_H
