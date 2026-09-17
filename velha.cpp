/**
 * \file  velha.cpp
 */

 
#include "velha.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ 

int VerificaVelha( int velha[3][3] )
{

    //Verifica vitoria do jogador 1, na diagonal principal	
    if(velha[0][0] == 1 && velha[1][1] == 1 && velha[2][2] == 1){
        return 1;
    }

    //Verifica vitoria do jogador 2, na diagonal principal
    if(velha[0][0] == 2 && velha[1][1] == 2 && velha[2][2] == 2){
        return 2;
    }


	//Refatoração para a verificação generalizada das linhas
	for (int i = 0; i < 3; i++) {
        if (velha[i][0] != 0 && 
            velha[i][0] == velha[i][1] && 
            velha[i][1] == velha[i][2]) {
            return velha[i][0]; // Retorna 1 (Jogador 1) ou 2 (Jogador 2) dependendo do valor da linha
            }
        }
    
    for (int i = 0; i < 3; i++) {
        if (velha[0][i] != 0 && 
            velha[0][i] == velha[1][i] && 
            velha[1][i] == velha[2][i]) {
            return velha[0][i]; // Retorna 1 (Jogador 1) ou 2 (Jogador 2) dependendo do valor da coluna
            }
        }




	
	return 0; /*!< retorna zero para teste */ 
}


