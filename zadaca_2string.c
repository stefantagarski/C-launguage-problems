#include <stdio.h>
#include<string.h>
#include<ctype.h>
int contains(char *s,int k,char c);
int main() {

    int n,k;
    char c;
    scanf("%d %d %c\n",&n,&k,&c);
    char string[100];
    int counter = 0;
    for(int i=0;i<n;i++){
        fgets(string, sizeof string, stdin);
        if(contains(string, k, c)){
            counter++;
            printf("%s", string);
        }
    }
     if (counter == 0){
        printf("NONE");
    }

    return 0;
}

int contains(char *s,int k,char c){
    int counter = 0;
    for(int i=0;i< strlen(s);i++){
        if(tolower(s[i]) == tolower(c)){
            counter++;
        }
    }
    if(counter == k) {
        return 1;
    }
    return 0;
}