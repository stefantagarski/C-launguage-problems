//Да се напише програма во која од тастатура се внесуваат непознат број мали
//букви сѐ додека не се внесе знак што не е мала буква. За секој пар
//последователни букви, во нов ред треба да се испечати секвенца од буквите во
//абецеден редослед што се наоѓаат меѓу нив (без нив) проследено со вкупниот
//број на вакви букви. Секогаш печатењето се почнува од буквата што се наоѓа
//понапред во азбуката кон таа што е поназад. Ако парот букви е составен од две
//соседни букви во азбуката, не се печати ништо. На крај да се испечати
//вкупниот број на испечатени секвенци од букви.


#include <stdio.h>

int main() {
    char prv, vtor;
    int brojac = 0;
    scanf("%c", &prv);
    if(prv>='a' && prv<='z'){
        while(1){
            scanf("%c", &vtor);
            if(vtor>='a' && vtor<='z'){
                if(prv>vtor){
                    int i;
                    brojac++;
                    for(i=(vtor+1); i<prv; i++){
                        printf("%c", i);
                    }
                    printf(" %d\n", prv-(vtor+1));
                }else if(vtor>prv){
                    int i;
                    brojac++;
                    for(i=(prv+1); i<vtor; i++){
                        printf("%c", i);
                    }
                    printf(" %d\n", vtor-(prv+1));
                }
            }else{
                break;
            }
            prv = vtor;
        }
        printf("%d", brojac);
    }
    return 0 ;
}