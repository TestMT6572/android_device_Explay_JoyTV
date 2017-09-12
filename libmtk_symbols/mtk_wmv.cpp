#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <malloc.h>
#include <media/IMediaSource.h>

extern "C" {
int _ZN7android16MediaBufferGroupC1Ej(void **buffer, bool nonBlocking);
int _ZN7android16MediaBufferGroupC1Ev(void **buffer) {
    return _ZN7android16MediaBufferGroupC1Ej(buffer, false);
}

void _ZNK7android11MediaSource11ReadOptions9getSeekToEPxPNS1_8SeekModeE(
	    int64_t *time_us, int32_t *mode) {
     _ZNK7android12IMediaSource11ReadOptions9getSeekToEPxPNS1_8SeekModeE(time_us, mode);
}

int _ZN7android16MediaBufferGroup14acquire_bufferEPPNS_11MediaBufferEb(void **buffer, bool nonBlocking);
int _ZN7android16MediaBufferGroup14acquire_bufferEPPNS_11MediaBufferE(void **buffer) {
    return _ZN7android16MediaBufferGroup14acquire_bufferEPPNS_11MediaBufferEb(buffer, false);
}
}