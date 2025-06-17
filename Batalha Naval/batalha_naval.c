#include <stdio.h>

#define TAMANHO_TABULEIRO 10//constantes declaradas, que serão a base fundamental para o correto funcionamento do jogo
#define AGUA 0// nessas constantes estarão os valores armazenados que serão utilizado para a matriz e oarray
#define NAVIO 3
#define TAMANHO_NAVIO 3

#define VERDADEIRO 1
#define FALSO 0

int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];//declaração da matriz

void inicializarTabuleiro(){
    for ( int i = 0; i < TAMANHO_TABULEIRO; i++){
        for ( int j = 0; j < TAMANHO_TABULEIRO; j++){
            tabuleiro[i][j] = AGUA;
        }
         
    }

}

    int estaDentrodosLimites(int linha,int coluna){
        if (linha >= 0 && linha < TAMANHO_TABULEIRO && 
            coluna >= 0 && coluna < TAMANHO_TABULEIRO){
            return VERDADEIRO;//pode posicionar 
        } else{
            return FALSO;//não é possivel posicionar 
        }
    }


    int posicionarNavio(int linhaInicial, int colunaInicial, int tamanho, char orientacao) {//aqui já estamos falando dos navios(array) que serão movidos
        if (orientacao == 'H' || orientacao == 'h') { // Navio Horizontal
            for (int j = 0; j < tamanho; j++) {
            tabuleiro[linhaInicial][colunaInicial + j] = NAVIO;
        }
    } else if (orientacao == 'V' || orientacao == 'v') { // Navio Vertical
        for (int i = 0; i < tamanho; i++) {
            tabuleiro[linhaInicial + i][colunaInicial] = NAVIO;
        }
    }
}    

void exibirTabuleiro() {
    printf("\n   "); // Espaço para as coordenadas da coluna
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
        printf("%d ", j); // Imprime o número da coluna
    }
    printf("\n");

    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%2d ", i); // Imprime o número da linha (com 2 espaços para alinhamento)
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime o valor da célula (0 ou 3)
        }
        printf("\n"); // Nova linha para a próxima linha do tabuleiro
    }
}

int main(){
        inicializarTabuleiro();{//
    
    int navioV_linha = 0;//ponto de partida do navio 1 baseado em qual linha está
    int navioV_coluna = 0;//ponto de partida do navio 1 baseado em qual coluna está
    char navioV_orientacao = 'V';//posição pela qual se move, verticalmente

    int navioH_linha = 9;//ponto de partida do navio 2 baseado em que linha está
    int navioH_coluna = 0;//ponto de partida do navio 2 baseado em que coluna está 
    char navioH_orientacao = 'H';//posição pela qual ele vai se mover, ou seja, na horizontal

    printf("\n Posicionando os navios \n");
        
       //posicionamento do navio vertical

    if (posicionarNavio (navioV_linha, navioV_coluna, TAMANHO_NAVIO, navioV_orientacao) == VERDADEIRO) {
        posicionarNavio(navioV_linha, navioV_coluna, TAMANHO_NAVIO, navioV_orientacao);
        printf("Navio Vertical posicionado com sucesso em (%d, %d).\n", navioV_linha, navioV_coluna);
    } else {
        printf("Erro ao posicionar Navio Vertical em (%d, %d). Verifique limites ou sobreposição.\n", navioV_linha, navioV_coluna);
    }

       //posicionamento do navio hotizontal

    if (posicionarNavio(navioH_linha, navioH_coluna, TAMANHO_NAVIO, navioH_orientacao) == VERDADEIRO) {
        posicionarNavio(navioH_linha, navioH_coluna, TAMANHO_NAVIO, navioH_orientacao);
        printf("Navio Horizontal posicionado com sucesso em (%d, %d).\n", navioH_linha, navioH_coluna);
    } else {
        printf("Erro ao posicionar Navio Horizontal em (%d, %d). Verifique limites ou sobreposição.\n", navioH_linha, navioH_coluna);
    }
    
     //Exibir o tabuleiro com os navios posicionados
        printf("\nTabuleiro de Batalha Naval Final\n");
    exibirTabuleiro();

   }   
    
   return 0;
}
