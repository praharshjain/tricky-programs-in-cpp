#include <stdio.h>
int main ()
{
    int a=10, b=0, c=10;
    char* bits ="TFy!QJu ROo TNn(ROo)SLq SLq ULo+UHs UJq TNn*RPn/QPbEWS_JSWQAIJO^NBELPeHBFHT}TnALVlBLOFAkHFOuFETpHCStHAUFAgcEAelclcn^r^r\\tZvYxXyT|S~Pn SPm SOn TNn ULo0ULo#ULo-WHq!WFs XDt!";
    a = bits[b];
    while (a != 0)
    {
        a = bits[b];
        b++;
        while (a > 64)
        {
            a--;
            if (++c == 'Z')
            {
                c /= 9;
                putchar(c);
            }
            else
                putchar(33 ^ (b & 0x01));
        }
    }
    return 0;
}