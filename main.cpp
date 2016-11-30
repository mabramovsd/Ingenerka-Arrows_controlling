#include "TXLib.h"
#include "Abra.h"

int main()
{
    txCreateWindow(600, 400);
    HDC fon = txLoadImage("pics\\mormishki.bmp");
    int x = 200;
    int y = 300;

    for (int i = 0; i < 500; i++) {
        txBitBlt (txDC(), 0, 0, 800, 600, fon, 0, 0);
    
        if (GetAsyncKeyState(VK_LEFT)) {
            x = x - 5;
        }
        if (GetAsyncKeyState(VK_RIGHT)) {
            x = x + 5;
        }
        if (GetAsyncKeyState(VK_UP)) {
            y = y - 5;
        }
        if (GetAsyncKeyState(VK_DOWN)) {
            y = y + 5;
        }
        chel(x, y, 1, 1);
        chel((300 + 3*i) % 600, 50, 3, 0);
        txSleep(10);
    }
    txDeleteDC (fon);
    return 0;
}
