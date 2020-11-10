/* This is free and unencumbered software released into the public domain. */
#include <stddef.h>
#include <stdint.h>

#define SIPHASH_KEYLEN 16

struct siphash {
    uint64_t v0, v1, v2, v3;
    uint64_t m;
};

void siphash128_init(struct siphash *, const void *key);
void siphash128_update(struct siphash *, const void *, size_t);
void siphash128_final(const struct siphash *, void *digest);
