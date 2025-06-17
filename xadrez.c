#include <stdio.h> // Para pri = 5;

int MOVIMENTO_MAX_TORRE = 5;//variáveis que posteriormente serão usadas no int mai
int MOVIMENTO_MAX_RAINHA = 5;//elas estão definindo quantos passos cada peça,exceto o cavalo, dará
int MOVIMENTO_MAX_BISPO =3;
// método voi utilizado antes do main, aqui estamos definindo o número de passos que a cada peça, exceto o cavalo, dará
void movertorrerecursivo(int passos){
    if (passos <= 0)
    {
        return;
    }
    printf("Cima\n");
    movertorrerecursivo( passos - 1 );
}
//atindo o número de passos desejados, encerra
void moverrainharecursivo(int passos){
    if ( passos <= 0 )
    {
        return;
    }
    printf("Direita\n");
    printf("Cima\n");
    moverrainharecursivo( passos - 1);
}

   int a_passo;
   int b_passo;


void moverbisporecursivo(int current_diagonal_step, int total_diagonal_steps) {
    // Caso base da recursão: se atingimos o número total de passos, paramos.
    if (current_diagonal_step > total_diagonal_steps) {
        return;
    }

       // Loop externo 1
      // Para um passo diagonal, ele se move verticalmente
    for (int vertical_step = 0; vertical_step < 1; vertical_step++) {
        printf("Cima\n");

        // Loop interno 1
        // Para um passo diagonal, ele se move horizontalmente
        for (int horizontal_step = 0; horizontal_step < 1; horizontal_step++) {
            printf(" Direita\n");
    
        }
    }

}

int main() {
    printf("Movimento da torre:\n");//aqui está apresentando o movimento da carta 
    movertorrerecursivo(MOVIMENTO_MAX_TORRE);//e é aqui onde o método recursivo e as variáveis declaradas antes do int main serão chamadas
    printf("\n");                            // cada uma dela retornará um valor a menos do foi declarada por conta dos métodos de comparação
                                             //anteriormente utilizados

    printf("Movimentos da rainha:\n");
    moverrainharecursivo(MOVIMENTO_MAX_RAINHA);
    printf("\n");

    printf("Movimento do bispo:\n");
    moverbisporecursivo(1,MOVIMENTO_MAX_BISPO);
    printf("\n");

    printf("Movimento do cavalo\n");

    int i_vertical = 0; // Contador para o movimento vertical
    int j_horizontal = 0; // Contador para o movimento horizontal
    int total_passos = 0; // Contador total de passos para limitar

    const int passos_cima = 2;//variável usada para mover-se de forma vertical
    const int passos_direita = 1;//variável usada para mover-se de forma horizontal
    const int MAX_TOTAL_PASSOS_CAVALO = passos_cima + passos_direita;

    //loop externo 2
    for ( i_vertical = 0; i_vertical < passos_cima; i_vertical++)//loop utilizado para mover o cavalo na vertical
    {
        if (i_vertical == passos_cima)
        {
            break;//quebra do loop interno
        }
        
    } 
        printf("Cima\n");
        printf("Cima\n");
        total_passos++;

        //loop interno 2
        for ( int j_horizontal= 0; j_horizontal < passos_direita; j_horizontal++)//loop utilizado para mover o cavalo na horizontal
        {
            if ( j_horizontal == passos_direita)
            {
                break;//quebra do loop interno
            }

            
        }
        printf("Direita\n");
        j_horizontal++;
        total_passos++;

        
    

   
          

    
    


    return 0;
    
}

