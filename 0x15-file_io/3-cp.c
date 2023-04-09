#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - read 1024 bytes at a time
 * @file: File name where the buffer stores char
 * Return: return allocated buffer
 */

char *create_buffer(char *file);
void close_file(int fd);


