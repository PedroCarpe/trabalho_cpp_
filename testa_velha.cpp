
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"
#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_NO_POSIX_SIGNALS
#include "catch.hpp"
  


TEST_CASE( "Testa linhas, esperando vitória do jogador 1", "[vitoria 1]" ) {
	int teste1[3][3]= {   { 1, 1, 1 }, 
	                      { 2, 0, 2 },
						  { 0, 2, 1 }
					  };
    REQUIRE( VerificaVelha(teste1) == 1 );


} 
 
