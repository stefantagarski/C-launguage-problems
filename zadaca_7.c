//За даден центар на кружница и нејзин радиус да се одреди низ кои квадранти минува кружницата.

#include <stdio.h>

int main() {

        float x, y, radius;

        scanf("%f%f%f", &x, &y, &radius);
        int kv1 = 0, kv2 = 0, kv3 = 0, kv4 = 0;
        if (x == 0.0 && y == 0.0) {
            printf("1111");
            return 0;
        }

        if (x > 0 && y > 0) { //centarot e vo I kvadrant
            kv1 = 1;
            if (radius > y) {
                kv4 = 1;
            }
            if (radius > x) {
                kv2 = 1;
            }

            if (radius * radius > (x * x + y * y)) { //radiusot e pogolem od rastojanieto od centarot do (0,0)
                kv3 = 1;
            }
        }

        if (x>0 && y<0) {
            kv2=1;

        }
        return 0;
    }
