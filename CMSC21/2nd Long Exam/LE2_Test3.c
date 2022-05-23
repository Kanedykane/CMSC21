#include <stdio.h>
#include <stdbool.h>

void scan_word(int occurrences[26]);
bool is_anagram(int occurrences1[26], int occurrences2[26]);

int i;

int main(void) {
    int occurrences1 [26] = {0},
    occurrences2 [26] = {0};
    
    printf("Enter first word: ");
    scan_word(occurrences1);
    
    printf("Enter second word: ");
    scan_word(occurrences2);

    if (is_anagram(occurrences1, occurrences2)) {
        printf("The words are anagrams.\n");
        return 0;
    }
    
    else {
        printf("The words are not anagrams.\n");
        return 0;
    }
}

void scan_word(int occurrences[26]){
    char c;
    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            occurrences[toupper(c) - 'A']++;
        }
    }
}

bool is_anagram(int occurrences1 [26], int occurrences2 [26]) {
    for (i = 0; i < 26; i++){
        if (occurrences1 [i] != occurrences2[i]) {
            return false;
        }
    }
}

