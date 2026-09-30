#include <stdio.h>
#include <stdbool.h>

bool isAnagram(char* s, char* t) {
    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char s[100], t[100];

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    if (isAnagram(s, t)) {
        printf("True - The strings are anagrams.\n");
    } else {
        printf("False - The strings are not anagrams.\n");
    }

    return 0;
}