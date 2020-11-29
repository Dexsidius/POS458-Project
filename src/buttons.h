#pragma once

#include "headers.h"

#ifndef buttons_h
#define buttons_h

class Buttons {
	public:
		Buttons();
		Buttons(SDL_Renderer*);
		void Render(int, int, int);

		string text;
		string font_name;

		int WIDTH;
		int HEIGHT;
		int font_size;

		array<int, 3> color;
		array<int, 3> location;

		bool highlight = false;

		array<string, 2> fonts;

		SDL_Rect d_rect;
		void SetFont(string font, string location = "resources/font/");
		int RenderText(string text, int x, int y, int size, SDL_Color color = { 255, 50, 50, 255 }, int offset = 5);

	private:
		SDL_Renderer* renderer;
		map<string, map<char, SDL_Texture*>> characters;
		string current_font = "";


};


#endif buttons_h