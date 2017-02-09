#include <string.h>	/* strcmp */
#include "defineEnum.h"

enum type_t
{
	STRING2ENUM,

	/** Útil per a descobrir si s'acaben els paràmetres **/
	END_TYPE
};


//void * allParameters (enum funcions_t f, enum type_t t, void * d)
void * allParameters (enum functions_t f, enum type_t t, void * d)
{
	switch (f)
	{
	case DW1:	/* do While with ≠ 0 */
		switch (t)
		{
		case STRING2ENUM: return d;//!strcmp ( d, "dw1" );
		case END_TYPE: return d;
		}
	case END_CONTROLER: return 0; /* A partir d'aquí ja podem posar funcions data! */
	case C:	/* counter */
		switch (t)
		{
		case STRING2ENUM: return d;//!strcmp ( d, "c" );
		case END_TYPE: return d;
		}
	case END_FUNCTION: return d;
	}
return d;
}
