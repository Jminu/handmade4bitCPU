#ifndef REGISTER_H
#define REGISTER_H

//하위 4개의 비트만 필요하므로 상위 4개의 비트는 무시하도록 해야한다. -> bit mask사용
#define BIT_MASK 0x0f //상위 4개 비트 무시

//extern으로 외부에서 사용 가능하도록
extern unsigned char s_R0;
extern unsigned char s_R1;
extern unsigned char s_R2;
extern unsigned char s_R3;

void set_register(unsigned char* reg, unsigned char value);

#endif //REGISTER_H
