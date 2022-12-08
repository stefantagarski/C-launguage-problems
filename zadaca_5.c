//Од тастатура се внесуваат должини на три отсечки во произволен редослед. Да се напише програма
// што ќе провери дали од отсечките може да се
// конструира триаголник, при што ако може, да се провери дали истиот е правоаголен и да се пресмета неговата плоштина.
// Во спротивно, треба да се испечатат соодветни пораки.


#include<stdio.h>

    int main() {
        float a, b, c;
        scanf("%f%f%f", &a, &b, &c);
    if ((a+b) > c && (a+c) > b && (b+c) > a )
    {
        float tmp;
        if ( a >b ){
            tmp =b;
            b = a;
            a = tmp;
        }
        if ( b > c){
            tmp = c;
            c = b;
            b = tmp;
        }
        if ( a > c){
            tmp = a;
            a = c;
            c = tmp;
        }
        if ( a*a + b*b == c*c){
            float area = a*b / 2;
            printf("The area of the triangle is  %.2f",area);
        }
        else {
            printf("The triangle is without a right angle");
        }
    }
    else{
        printf ("Cant form a triangle with sides %.2f, %.2f and %.2f", a , b, c);
    }
    return 0 ;
}