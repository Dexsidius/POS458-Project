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

    int SCREEN_WIDTH = 640, SCREEN_HEIGHT = 480;

    //SDL Objects
    SDL_Window* window;
    SDL_Renderer* renderer;

    SDL_WindowFlags WINDOW_FLAGS = (SDL_WindowFlags)(SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
    SDL_RendererFlags RENDERER_FLAGS = SDL_RENDERER_PRESENTVSYNC;

    SDL_Event event;

    void Process();

    //Screen States
    enum Screens{MAIN_MENU = 0, FOOD = 1, TABS = 2, ORDERS = 3} state;

    //Booleans

    bool running = true;
    bool user_clockedin = false;

    //Objects
    Pointer* mouse;

    
};

#endif pointofsale_h