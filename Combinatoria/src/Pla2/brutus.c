/******************* *********************************************************
Aquest codi representa que és per a resoldre un problema.
Si definim Жⁿ_r = { (x_i) |
		i ∈ |N, i < n
			∧
		∀ i, x_i ∈ |N, x_i < r
			∧
		∀ i, x_i ≤ x_i+1 +1
********************************************************* *******************/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * n is a number of elements
 * r is a numbers diferents for element
 * t is a number of threads
 */
int n, r, t;

int all (void)
{
	/*
	 * v is a vector of elements
	 * a is a auxiliar variable
	 * c is a counter
	 */
	int *v, a, c;
	v = calloc ( n, sizeof (int) );
	c = 0;

	function_loop:

	for ( a = 1; a < n; a++ )
	{
		if ( v[a-1] > v[a] +1 ) goto notthis;
	}
	c++;
	notthis:

	/* Funció que suma un */
	a = n;
	while ( a-- )
	{
		/* Increment d'un */
		if ( ++v[a] < r ) goto function_loop;

		/* Efecte cascada de la suma */
		v[a] = 0;
	}
return c;
}

void init (int argc, char **argv);
int main (int argc, char **argv)
{
	init (argc, argv);
	printf ( "\nR: %d",  all () );
	/*printf ( "\nend: %d %d %d", n, r, t );*/
printf ("\n");
return 0;
}
void init (int argc, char **argv)
{
	if (--argc == 3)
	{
		n = atoi(argv[1]);
		r = atoi(argv[2]);
		t = atoi(argv[3]);
	} else
	{
		printf ("\nn r thread\n");
		exit (1);
	}
}
