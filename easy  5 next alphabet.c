//something new
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter the string to alternate to next alphabet:\n");
    char str[100],str1[100];
    int i=0;
    while((str[i++]=getchar())!='\n' && i<100)
            ;
    str[i]='\0';
    int j,x ;
    for(j=0;j<i;j++)
       {
        x = str[j];
        x++;
        str1[j] = x;
       }
       str1[j-1]='\0';
       printf("%s",str1);
}
