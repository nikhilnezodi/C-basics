#include<stdio.h>
#include<stdlib.h>

#pragma pack(push,1)

// Bitmap file header structure
typedef struct{
    unsigned short type; //'BM' for Bitmap
    unsigned int size; //File size in bytes
    unsigned int reserved; //Reserved
    unsigned int offset; //Offset to the pixel data
} HEADER;

// Bitmap info header structure
typedef struct{
    unsigned int isize;
    int width;
    int height;
    unsigned short planes;
    unsigned short bit_count;
    unsigned int compression;
    unsigned int size_image;
    int Xpels_per_meter;
    int Ypels_per_meter;
    unsigned int clr_used;
    unsigned int clr_important;
} INFOHEADER;
