#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>

void init(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
}






// start:
//     char input[100];

//     setcolor(WHITE);
//     outtextxy(100, 100, "Enter text:");

//     textinput(200, 100, input, sizeof(input));

//     setcolor(WHITE);
//     outtextxy(100, 200, "You entered:");
//     outtextxy(200, 200, input);



void px(int x1, int x2, int y1, int y2, char* color){

	int dc_color;
	int x = x1;
	int x_c = (x2 + 1);
	int y = y1;
	int y_c = (y2 + 1);

    if (strcmp(color, "black") == 0){
        dc_color = 0;
    } else if (strcmp(color, "blue") == 0){
        dc_color = 1;
    } else if (strcmp(color, "green") == 0){
        dc_color = 2;
    } else if (strcmp(color, "red") == 0){
        dc_color = 4;
    } else if (strcmp(color, "brown") == 0){
        dc_color = 6;
    } else if (strcmp(color, "grey") == 0){
        dc_color = 7;
    } else if (strcmp(color, "yellow") == 0){
        dc_color = 14;
    } else if (strcmp(color, "white") == 0){
        dc_color = 15;
    }


	while (x < x_c){
		y = y1;
		while (y < y_c){
			putpixel(x, y, dc_color);
			y++;
		}
		x++;
	}
}

void pxb(int x1, int x2, int y1, int y2, int color){

	int x = x1;
	int x_c = (x2 + 1);
	int y = y1;
	int y_c = (y2 + 1);


	while (x < x_c){
		y = y1;
		while (y < y_c){
			putpixel(x, y, color);
			y++;
		}
		x++;
	}
}

char* getpx(int x, int y){
    int dc_color = getpixel(x, y);

    switch (dc_color) {
    case 0:
        return "black";
    case 1:
        return "blue";
    case 2:
        return "green";
    case 4:
        return "red";
    case 6:
        return "brown";
    case 7:
        return "grey";
    case 14:
        return "yellow"; 
    case 15:
        return "white"; 
}
    return "unsupported color";
}
void textinput(int x, int y, char *buffer, int maxLength, char* bg) { // this probably shouldn't be in "pixel.c" but do i care? no.
    int i = 0;
    char ch;
    char str[2]; 

    while (1) {
        ch = getch();

        if (ch == '\r') { 
            buffer[i] = '\0';
            break;
        } else if (ch == '\b') {
            if (i > 0) {
                i--;
                buffer[i] = '\0';
                px(x + i * 8, x + (i + 1) * 8, y, y + 8, bg); // just found out there was a prebuilt function for this, im an idiot lol
                setcolor(WHITE);
            }
        } else if (i < maxLength - 1) {
            buffer[i++] = ch;
            buffer[i] = '\0';
            str[0] = ch;
            str[1] = '\0'; 
            outtextxy(x + (i - 1) * 8, y, str);
        }
    }
}

int brange(int x, int y, int x1, int x2, int y1, int y2){
	if (x > x1){
		if (x < x2){
			if (y > y1){
				if (y < y2){
					return 1;
				}
			}
		}
	}
	return 0;
}
