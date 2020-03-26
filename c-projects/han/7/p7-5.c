#include <stdio.h>
#include <stdlib.h>

unsigned int set(unsigned int x, int pos) {
    unsigned modify = 0x1 << pos;
    /* 1 << 3 -> 1000 */
    x = x | modify;
    return x;
}

unsigned int unset(unsigned int x, int pos) {
    unsigned modify = ~(0x1 << pos);
    x = x & modify;
    return x;
}

unsigned set_n(unsigned x,int pos,int n) {
    for (int i = 0; i < n; i++) {
        x = set(x, pos + i);
    }
    return x;
}

int main(int argc, char** argv) {

}