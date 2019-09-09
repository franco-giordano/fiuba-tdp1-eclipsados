#ifndef VISTA_H_
#define VISTA_H_

#define WINDOW_SIZE_HORIZONTAL 800
#define WINDOW_SIZE_VERTICAL 300
#define JUGADOR_SIZE_HORIZONTAL 100
#define JUGADOR_SIZE_VERTICAL 200


#include "../modelo/Juego.h"
#include "../controlador/Controlador.h"
#include "../modelo/Capa.h"
#include "../modelo/Nivel.h"

class Vista {
public:
	Vista(Juego* modelo, Controlador* controlador);
	virtual ~Vista();
	void update();
	void render();
	void Draw();
	void loop();

private:
	void prepararCapa(Capa* capa,char const* imagen);

	Juego* juego;
	Controlador* controlador;
	Personaje* jugador;
	SDL_Renderer* ren;
	SDL_Window* win;
	bool running;
	int FPS = 60;
	int frameCount;
	int frameDelay = 1000/FPS;
	int timerFPS;
	Uint32 frameStart;
	int posicionActual;
	int accionActual;
	int parado;
	int caminar;
	int salto;
	int saltoPatada;
	int golpear;
	float posicionX;
	float posicionY;

	Capa* capa1;
	Capa* capa2;
	Capa* capa3;
	Nivel* nivel;
};

#endif /* VISTA_H_ */
