// strtok

#include<stdio.h>
#include<string.h>
void main()
{
    char str[] = "Hello, to, the, world of, programming";
    char delim[] = ",";
    char *result;

    result = strtok(str,delim);
    
    while(result != NULL)
    {
        printf("\n %s",result);
        result = strtok(NULL,delim);

    }
}
