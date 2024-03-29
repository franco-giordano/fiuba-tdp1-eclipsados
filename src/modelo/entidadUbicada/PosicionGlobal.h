#ifndef SRC_MODELO_ENTIDADUBICADA_POSICIONGLOBAL_H_
#define SRC_MODELO_ENTIDADUBICADA_POSICIONGLOBAL_H_

// Los mismos includes en PosicionGlobal y Vista !!!! arreglar posque puden quedar distintos

#include "../../defs.h"

class PosicionGlobal {
public:
	PosicionGlobal();
	virtual ~PosicionGlobal();

	//constructor de copia, no hace falta pero por las dudas
	//PosicionGlobal(const PosicionGlobal &pos);

	void moverArriba();
	void moverAbajo();
	void moverIzquierda();
	void moverDerecha();
	void moverSalto();
	void terminoSalto(){velocidadSalto = VELOCIDAD_SALTO_INICIAL;}

	float getHorizontal();
	float getVertical();

	bool estaBordeDerecho(){return x >= (ANCHO_CAPA_PIXELES_ESCALADA)- (MARGEN_DERECHO + 150);}
	bool estaBordeIzquierdo(){return x <= MARGEN_IZQUIERDO;}

	void trasladarA(float horizontal, float vertical);

private:
	float x=0;
	float y=0;
	float velocidadSalto;
};

#endif /* SRC_MODELO_ENTIDADUBICADA_POSICIONGLOBAL_H_ */
