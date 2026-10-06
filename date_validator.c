#include <stdio.h>
int is_leap_year(int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int get_days_in_month(int month, int year){
    switch(month){
        case 4: case 9: case 6: case 11:
            return 30;
        case 2:
            return is_leap_year(year) ? 29 : 28;
        default:
            return 31;
    }
}
int main(){
    int day, month, year;
    printf("Enter day, month and year (separated by space): ");
    if (scanf("%d %d %d", &day, &month, &year) != 3){
        printf("Error: Invalid date.\n");
        return 1;
    }
    if (year <= 0 || month < 1 || month > 12){
        printf("Error: Invalid date.\n");
        return 1;
    }
int max_days = get_days_in_month(month, year);
    if (day < 1 || day > max_days){
        printf("Error: Invalid date.\n");
        return 1;
    }
printf("%02d.%02d.%04d\n", day, month, year);

return 0;
}