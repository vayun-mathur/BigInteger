#include <math.h>
#include <complex>

void fft_ensure_table(int k);
void fft_forward(__m128d* T, int k, int threads);
void fft_inverse(__m128d* T, int k, int threads);
void fft_pointwise(__m128d* T, __m128d* A, int k);
void int_to_fft(__m128d* T, int k, const uint32_t* A, size_t AL);
void fft_to_int(__m128d* T, int k, uint32_t* A, size_t AL);