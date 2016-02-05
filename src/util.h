#ifndef __UTIL_H__
#define __UTIL_H__
#include <stdio.h>
#include <sys/stat.h>
#include <ftw.h>
#include <stdint.h>
void check_file_read(char *file_name, FILE *fp, size_t exp, size_t obs);
int unlink_cb(const char *fpath,
              const struct stat *sb,
              int typeflag,
              struct FTW *ftwbuf);
int rmrf(char *path);
int uint32_t_cmp(const void *_a, const void *_b);
#endif
