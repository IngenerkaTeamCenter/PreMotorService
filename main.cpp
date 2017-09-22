#include "TXLib.h"
#include <string>

int main()
{
    char tmp[20];
    int x = 1300;
    int y = 600;

    txCreateWindow(x, y);
    HDC a = txLoadImage("a.bmp");
    HDC b = txLoadImage("b.bmp");
    HDC c = txLoadImage("c.bmp");
    HDC v = txLoadImage("v.bmp");
    HDC door = txLoadImage("door.bmp");
    HDC Reddoor = txLoadImage("Reddoor.bmp");
    HDC Whitedoor = txLoadImage("Whitedoor.bmp");



    std::cout << "1-McLaren P1\n2-Ferrari Enzo\n3-Gazel Next\n" << std::endl;
    std::cin >> tmp;
    int autom = std::atoi(tmp);

    std::cout << "1-Spoiler\n2-No spoiler\n" << std::endl;
    std::cin >> tmp;
    int spoiler = std::atoi(tmp);

    if (autom == 3 && spoiler == 1)
    {
        std::cout << "Error spoiler on Gazel\n" << std::endl;
        return(0);
    }

    if (autom == 1) {
        txBitBlt(txDC(), 0, 0, x, y, a, 0, 0);
        if (spoiler == 1)
        {
            txBitBlt(txDC(), 0, 60, 400, 160, v, 0, 0);
        }
    }
    if (autom == 2) {
        txBitBlt(txDC(), 0, 0, x, y, b, 0, 0);
        if (spoiler == 1)
        {
            txBitBlt(txDC(), 0, 70, 400, 170, v, 0, 0);
        }
    }

    if (autom == 3) {
        txBitBlt(txDC(), 0, 0, x, y, c, 0, 0);
    }

    txDeleteDC(a);
    txDeleteDC(b);
    txDeleteDC(c);
    txDeleteDC(v);
}
