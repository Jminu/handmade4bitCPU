#include "register/register.h"
#include <stdio.h>
#include "cpu/cpu.h"
#include "memory/memory.h"
#include "assembler/assembler.h"
#include "fetcher/fetcher.h"
#include "decoder/decoder.h"


int main(void)
{
    char* code = NULL;
    char** parsed_code = NULL;

    while(1)
    {
        printf(">>>");
        code = input_command(); //명렁어 입력 ex) MOV R0 5
        parsed_code = parse_command(code); //코드 파싱
        set_command_to_memory(parsed_code); //코드를 메모리로 load
        fetch_instruction(); //fetch code
        decode(); //decode
        show_memory();
        show_register();
    }
}
