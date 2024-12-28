// THIS EXAMPLE FILE HAS EVERY FUNCTION THAT YOU PROBABLY NEED TO USE FOR OUR PROJECT
// btw if someone else is actually using this code, please ignore most of the comments, they are for my groupmates. ty!

#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>

#include "PIXEL.C"

void keygrab(int key){ // special part of update
    if (key == 52) { 
        outtextxy(100,100,"you pressed 4. i am so proud of you :,)");
    }   
    // add ifs here for keyboard clicks. it's using ascii code soooo good luck
    // i added the ascii key to resources/ascii.png to save you some time
    // you can do it!!! call me if u need help, i have no life
}

void mousedown(int x, int y){ // another special part of update (only includes left mouse button, right clicks are for losers)
    px(x, x+5, y, y+5, "red");
}

void update(){
    return;
}

void start(){
    px(50, 200, 50, 200, "blue");
    printf(getpx(70, 70));
}
#include "CURSOR.C"


int main() {
    init();
    start();
    cursor();
    return 0;
}
