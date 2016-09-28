#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	char str=(char *)malloc(20*sizeof(char));
	int n,i=0,open,close;
	scanf("%s",str);
	n=strlen(str);
    while(str[i]!='/0')
    {
    	if(str[i]=='(')
    	open++;
    	else if(str[i]==')')
    	close++;
    }
    if(open==close)
    printf("length=%d",open+close);
    else if(open>close&&close!=0)
    printf("length=%d",close*2);
    else if(open<close&&open!=0)
    printf("length=%d",open*2);
    else
    printf("length=0");

    
	return 0;
}
