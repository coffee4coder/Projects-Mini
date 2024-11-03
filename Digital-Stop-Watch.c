#include<stdio.h>
#define CYCLE 60
#include<conio.h>
#include<unistd.h> // For sleep functions in Unix

// Cross-platform screen clearing
void clrscr() {
    #ifdef _WIN32
        system("cls");
    #else
        printf("\e[1;1H\e[2J");
    #endif
}

int main(){
    int hour,minute,second;
    printf("Enter Hour-Minute-Second: ");
    scanf("%d%d%d",&hour,&minute,&second);
    clrscr();

    int h = 0, m = 0, s = 0;
    while(1){
        printf("\n\n******** STOP WATCH ********\n\n\n");
        printf("         \033[0;32m%.2d:%.2d:%.2d\033[0m\n", h, m, s);
        //printf("         %.2d:%.2d:%.2d\n", h, m, s);
        printf("\n\n****************************\n\n\n");
           
        if(h == hour && m == minute && s == second){
            break;
        }else{
            clrscr();
        }
        s++;
        sleep(1);
        if(s == CYCLE){
            m++;
            s = 0;
        }
        if(m == CYCLE){
            h++;
            m = 0;
        }
    }
    
    // End message
    printf("\n\n\033[1;31mTime's up!\033[0m\n\n");
    return 0;
}
