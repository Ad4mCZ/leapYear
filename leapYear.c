#include <stdio.h>

int isLeap(int year);
//int onlyLeap(int year);

int main() {
    isLeap(1000);
    isLeap(2000);
    isLeap(2002);
    isLeap(2012);
    isLeap(2022);
    isLeap(2200);
    // for (int i = 0; i < 1000000; i++)
    // {
    //     onlyLeap(i);
    // }
    return 0; 
}

int isLeap(int year){
    int result;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("%d \t1 \n", year);
    }
    else printf("%d \t0 \n", year);

    return 0;
}

// int onlyLeap(int year){
//     int result;
//     if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//     {
//         printf("%d is a leap year \n", year);
//     }

//     return 0;
// } 
