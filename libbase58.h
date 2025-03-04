#ifndef LIBBASE58_H
#define LIBBASE58_H

#include <stddef.h>
extern "C" {

extern bool (*b58_sha256_impl)(void *, const void *, size_t);

//2-times call , first one to grab size
extern bool b58tobin(void *bin, size_t *binsz, const char *b58, size_t b58sz); 
extern int b58check(const void *bin, size_t binsz, const char *b58, size_t b58sz);

extern bool b58enc(char *b58, size_t *b58sz, const void *bin, size_t binsz);
extern bool b58check_enc(char *b58c, size_t *b58c_sz, unsigned char ver, const void *data, size_t datasz);

}
#endif
