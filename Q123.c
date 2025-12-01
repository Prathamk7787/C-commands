#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    
    // Prompt for filename
    printf("Enter the filename: ");
    scanf("%s", filename);
    
    // Open file
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    // Read file character by character
    while ((ch = fgetc(file)) != EOF) {
        characters++;
        
        // Count lines
        if (ch == '\n') {
            lines++;
        }
        
        // Count words
        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }
    
    // Close file
    fclose(file);
    
    // Print results
    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);
    
    return 0;
}
