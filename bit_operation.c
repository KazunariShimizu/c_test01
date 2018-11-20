#include <stdio.h>
int main()
{
    unsigned char a = 0xaa;
    unsigned char f = 0xff;
    unsigned char r_seki,r_shift;
    r_seki = a & f;
    r_shift = f >> 2;
    printf("aとfの論理和は%#xです\n",r_seki);
    printf("fを右に2ビットシフトすると%#xです。",r_shift);
    return 0;
}