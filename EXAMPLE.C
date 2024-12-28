#include "ENGINE.C"

int main() {
    init();
    px(50, 200, 50, 200, "blue");
    printf(getpx(70, 70));
    cursor();
    
    return 0;
}