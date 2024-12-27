#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h> 

void mousepos(int *x, int *y, int *button) {
    union REGS r;
    r.x.ax = 0x03; 
    int86(0x33, &r, &r);

    *button = r.x.bx; 
    *x = r.x.cx;
    *y = r.x.dx;
}

int main() {
    int gd = DETECT, gm;
    int x, y, button, LX = -1, LY = -1;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    while (!kbhit()) {
        mousepos(&x, &y, &button);

        if (LX != -1 && LY != -1) {
            putpixel(LX, LY, 0);  
            putpixel(LX+1, LY, 0);  
            putpixel(LX, LY+1, 0);  
            putpixel(LX+1, LY+1, 0);  
        }

        putpixel(x, y, 15);
        putpixel(x+1, y, 15);  
        putpixel(x, y+1, 15);  
        putpixel(x+1, y+1, 15);  

        LX = x;
        LY = y;

    }

    closegraph();

    return 0;
}
