#ifndef MAIN_H
#define MAIN_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

int32_t add(int32_t a, int32_t b);
int32_t sum(void);

#ifdef __cplusplus
} // extern "C"
#endif

extern uint8_t zenbuf[1024];

#endif // MAIN_H
