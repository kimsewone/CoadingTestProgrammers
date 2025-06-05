//URL : https://school.programmers.co.kr/learn/courses/30/lessons/388351

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int add10min(int time) {
    int hour = time / 100;
    int min = time % 100;
    min += 10;
    if (min >= 60) {
        hour += 1;
        min -= 60;
    }
    return hour * 100 + min;
}

int getDay(int startday, int offset) {
    return ((startday - 1 + offset) % 7) + 1;
}

int solution(int schedules[], size_t schedules_len, int** timelogs, size_t timelogs_rows, size_t timelogs_cols, int startday) {
    int answer = 0;
    for (int i = 0; i < schedules_len; i++) {
        int limit = add10min(schedules[i]);
        bool onTimeAllWeek = true;
        for (int j = 0; j < 7; j++) {
            int day = getDay(startday, j); 
            if (day == 6 || day == 7) continue;
            int arrive = timelogs[i][j];
            if (arrive > limit) {
                onTimeAllWeek = false;
                break; 
            }
        }
        if (onTimeAllWeek) answer++;
    }
    return answer;
}
