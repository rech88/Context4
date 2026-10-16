#include <assert.h>
#include <stdio.h>

#include "date.h"

#define N1 2
#define N2 3
#define N3 4

// Тесты не работают не понимаю почему. Посмотри, пожалуйста

void test_min() {
    DateTime date1 =  makeDate(2018, 0, 0, 0, 0, 1);
    DateTime date2 =  makeDate(2018, 0, 0, 23, 0, 0);
    DateTime date3 =  makeDate(2019, 0, 0, 0, 0, 1);
    DateTime date4 =  makeDate(2018, 0, 0, 0, 50, 1);
    DateTime date5 =  makeDate(2018, 7, 0, 0, 0, 1);

    DateTime dates1[N1] = {date1, date2};
    DateTime* p1 = dates1;
    assert(dateEquals(min(p1, N1), date1));
    
    DateTime dates2[N2] = {date1, date2, date3};
    DateTime* p2 = dates2;
    assert(dateEquals(min(p2, N2), date1));
    
    DateTime dates3[N3] = {date1, date2, date4, date5};
    DateTime* p3 = dates3;
    assert(dateEquals(min(p3, N3), date1));
}

int main () {

    test_min();

    printf("All tests complited!");
}