#pragma once

unsigned char* my_stbi_load(const char *filename, int *x, int *y, int *comp, int req_comp);
void my_stbi_image_free(unsigned char* image);