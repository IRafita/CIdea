#ifndef TOKEN_H
#define TOKEN_H

/**
  * Estructura bàsica per a executar codi.
  */
struct token
{
	int (*functionData) ();
	int * pointerData;
	int (*functionContext) ();
	struct token * succesors;
};

#endif /* TOKEN_H */
