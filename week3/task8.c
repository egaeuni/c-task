/*
𝐐8. 알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.
(단, 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 함수로 작성하고 출력도 함수에서 하시오)
✔️ 입력 : 첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.
✔️ 출력 : 첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.
*/
#include <stdio.h>
#include <string.h>

void frequent(char word[]);

int main(void) {
    char arr[1000001]; 
    scanf("%1000000s", arr);
    frequent(arr);
    return 0;
}

void frequent(char word[]) {
    int freq[26] = {0};
    for (int i = 0; word[i] != '\0'; i++) {
        char ch = word[i];
        if ((ch >= 'a') && (ch <= 'z')) {
            ch = ch - 'a' + 'A';
        }
        if ((ch >= 'A') && (ch <= 'Z')) {
            freq[ch - 'A']++;
        }
    }

    int max = 0;
    char result = '?';
    int count = 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > max) {
            max = freq[i];
            result = 'A' + i;
            count = 1;
        } else if (freq[i] == max) {
            count++;
        }
    }

    if (count > 1) {
        printf("?\n");
    } else {
        printf("%c\n", result);
    }
}