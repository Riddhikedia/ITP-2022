#include<stdio.h>

struct employee {
    int code;
    char name[30];
    int date;
    int month;    
    int year;
} all[10];

int main(){

    // adding random employee data
    struct employee e1={
        1, "Rajesh Sharma", 20, 4, 2019
    };
    struct employee e2={
        2, "Mukesh Verma", 2, 10, 2018
    };
    struct employee e3={
        69, "Vijesh Garg", 11, 9, 2017
    };
    struct employee e4={
        42, "Sukesh Mehta", 26, 11, 2020
    };
    struct employee e5={
        92, "Ramesh Tiwari",25, 1, 2021 
    };
    struct employee e6={
        5, "Yash Tyagi",19, 7, 2016
    };
     struct employee e7={
        25, "Aman Yadav",30, 5, 2013
    };
     struct employee e8={
        81, "Aditya Singh",29, 12, 2014
    };
     struct employee e9={
        55, "Ayush Kapoor",1, 2, 2022
    };
     struct employee e10={
        38, "Shubham Gupta",17, 8, 2020 
    };

    all[0] = e1; all[5] = e6;
    all[1] = e2; all[6] = e7;
    all[2] = e3; all[7] = e8;
    all[3] = e4; all[8] = e9;
    all[4] = e5; all[9] = e10;
    

    printf("Printing details of employees having tenure of more than 3 years.\nFirst enter today's date below in dd mm yyyy format:\n");
    
    //getting current year

    int year=2022, date=3, month = 2;

    scanf("%d %d %d", &date, &month, &year);
    printf("\nDetails:\n");


    //filtering employees

    for(int i=0; i<10; i++){

        if(all[i].year<year-3){

            printf("%d\t%s\t%d/%d/%d\n", all[i].code, all[i].name, all[i].date, all[i].month, all[i].year);

        } else if (all[i].year==year-3){

            if(all[i].month<month){

                printf("%d\t%s\t%d/%d/%d\n", all[i].code, all[i].name, all[i].date, all[i].month, all[i].year);

            } else if(all[i].month == month){

                if (all[i].date <= date){
                    
                    printf("%d\t%s\t%d/%d/%d\n", all[i].code, all[i].name, all[i].date, all[i].month, all[i].year);
                }
            }
        }
    }

    return 0;
}