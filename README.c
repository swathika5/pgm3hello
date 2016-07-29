# pgm3hello
#include <stdio.h>

int main(void) {
    char a[]={"hello"};
    int i,j;
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        printf("%c",a[j]);
        printf("\n");
    }
       
	// your code goes here
	return 0;
}

