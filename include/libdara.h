#ifndef LIBDARA_H
#define LIBDARA_H

int ld_islower(int c);
int ld_isupper(int c);
int ld_isdigit(int c);
int ld_isalnum(int c);
int ld_isalpha(int c);

size_t ld_strlen(const char *s);
size_t ld_strnlen(const char *s, size_t maxlen);

#endif