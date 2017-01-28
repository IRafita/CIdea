#include <stdlib.h>

/* Funcions auxiliars */
int _continueF (int n, int *X);		/* Saber si hem acabat */
int _sum1 (int n, int r, int *X);	/* Incrementa d'un, i permet saber si hem acabat. */


/*
 * 
 * `χⁿ_r = {(x_i) | (0 ≤ i < n) ∧ (x_i ∈ χ) ∧ (x_i ≤ r) ∧ (c)}`
 */
void combinatoriaDefinitionIterative ( int n, int r, void (*c) (int *) )
{
	/* Declarem el primer element del conjunt χⁿ_r tant si compleix com no la condició. */
	int * X;

	/* Reservem memòria */
	X = calloc (n, sizeof (int));

	/* Anem enviant el valor a la combinatoria i acte seguit incrementem el valor. */
	do c (X); while ( _sum1 (n, r, X) );

	/* Finalment podem alliberar la variable. */
	free (X);
}

/**
  * Funció per a saber si hem arribat al final.
  *
  * Definim el final quan tot és zero.
  */
int _continueF (int n, int *X)
{
	int i;
	for ( i = 0; i < n; i++ )
		if ( X[i] ) return 1;
	return 0;
}

/**
  * Funció que suma d'un.
  */
int _sum1 (int n, int r, int *X)
{
	while ( n-- )
	{
		/* Incrementem d'un. */
		if ( ++X[n] < r ) return 1;

		/* Efecte cascada de la suma. */
		X[n] = 0;
	}
return 0;
}
