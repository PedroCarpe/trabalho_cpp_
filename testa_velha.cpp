
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

    int teste2[3][3]= {   { 0, 2, 1 }, 
	                      { 1, 1, 1 },
						  { 1, 2, 0 }
					  };
    REQUIRE( VerificaVelha(teste2) == 1 );
    
	int teste3[3][3]= {   { 0, 2, 1 }, 
	                      { 1, 2, 0 },
						  { 1, 1, 1 }
					  };
    REQUIRE( VerificaVelha(teste3) == 1 );

}

TEST_CASE( "Testa linhas, esperando vitória do jogador 2", "[vitoria 2]" ) {
	int teste1[3][3]= {   { 2, 2, 2 }, 
	                      { 1, 0, 1 },
						  { 0, 2, 1 }
					  };
    REQUIRE( VerificaVelha(teste1) == 2 );

    int teste2[3][3]= {   { 0, 1, 1 }, 
	                      { 2, 2, 2 },
						  { 1, 2, 0 }
					  };
    REQUIRE( VerificaVelha(teste2) == 2 );
    
	int teste3[3][3]= {   { 0, 0, 1 }, 
	                      { 1, 2, 0 },
						  { 2, 2, 2 }
					  };
    REQUIRE( VerificaVelha(teste3) == 2 );

}	



TEST_CASE( "Testa colunas, esperando vitória do jogador 1", "[vitoria 1]" ) {
	int teste1[3][3]= {   { 1, 0, 1 }, 
	                      { 1, 0, 2 },
						  { 1, 2, 1 }
					  };
    REQUIRE( VerificaVelha(teste1) == 1 );

    int teste2[3][3]= {   { 2, 1, 1 }, 
	                      { 2, 1, 1 },
						  { 0, 1, 2 }
					  };
    REQUIRE( VerificaVelha(teste2) == 1 );
    
	int teste3[3][3]= {   { 0, 2, 1 }, 
	                      { 1, 2, 1 },
						  { 0, 1, 1 }
					  };
    REQUIRE( VerificaVelha(teste3) == 1 );

} 
 

TEST_CASE( "Testa colunas, esperando vitória do jogador 2", "[vitoria 2]" ) {
	int teste1[3][3]= {   { 2, 0, 1 }, 
	                      { 2, 1, 0 },
						  { 2, 2, 1 }
					  };
    REQUIRE( VerificaVelha(teste1) == 2 );

    int teste2[3][3]= {   { 1, 2, 1 }, 
	                      { 1, 2, 1 },
						  { 0, 2, 2 }
					  };
    REQUIRE( VerificaVelha(teste2) == 2 );
    
	int teste3[3][3]= {   { 0, 2, 2 }, 
	                      { 1, 1, 2 },
						  { 0, 1, 2 }
					  };
    REQUIRE( VerificaVelha(teste3) == 2 ); 

}

TEST_CASE( "Testa diagonal principal, esperando vitória do jogador 1", "[vitoria 1]" ) {
	int teste1[3][3]= {   { 1, 0, 1 }, 
	                      { 2, 1, 0 },
						  { 2, 2, 1 }
					  };
    REQUIRE( VerificaVelha(teste1) == 1 );
 

}	

