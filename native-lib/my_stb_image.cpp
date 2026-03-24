#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

unsigned char* my_stbi_load(const char *filename, int *x, int *y, int *comp, int req_comp){
    return stbi_load(filename, x, y, comp, req_comp);
}
void my_stbi_image_free(unsigned char* image){
    stbi_image_free(image);
}
