#ifndef _MAIN_H_
#define _MAIN_H_

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>
#include <stdio.h>


ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
