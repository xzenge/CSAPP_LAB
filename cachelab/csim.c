#include "cachelab.h"
#include <stdio.h>
#include <unistd.h>
#include <getopt.h>
#include <stdlib.h>

struct cache_line{ 
    unsigned int valid;

};

// ./csim -s 1 -E 1 -b 1 -t traces/yi2.trace
int main(int argc, char **argv)
{
    
    int hits,misses,evictions;
    int s,E,b,opt;
    char *t;
    //pares arg
    while((opt = getopt(argc,argv,"s:E:b:t:")) != -1){
        switch (opt){
            case 's':
                s = atoi(optarg);
                break;
            case 'E':
                E = atoi(optarg);
                break;
            case 'b':
                b = atoi(optarg);
                break;
            case 't':
                t = optarg;
                break;
            default:
                printf("wrong argument\n");
                break;
        }
    }
    printf("s=%d E=%d b=%d t=%s \n",s,E,b,t);

    //malloc 
    int S=1;
    for(int i = 0;i < s;i++){
        S*=2;
    }
    struct cache_line *cl;
    cl = (struct cache_line *)malloc(S * E * sizeof(struct cache_line));

    //read file
    FILE *pFile;
    pFile = fopen(t,"r");
    char	identifier;	
    unsigned	address;	
    int	size;	
    while(fscanf(pFile," %c	%x,%d",	&identifier,&address,&size)>0){	
        printf("identifier=%c address=%x size=%d \n",identifier,address,size);
    }	
    fclose(pFile);

    hits=0;
    misses=0;
    evictions=0;


    //malloc 
    //read 

    //cache

    printSummary(hits, misses, evictions);
    return 0;
}
