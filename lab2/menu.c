#include <stdio.h>
#include <stdlib.h>

void help();
void create();
void open();
void close();
void draw();
void destroy();
void fill();
void quit();

int main()
{
    char cmd[20];
    while(1)
    {
        printf("please input your command:");
	scanf("%s",&cmd);
	if(strcmp(cmd,"help") == 0)
	{
	    help();
	}
	else if(strcmp(cmd,"create") == 0)
	{
	    create();
	}
	else if(strcmp(cmd,"open") == 0)
	{
	    open();
	}
	else if(strcmp(cmd,"close") == 0)
	{
	    close();
	}
	else if(strcmp(cmd,"draw") == 0)
	{
	    draw();
	}
	else if(strcmp(cmd,"destroy") == 0)
	{
	    destroy();
	}
	else if(strcmp(cmd,"fill") == 0)
	{
	    fill();
	}
	else if(strcmp(cmd,"quit") == 0)
	{
	    quit();
	}
	else
	{
	    printf("please input other command!!\n");
	}
    }
}

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
