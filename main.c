#include <stdio.h>
#include <stdlib.h>
#include "libpafe/libpafe.h"

#define SUICA_SERVICE_CODE 0x090f
#define SUICA_HISTORY_MAX 20

void dump_suica(felica* f) {
    uint8 b[FELICA_BLOCK_LENGTH];
    for (int i = 0; i < SUICA_HISTORY_MAX; ++i) {
        if (0 != felica_read_single(f, SUICA_SERVICE_CODE, 0, i, b))
            continue;

        printf(" dev:%3d", b[0]);
        printf(" mode:%3d", b[1]);
        printf(" ??:0x%02x%02x", b[2], b[3]);
        printf(" date:0x%02x%02x", b[4], b[5]);
        printf(" from:0x%02x%02x", b[6],b[7]);
        printf(" to:0x%02x%02x", b[8], b[9]);
        printf(" remain:%5d", b[10] + (b[11]<<8));
        printf(" seq:0x%02x%02x%02x", b[12], b[13], b[14]);
        printf(" region:%d\n", b[15]);
    }
}

int main(int argc, char** argv) {
    pasori* p;

    if (!(p = pasori_open()))
        return 1;

    if (0 != pasori_init(p))
        return 2;

    felica* f;
    if (!(f = felica_polling(p, FELICA_POLLING_SUICA, 0, 0)))
        return 3;

    dump_suica(f);

    free(f);
    pasori_close(p);

    return 0;
}
