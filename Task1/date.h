#pragma once

typedef struct DateTime_s {
int year, month, day;
int hours, minutes, seconds;
} DateTime;

DateTime min (const DateTime *arr, int cnt);

void printDate (DateTime date);

DateTime makeDate (int year, int month, int day, int hours, int minutes, int seconds);

bool dateEquals(DateTime a, DateTime b);