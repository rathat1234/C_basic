#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

bool is_little_endian();
uint32_t swap_endian(uint32_t val);

int main(int argc, char const *argv[])
{
    uint32_t network_date = 0x12345678;
    printf("=== Day 2: Endianness Conversion ===\r\n");
    printf("Received Data (Hex): 0x%x\r\n", network_date);

    if (is_little_endian(network_date))
    {
        printf("[System check] this system is Little Endian. \r\n");
        printf("-> Need to swap bytes to match Host Order. \r\n");
        uint32_t host_data = swap_endian(network_date);

        printf("Original (Network):%x\r\n", network_date);
        printf("Converted (Host):%x\r\n", host_data);

        uint8_t *ptr = (uint8_t *)&host_data;
        printf(" Dump: [%02x] [%02x] [%02x] [%02x] (Low Addr -> High Addr)\r\n",
               ptr[0], ptr[1], ptr[2], ptr[3]);

        // Memory Dump: [12] [34] [56] [78] (Low Addr -> High Addr)
    }
    return 0;
}

bool is_little_endian()
{
    uint32_t num = 0x01;
    uint8_t *first_byte = (uint8_t *)&num;
    if (first_byte[0] == 1)
        return true;
    return false;
}

uint32_t swap_endian(uint32_t val)
{
    return ((val >> 24) & 0x000000FF |
            (val >> 8) & 0x0000FF00 |
            (val << 8) & 0x00FF0000 |
            (val << 24) & 0xFF000000);
}