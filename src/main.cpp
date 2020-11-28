#include "pointofsale.h"

int main(int argc, char* args[]){
    POS pos;
    
    if (!pos.Start(argc, args)){
        return -1;
    }else{
        pos.Loop();
    }
    

    return 0;
}