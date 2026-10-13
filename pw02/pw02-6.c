#include <stdio.h>
#include <stdint.h>

int main(void) {
    int input;
    scanf("%d", &input);

    uint8_t value = (uint8_t)input;
    uint8_t add = (uint8_t)(value + 10);
    uint8_t mul2 = (uint8_t)(value * 2);
    uint8_t sqr = (uint8_t)(value * value);

    printf("ADD: %u\n", (unsigned int)add);
    printf("MUL2: %u\n", (unsigned int)mul2);
    printf("SQR: %u\n", (unsigned int)sqr);

    return 0;
}
