#include <stdio.h>

#include "define.h"

/* `χⁿ_r = {(x_i) | (0 ≤ i < n) ∧ (x_i ∈ χ) ∧ (x_i ≤ r) ∧ (c)}`*/

/** Variables globals. **/
int n, r; /* Per saber que hem de fer nosaltres */

/** Funcions per testeixar. **/
void show (int *v)
{
	int i;
	
	for (i = 0; i < n; i++)
		printf ("\t%d", v[i]);
	printf ("\n");
}

int main (int argc, char **argv)
{
	n = 3;
	r = 3;
	combinatoriaDefinitionIterative ( n, r, show );
return 0;
}
