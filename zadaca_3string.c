#include<stdio.h>

#include<ctype.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile();
    char c;
    float lower =0,upper =0;
    FILE *f = fopen("text.txt","r");
    while((c= fgetc(f)) == EOF){
        if(isalpha(c)){
            if(islower(c)){
                lower++;
            }
            else {
                upper++;
            }
        }
    }

    fprintf(f,"%.4f %,4f",upper/(upper+lower),lower/(upper+lower));


}