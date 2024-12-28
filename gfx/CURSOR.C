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




int cursor() { // basically just the update function
    int x, y, button, LX = -1, LY = -1, LXC1, LXC2, LXC3, LXC4;

    start(); // its just a shitty game engine now smh. i was considering adding delta time but that would make it less shitty so NO
    
    while (1) {
        if (kbhit()) {  
            char key = getch();  
            if (key == 27) { 
                closegraph();
                return 0;
            }   
            keygrab(key);
            }

        mousepos(&x, &y, &button);

        update(); // just making it official atp

        
        // idk why i just started commenting on my code after starting this project days ago

        if (button == 1) {
            leftclick(x, y);
        } else if (button == 2){
            rightclick(x, y);
        }

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
}