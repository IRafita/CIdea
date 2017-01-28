#ifndef DEFINE_COMBINATORIA_H
#define DEFINE_COMBINATORIA_H

/**
  * Saben que definim 
  * `χⁿ_r = {(x_i) | (0 ≤ i ≤ n) ∧ (x_i ∈ χ) ∧ (x_i ≤ r) ∧ (ξ)}`
  *
  * És una funció que simularà totes les combinacions paussibles: rⁿ
  *
  * Si voleu extreure informació serà necessari generar les vostres variables globals,
  * per tal de poder fer els vostres càlculs sobre la condició que voldreu.
  * 
  * Llavors nosaltres generarem un vector d'enters i ho passarem a la funció.
  * Important, la funció no ha de canviar el valor del parametre que entra.
  */
void combinatoriaDefinitionIterative ( int n, int r, void (*cond) (int *) );

#endif /* DEFINE_COMBINATORIA_H */
