#include <stdlib.h>
#include <string.h>
#include <stdio.h> // For debugging, if needed

char *mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void backtrack(char *digits, int index, char *currentCombination, char ***result, int *returnSize, int *capacity) {
    if (index == strlen(digits)) {
        if (*returnSize >= *capacity) {
            *capacity *= 2;
            *result = (char**)realloc(*result, (*capacity) * sizeof(char*));
        }
        (*result)[*returnSize] = (char*)malloc(strlen(currentCombination) + 1);
        strcpy((*result)[*returnSize], currentCombination);
        (*returnSize)++;
        return;
    }

    int digit = digits[index] - '0';
    char *letters = mapping[digit];

    for (int i = 0; i < strlen(letters); i++) {
        int currentLen = strlen(currentCombination);
        currentCombination[currentLen] = letters[i];
        currentCombination[currentLen + 1] = '\0';
        backtrack(digits, index + 1, currentCombination, result, returnSize, capacity);
        currentCombination[currentLen] = '\0'; // Backtrack
    }
}

char **letterCombinations(char *digits, int *returnSize) {
    *returnSize = 0;
    if (digits == NULL || strlen(digits) == 0) {
        return NULL;
    }

    int capacity = 10; // Initial capacity, will expand as needed
    char **result = (char**)malloc(capacity * sizeof(char*));
    char currentCombination[strlen(digits) + 1]; // Max length of combination + null terminator
    currentCombination[0] = '\0';

    backtrack(digits, 0, currentCombination, &result, returnSize, &capacity);

    return result;
}