#include <stdio.h>
#include <stdint.h>

int main(void) {
    unsigned int id_input;
    unsigned int status_input;
    float voltage;

    scanf("%x %o %f", &id_input, &status_input, &voltage);

    int packet_id = (int)id_input;
    uint8_t status_code = (uint8_t)status_input;
    uint16_t checksum = (uint16_t)(id_input + status_code);

    printf("PACKET_ID: %d\n", packet_id);
    printf("STATUS_CODE: %u\n", (unsigned int)status_code);
    printf("STATUS_CHAR: %c\n", (char)status_code);
    printf("VOLTAGE: %.2f\n", voltage);
    printf("CHECKSUM: %u\n", (unsigned int)checksum);

    return 0;
}
