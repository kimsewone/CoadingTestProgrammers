//URL :https://school.programmers.co.kr/learn/courses/30/lessons/12916

#include <string>
#include <iostream>
#include <cctype>  

using namespace std;

bool solution(string s)
{
    int pCount = 0;
    int yCount = 0;

    for (char c : s)
    {
        char lower = tolower(c);  
        if (lower == 'p') ++pCount;
        else if (lower == 'y') ++yCount;
    }

    return pCount == yCount;
}
}