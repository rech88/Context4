#include <stdio.h>

#include "date.h"

DateTime minOfTwo (const DateTime a, const DateTime b) {
    if (a.year != b.year) {
        return (a.year < b.year) ? a : b;
    }
    if (a.month != b.month) {
        return (a.month < b.month) ? a : b;
    }
    if (a.day != b.day) {
        return (a.day < b.day) ? a : b;
    }
    if (a.hours != b.hours) {
        return (a.hours < b.hours) ? a : b;
    }
    if (a.minutes != b.minutes) {
    return (a.minutes < b.minutes) ? a : b;
    }
    return (a.seconds < b.seconds) ? a : b;
}

DateTime min (const DateTime *arr, int cnt) {
    DateTime minI = arr[0];
    for (int i = 1; i < cnt; i++) {
        minI = minOfTwo(minI, arr[i]);
    }
    return minI;
}

void printDate (const DateTime date) {
    printf("%d %d %d %d %d %d", date.year, date.month, date.day, date.hours, date.minutes, date.seconds);
}


DateTime makeDate (int year, int month, int day, int hours, int minutes, int seconds) {
    DateTime newDate;
    newDate.year = year; newDate.month = month; newDate.day = day;
    newDate.hours = hours; newDate.minutes = minutes; newDate.seconds = seconds;
    return newDate;
}

bool dateEquals(DateTime a, DateTime b) {
    return ((a.year == b.year) && (a.month == b.month) && (a.day == b.day) && (a.hours == b.hours)
            && (a.minutes == b.minutes) && (a.seconds == b.seconds));
}