#ifndef PQCLEAN_MLDSA87_AARCH64_PARAMS_H
#define PQCLEAN_MLDSA87_AARCH64_PARAMS_H

/*
 * This file is dual licensed
 * under Apache 2.0 (https://www.apache.org/licenses/LICENSE-2.0.html)
 * or public domain at https://github.com/pq-crystals/dilithium
 */

// #define DILITHIUM_MODE 2
// #define DILITHIUM_MODE 3
#define DILITHIUM_MODE 5

#define CRYPTO_NAMESPACE(s) PQCLEAN_MLDSA87_AARCH64_##s
#define CRYPTO_NAMESPACETOP crypto_sign
#define DILITHIUM_NAMESPACETOP CRYPTO_NAMESPACETOP
#define DILITHIUM_NAMESPACE(s) CRYPTO_NAMESPACE(s)

#define SEEDBYTES 32
#define CRHBYTES 64
#define TRBYTES 64
#define RNDBYTES 32
#define N 256
#define DILITHIUM_Q 8380417
#define D 13
#define ROOT_OF_UNITY 1753

#define K 8
#define L 7
#define ETA 2
#define TAU 60
#define BETA 120
#define GAMMA1 (1 << 19)
#define GAMMA2 ((DILITHIUM_Q-1)/32)
#define OMEGA 75
#define CRYPTO_ALGNAME "Dilithium5"
#define CTILDEBYTES 64

#define POLYT1_PACKEDBYTES  320
#define POLYT0_PACKEDBYTES  416
#define POLYVECH_PACKEDBYTES (OMEGA + K)

// GAMMA1 == (1 << 19)
#define POLYZ_PACKEDBYTES   640

// GAMMA2 == (DILITHIUM_Q-1)/88
#define POLYW1_PACKEDBYTES  128

#define POLYETA_PACKEDBYTES  96

#define DILITHIUM_CRYPTO_PUBLICKEYBYTES (SEEDBYTES + K*POLYT1_PACKEDBYTES)
#define DILITHIUM_CRYPTO_SECRETKEYBYTES (2*SEEDBYTES \
        + TRBYTES \
        + L*POLYETA_PACKEDBYTES \
        + K*POLYETA_PACKEDBYTES \
        + K*POLYT0_PACKEDBYTES)
#define DILITHIUM_CRYPTO_BYTES (CTILDEBYTES + L*POLYZ_PACKEDBYTES + POLYVECH_PACKEDBYTES)

#endif
