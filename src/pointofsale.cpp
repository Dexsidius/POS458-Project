#include "pointofsale.h"

POS::POS(){

}

int POS::Start(int argc,char** argv){
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER);

    window = SDL_CreateWindow("MSU Point of Sale", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_FLAGS);

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
    

}

void POS::Loop(){

}

void POS::Render(){

}

void POS::Timesheet(){
    

}