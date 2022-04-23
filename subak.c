#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    
    char* s = "수";
    char* b = "박";
    
    int len = strlen(b);
    
    char* answer = (char*)malloc(sizeof(len)*n);
    
    for(int i=0; i<n; i++) {
        if (i%2==0) {
            strcpy(answer+(i*len), s);
        }
        else {
            strcpy(answer+(i*len), b);
        }
    }
    
    return answer;
}