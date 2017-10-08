#include "func.h"

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
