#ifndef SNAKE_H
#define SNAKE_H

void iniciar_cobrinha(int x, int y);
void mover_cobrinha();
void crescer_cobrinha();
int verificar_colisao(int largura, int altura);
int verificar_posicao_cobrinha(int x, int y);
int get_cabeca_x();
int get_cabeca_y();

#endif
