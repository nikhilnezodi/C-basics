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
    unsigned int isize; //size of this structure
    int width; //Image width in pixels
    int height; //Image height in pixels
    unsigned short planes; //Number of planes should be 1
    unsigned short bit_count; //Bits per pixel (e.g., 24 for 24-bit)
    unsigned int compression; //Compression type, 0 for no compression
    unsigned int size_image; // size of image data in bytes
    int Xpels_per_meter; // Horizontal resolution in pixels/meter
    int Ypels_per_meter; // Vertical resolution in pixels/meter
    unsigned int clr_used; // Number of colours used, 0 for all
    unsigned int clr_important; // Important colours, 0 for all
} INFOHEADER;

#pragma pack(pop)

int main()
{
    int width = 200;
    int height = 100;

    //Create headers
    HEADER hdr;
    INFOHEADER ihdr;

    hdr.type = 0x4D42; // 'BM'
    hdr.size = sizeof(HEADER) + sizeof(INFOHEADER) + width * height * 3;
    hdr.reserved = 0;
    hdr.offset = sizeof(HEADER) + sizeof(INFOHEADER);

    ihdr.isize = sizeof(INFOHEADER);
    ihdr.width = width;
    ihdr.height = height;
    ihdr.planes = 1;
    ihdr.bit_count = 24;
    ihdr.compression = 0;
    ihdr.size_image = 0;
    ihdr.Xpels_per_meter = 0;
    ihdr.Ypels_per_meter = 0;
    ihdr.clr_used = 0;
    ihdr.clr_important = 0;


    // Open File for writing
    FILE *fp = fopen("output.bmp","wb");
    if(fp == NULL)
    {
        printf("Error opening the file\n");
        return 1;
    }

    //Write Headers
    fwrite(&hdr, sizeof(HEADER), 1, fp);
    fwrite(&ihdr, sizeof(INFOHEADER), 1, fp);

    //Write pixel data (simple example: red gradient)
    for (int y = 0; y < height; y++)
    {
        for (int x =0; x < width; x++)
        {
            unsigned char red = 0;
            unsigned char green = 0;
            unsigned char blue = x*255/width;
            fwrite(&red,1,1,fp);
            fwrite(&green,1,1,fp);
            fwrite(&blue,1,1,fp);

        }
    }

    //Close file
    fclose(fp);
    return 0;
}
