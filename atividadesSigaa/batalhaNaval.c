/******************************************************************************
Thays Mariano 27 de Agosto de 2025
Criar uma função de tiro no exemplo de Batalha Naval.. 
Esta função deve ler a posição de tiro, verificar se a casa ainda
não foi alvejada. Se alvejada pergunta novamente a posição. Se a posição for
válida e tiver um navio então o usuário ganha pontos da seguinte forma: 10 
para o porta aviões, 5 para o submarino e 3 para fragata. 
A função deve retornar 0 se o jogo continua, 1 se o usuário atingiu todos os
navios ou 2 se o usuário teve um número máximo de tiros ultrapassado 
(assumir 30 tiros). Ao final, mostrar a situação do jogo.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**********************************/
/***** DEFINIÇÕES DESTE MÓDULO  ****/
/**********************************/

#define TAM_MAT 10
#define MAX_TIROS 30
#define MAX_NOME 30

//posicoes
#define LIVRE 0
#define PORTA_AVIOES 1
#define FRAGATA 2
#define SUBMARINO 3
#define ALVEJADA 4

//pontuacoes
#define PONTUACAO_PORTA_AVIOES 10
#define PONTUACAO_FRAGATA 2
#define PONTUACAO_SUBMARINO 3

//quantidades
#define QUANTIDADE_SUBAMRINOS 5
#define QUANTIDADE_PORTA_AVIOES 1
#define QUANTIDADE_FRAGATAS 4




/**********************************/
/***** VARIÁVEIS GLOBAIS **********/
/**********************************/

int ZonaDeGuerra[TAM_MAT][TAM_MAT];/* Matriz do espaço de batalha */
int ContadorTiros=0;
int PontuacaoFinal;    			   /* acumula a pontuação do jogador */
char nome[MAX_NOME];
int x_sorteado;
int y_sorteado;

int tiro_x;
int tiro_y;

int pontuacao_maxima = (PONTUACAO_SUBMARINO* QUANTIDADE_SUBAMRINOS)+(PONTUACAO_FRAGATA*QUANTIDADE_FRAGATAS)+(PONTUACAO_PORTA_AVIOES*QUANTIDADE_PORTA_AVIOES);


/***********************************/
/****  FUNÇÕES DESTE MÓDULO ********/
/***********************************/

/***** FUNÇÕES DE INICIALIZAÇÃO ****/

void ZerarMatriz()
{
    int i,j;

    for (i=0;i<TAM_MAT;i++)
        for(j=0;j<TAM_MAT;j++)
            ZonaDeGuerra[i][j] = LIVRE;
}

void SortearCasa()
{
    do {
        /* generate secret number: */
        x_sorteado = rand() % TAM_MAT;
        y_sorteado = rand() % TAM_MAT;
    } while (ZonaDeGuerra[x_sorteado][y_sorteado] != LIVRE);

}

void PosicionarFragatas()
{
    int i;
    for(i=0;i<4;i++){
        SortearCasa();
        ZonaDeGuerra[x_sorteado][y_sorteado] = FRAGATA;
    }
}

void PosicionarSubmarinos()
{
    int i;
    for(i=0;i<5;i++){
        SortearCasa();
        ZonaDeGuerra[x_sorteado][y_sorteado] = SUBMARINO;
    }
}

void PosicionarPortaAvioes()
{
    SortearCasa();
    ZonaDeGuerra[x_sorteado][y_sorteado] = PORTA_AVIOES;
}

void PosicionarNavios()
{
    /* initialize random seed: */
    srand ( time(NULL) );

    PosicionarPortaAvioes();
    PosicionarFragatas();
    PosicionarSubmarinos();
}

/*** FUNÇÕES DE IMPRESSÃO NA TELA **/

void ImprimeLinha(int linha)
{
    int j;

    printf("     ");
    for(j=0;j<TAM_MAT;j++) {
        printf("| %2d ",ZonaDeGuerra[linha][j]);
    }
    printf("|\n");
    printf("     +----+----+----+----+----+----+----+----+----+----+\n");
}

void ImprimeLinhaEscondida(int linha)
{
    int j;

    printf("     ");
    for(j=0;j<TAM_MAT;j++) {
        if (ZonaDeGuerra[linha][j]>=0 &&  ZonaDeGuerra[linha][j]<=3)
            printf("| -- ");
        else
            printf("| %2d ",ZonaDeGuerra[linha][j]);
    }
    printf("|\n");
    printf("     +----+----+----+----+----+----+----+----+----+----+\n");
}

void ImprimeMatrizTudo()
{
    int i;

    printf("     +----+----+----+----+----+----+----+----+----+----+\n");
    for(i=0;i<TAM_MAT;i++)
        ImprimeLinha(i);
}

void ImprimeMatrizEscondida()
{
    int i;

    printf("     +----+----+----+----+----+----+----+----+----+----+\n");
    for(i=0;i<TAM_MAT;i++)
        ImprimeLinhaEscondida(i);
}


int Tiro()
{
  
    if(PontuacaoFinal==pontuacao_maxima){
        return 1;
    }
    
    if(ContadorTiros==MAX_TIROS){
        return 2;
    }
    
    printf("Digite a coordenada Y do tiro:");
    scanf("%d", &tiro_y );
    printf("Digite a coordenada X do tiro:");
    scanf("%d", &tiro_x );
    
    if(tiro_y<TAM_MAT && tiro_y<TAM_MAT){
        
        // se acertar uma posicao ja testada
        if(ZonaDeGuerra[tiro_y][tiro_x] == ALVEJADA){
            printf("Posicao ja testada \n");
        }else{
            //se acertar espaco livre
            if(ZonaDeGuerra[tiro_y][tiro_x] == LIVRE){
                printf("Local vazio! \n");
                ZonaDeGuerra[tiro_y][tiro_x] = ALVEJADA;
                
                //se acertar uma fragata
            }else if(ZonaDeGuerra[tiro_y][tiro_x] == FRAGATA){
                PontuacaoFinal += PONTUACAO_FRAGATA;
                printf("Voce acertou uma fragata! \n");
                ZonaDeGuerra[tiro_y][tiro_x] = ALVEJADA;
                
                //e acertar um porta aviões
            }else if(ZonaDeGuerra[tiro_y][tiro_x] == PORTA_AVIOES){
                PontuacaoFinal += PONTUACAO_PORTA_AVIOES;
                printf("Voce acertou um porta avioes! \n");
                ZonaDeGuerra[tiro_y][tiro_x] = ALVEJADA;
                
                //se acertar um submarino
            }else if(ZonaDeGuerra[tiro_y][tiro_x] == SUBMARINO){
                PontuacaoFinal += PONTUACAO_SUBMARINO;
                printf("Voce acertou um submarino! \n");
                ZonaDeGuerra[tiro_y][tiro_x] = ALVEJADA;
            }
            
        }
     
            ContadorTiros++;
            
            printf("Pontuação atual: %d \n", PontuacaoFinal);
            printf("Tiros efetuados: %d \n", ContadorTiros);
            
            return 0;
    }else{
        printf("Valores inválidos, digite novamente! \n");
        return 0;
    }
        

}

int main()
{
    int situacao;
    ZerarMatriz();
    PosicionarNavios();
    ImprimeMatrizTudo();
    do {
        situacao = Tiro();
    } while (situacao==0);
    
    if(Tiro()==1){
        printf("Você atingiu todos os navios, Parabéns! \n");
    }else if(Tiro()==2){
        printf("Que pena! Número máximo de tiros atingidos \n");
    }
    
    return 0;
}