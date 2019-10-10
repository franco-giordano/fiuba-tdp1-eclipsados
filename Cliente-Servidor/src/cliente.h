#ifndef CLIENTE_H_
#define CLIENTE_H_

#include "servidor.h"

class Cliente {
public:
	Cliente(Servidor* server);
	~Cliente();
	void respuesta(char replay[1000]);
	int getSocket(){return sock;}

private:
	struct sockaddr_in cliente;
	int c;
	int sock;
	char reply[1000];

};



#endif /* CLIENTE_H_ */
