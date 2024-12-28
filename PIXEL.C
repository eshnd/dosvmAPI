#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>

void init(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
}

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

char* getpx(int x, int y){
    int dc_color = getpixel(x, y);

    if (dc_color == 0){
        return "black";
    } else if (dc_color == 1){
        return "blue";
    } else if (dc_color == 2){
        return "green";
    } else if (dc_color == 4){
        return "red";
    } else if (dc_color == 6){
        return "brown";
    } else if (dc_color == 7){
        return "grey";
    } else if (dc_color == 14){
        return "yellow";
    } else if (dc_color == 14){
        return "white";
    }
    return "unsupported color";
}

