#include <sys/dir.h>
#include <sys/types.h>

#ifndef IGNORE_H
#define IGNORE_H

extern const char *evil_hardcoded_ignore_files[];
extern const char *ignore_pattern_files[];

void add_ignore_pattern(const char* pattern);

void cleanup_ignore_patterns();

void load_ignore_patterns(const char *ignore_filename);

int ignorefile_filter(struct dirent *dir);
int filename_filter(struct dirent *dir);

#endif
