#include "pointofsale.h"

POS::POS(){

}

int POS::Start(int argc,char** argv){
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER);

    window = SDL_CreateWindow("MSU Point of Sale", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_FLAGS);

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
    
    mouse = new Pointer;
    
    return 1;

}

void POS::Loop(){
    while (running) {
        Process();
        Render();
        SDL_Delay(5);
    }

}

void POS::Process() {
    while (SDL_PollEvent(&event)) {

        mouse->Compute(&event);
        mouse->Process();

        //Event Polling
        if (event.type == SDL_QUIT) {
            running = false;
            break;
        }

        if (event.type == SDL_WINDOWEVENT) {
            if (event.window.event == SDL_WINDOWEVENT_CLOSE && event.window.windowID == SDL_GetWindowID(window)) {
                running = false;
                break;
            }
            if (event.window.event == SDL_WINDOWEVENT_RESIZED) {
                SCREEN_WIDTH = event.window.data1;
                SCREEN_HEIGHT = event.window.data2;
            }
        }
    }

    //Application Loop
    switch (state) {
        case MAIN_MENU: {}break;
        case FOOD: {}break;
        case TABS: {}break;
        case ORDERS: {}break;
    }
}

void POS::Render(){
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
    SDL_RenderClear(renderer);

    switch (state) {
        case MAIN_MENU: {}break;
        case FOOD: {}break;
        case TABS: {}break;
        case ORDERS: {}break;
    }
    SDL_RenderPresent(renderer);

}

void POS::Timesheet(){
    

}

POS::~POS() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
}