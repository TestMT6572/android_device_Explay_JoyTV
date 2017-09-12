#include <stdint.h>

extern int _ZN7android16MediaBufferGroupC1Ej(void **buffer, bool nonBlocking);
int _ZN7android16MediaBufferGroupC1Ev(void **buffer) {
    return _ZN7android16MediaBufferGroupC1Ej(buffer, false);
}

extern int _ZN7android16MediaBufferGroup14acquire_bufferEPPNS_11MediaBufferEb(void **buffer, bool nonBlocking);
int _ZN7android16MediaBufferGroup14acquire_bufferEPPNS_11MediaBufferE(void **buffer) {
    return _ZN7android16MediaBufferGroup14acquire_bufferEPPNS_11MediaBufferEb(buffer, false);
}