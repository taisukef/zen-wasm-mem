#ifndef MAIN_H
#define MAIN_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

int32_t main(int32_t len);

#ifdef __cplusplus
} // extern "C"
#endif

extern uint8_t parambuf[1024];
extern uintptr_t;
extern int32_t parambuflen;

#endif // MAIN_H
