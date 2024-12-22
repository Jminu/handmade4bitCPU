#include "cpu.h"

#include "../memory/memory.h"
#include "../register/register.h"

void load_register(unsigned char* reg, unsigned char mem_address)
{
    unsigned char temp = memory[mem_address] & 0x0F; //메모리에서 가져온 값 상위4비트 무시
    *reg = temp;
}

void store_memory(unsigned char* reg, unsigned char* mem_address)
{
    char temp = *reg;
    temp = temp & BIT_MASK; //하위 4비트만 유지
    *mem_address = temp;
}
