#include <stdio.h>
#include <stdlib.h>

int transla(char DNA)
{   if(DNA=='A') return 0;
    if(DNA=='T') return 3;
    if(DNA=='C') return 1;
    if(DNA=='G') return 2;
    else return -1;
}
int *translation(char DNA[]){
    int i;
    int *num;
    num=(int *)malloc(100);
    for(i=0;*(DNA+i)!='\0';++i){
         *(num+i)=transla(*(DNA+i));
    }
    *(num+i) = -1;
    return num;
     
}

int main()
{   //char string="ATTCGGTCCAA";
    char DNA[100]={'A','T'};//{'T','C','G','G','T','C','C','A','A'};
    int *DNAnum;
	DNAnum=(int *)malloc(100);
	DNAnum=translation(DNA);
    int i;
    for(i=0;*(DNAnum+i)!=-1;++i)
    printf("%d\n",*(DNAnum+i));

    return 0;
}
