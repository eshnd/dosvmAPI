// THIS FILE HAS EVERY FUNCTION THAT YOU PROBABLY NEED TO USE FOR OUR PROJECT
// btw if someone else is actually using this code, please ignore most of the comments, they are for my groupmates. ty!

void keygrab(int key){ // special part of update
    if (key == 52) { 
        char input[100]; // change this on how many characters you want user to be able to input.

        setcolor(WHITE);
        outtextxy(100, 100, "input:");

        textinput(200, 100, input, sizeof(input), "black"); // the "black" is the background color

        setcolor(GREEN);
        outtextxy(100, 200, "this is what ur input was:");
        outtextxy(200, 300, input);
    }   
    // add ifs here for keyboard clicks. it's using ascii code soooo good luck
    // i added the ascii key to resources/ascii.png to save you some time
    // you can do it!!! call me if u need help, i have no life
}

void leftclick(int x, int y){ // another special part of update
    px(x, x+5, y, y+5, "red");
}

void rightclick(int x, int y){ // yet another special part of update
    px(x, x, y, y, "blue");
}

void update(){
    return;
}
void taskbar(){
    px(0, 700, 440, 720, "red");
    px(0, 100, 440, 720, "red");
}
void start(){
    px(50, 200, 50, 200, "blue");
    printf(getpx(70, 70));
    taskbar();
    
}


// tc engine.c & compile it, compiling this script will lead to several errors because of 0 inclusions lol
