#pragma once

#include "headers.h"

#ifndef pointofsale_h
#define pointofsale_h

class POS{
    public:
    POS();
    ~POS();

    int Start(int argc, char** argv);
    void Loop();
    void Render();

    void Timesheet(); 



    private:
    string current_user;
    char password;

    int SCREEN_WIDTH = 640;
    int SCREEN_HEIGHT = 480;

    SDL_Window* window;
    SDL_WindowFlags WINDOW_FLAGS = (SDL_WindowFlags)(SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
    SDL_RendererFlags RENDERER_FLAGS = SDL_RENDERER_PRESENTVSYNC;

    SDL_Event event;
    
};

#endif pointofsale_h