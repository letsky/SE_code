#include <stdio.h>
#include <stdlib.h>
#include "func.h"
void help()
{
    printf("There are eight commands:\n");
    printf("help,create,open,close,draw,destroy,fill,quit\n");
}

void create()
{
    printf("This is create command!\n");
}

void open()
{
    printf("This is open command!\n");
}

void close()
{
    printf("This is close command!\n");
}

void draw()
{
    printf("This is draw command!\n");
}

void destroy()
{
    printf("This is destroy command!\n");
}

void fill()
{
    printf("This is fill command!\n");
}

void quit()
{
    exit(0);
}
