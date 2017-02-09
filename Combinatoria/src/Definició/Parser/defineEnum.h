#ifndef DEFINE_ENUM_H
#define DEFINE_ENUM_H

/*
Voldriem que poguessis preguntar les funcions, i tot seguit preguntar una en concret amb més detall.
Fins i tot preguntar si una funció està correctament definida.
*/

enum functions_t
{
/** Functions Controler 'fC' **/
	DW1,	/* do While with ≠ 0 */

/** End Functions Controler **/
	END_CONTROLER,	/* No moure d'aqui, és necessari per diferenciar entre fC i fD */

/** Functions Data 'fD' **/
	C,	/* counter */

/** End **/
	END_FUNCTION /* No moure d'aqui, és necessari per a trobar la funció */
};

#endif /* DEFINE_ENUM_H */
