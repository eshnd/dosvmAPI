// THIS FILE HAS EVERY FUNCTION THAT YOU PROBABLY NEED TO USE FOR OUR PROJECT
// btw if someone else is actually using this code, please ignore most of the comments, they are for my groupmates. ty!

int apps = 1;


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
    if (brange(x, y, 0, 100, 440, 720)){
        // add home function here
    }
}

void rightclick(int x, int y){ // yet another special part of update
}

void update(){
    return;
}

void taskbar(){
    px(0, 700, 440, 720, "blue");
    px(0, 100, 440, 720, "green");
    setcolor(YELLOW);
    outtextxy(35, 455, "home");
}

void app(char* name, char* color){
    int displacement = apps * 110;
    if (strcmp(color, "blue")){
        px(0+displacement, 100+displacement, 440, 720, color);
    } else {
        px(0+displacement, 100+displacement, 440, 720, "green");
    }
    if (strcmp(color, "black")){
        setcolor(BLACK);
    } else {
        setcolor(WHITE);

    }
    outtextxy(35+displacement, 455, name);
    apps = apps + 1;
}

void start(){
    taskbar();
    // each app should be 4 letters to be centered
    app("poo", "blue");
    app("poo", "green");
    app("poo", "black");
}


// tc engine.c & compile it, compiling this script will lead to several errors because of 0 inclusions lol
