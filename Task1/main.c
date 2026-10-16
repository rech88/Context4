#include <stdio.h>

#include "date.h"

int main() {
    int n;
    scanf("%d", &n);
    
    DateTime dataArr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d %d %d", &dataArr[i].year, &dataArr[i].month, &dataArr[i].day,
                                    &dataArr[i].hours, &dataArr[i].minutes, &dataArr[i].seconds);
    }

    DateTime* pDataArr = dataArr;
    DateTime minData = min(pDataArr, n);
    printDate(minData);
}