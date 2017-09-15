#include "TXLib.h"
using namespace std;
//Илья Цюрюпа

int main()
{
    int p;
    int x =1300;
    int y =600;

    txCreateWindow(x, y);
    HDC a  = txLoadImage ("a.bmp");
    HDC b  = txLoadImage ("b.bmp");
    HDC c  = txLoadImage ("c.bmp");
    HDC v  = txLoadImage ("v.bmp");



    printf("Выберите автомобиль\n1-McLaren P1\n2-Ferrari Enzo\n3-Газель Next\n");
    scanf("%d", &p);

    if (p == 1) {
    txBitBlt  (txDC(), 0, 0, x, y, a, 0, 0);
    txBitBlt(txDC(), 0, 60, 400, 160, v, 0, 0);
    }
    if (p == 2) {
    txBitBlt  (txDC(), 0, 0, x, y, b, 0, 0);
    txBitBlt(txDC(), 0, 70, 400, 170, v, 0, 0);
    }

    if (p == 3) {
    txBitBlt  (txDC(), 0, 0, x, y, c, 0, 0);
    txBitBlt  (txDC(), 50, 30, 450, 130, v, 0, 0);
    }

    txDeleteDC(a);
    txDeleteDC(b);
    txDeleteDC(c);
    txDeleteDC(v);
}
