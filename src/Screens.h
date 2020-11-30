#pragma once
#include "headers.h"
#include "pointofsale.h"
#include "tickets.h"

#ifndef screens_h
#define screens_h

class Screens {
	public:
		Screens(SDL_Renderer*);
		void Process(enum state);
		void Render(enum state, SDL_Renderer*);

	private:
		SDL_Renderer* renderer;

};

#endif screens_h
