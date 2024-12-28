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

int cursor() {
    int x, y, button, LX = -1, LY = -1, LXC1, LXC2, LXC3, LXC4;

    while (!kbhit()) {
        mousepos(&x, &y, &button);

        if (LX != -1 && LY != -1) {
                putpixel(LX, LY, LXC1);  
                putpixel(LX+1, LY, LXC2);  
                putpixel(LX, LY+1, LXC3);  
                putpixel(LX+1, LY+1, LXC4);

        }
        LXC1 = getpixel(x, y);
        LXC2 = getpixel(x+1, y);
        LXC3 = getpixel(x, y+1);
        LXC4 = getpixel(x+1, y+1);

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
