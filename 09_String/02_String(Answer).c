⭐⭐⭐⭐⭐⭐⭐ CODECRAFT BY ASHIKA ⭐⭐⭐⭐⭐⭐⭐

🟢 Language ➡ C
🟢 Topic ➡ String



🔹 🧠1. Program to Calculate Length of the String Without Using Built-in Method

#include <stdio.h>
int main() {
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string including spaces
    while (str[length] != '\0') {
        length++;
    }
    if (str[length - 1] == '\n') {
        length--;
    }
    printf("The length of the string is: %d\n", length);
    return 0;
}
🖥️ Sample Output:
Enter a string: Hello, World!
The length of the string is: 13





🔹 🧠2. Program to Count the Occurrence of a Given Character in a Given String

#include <stdio.h>
int main() {
    char str[100], ch;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to count: ");
    scanf("%c", &ch);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("Character '%c' occurs %d times in the string.\n", ch, count);
    return 0;
}
🖥️ Sample Output:
Enter a string: Hello, World!
Enter a character to count: o
Character 'o' occurs 2 times in the string.





🔹 🧠3. Program to Count Vowels in a Given String

#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    printf("Total vowels in the string: %d\n", count);
    return 0;
}
🖥️ Sample Output:
Enter a string: Hello, World!
Total vowels in the string: 3







🔹 🧠4. Program to Convert a Given String into Uppercase

#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A'; // Convert to uppercase
        }
    }
    printf("Uppercase String: %s", str);
    return 0;
}
🖥️ Sample Output:
Enter a string: Hello, World!
Uppercase String: HELLO, WORLD!






🔹 🧠5. Program to Convert a Given String into Lowercase

#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a'; // Convert to lowercase
        }
    }
    printf("Lowercase String: %s", str);
    return 0;
}
🖥️ Sample Output:
Enter a string: Hello, World!
Lowercase String: hello, world!







🔹 🧠6. Program to Reverse a String

#include <stdio.h>
int main() {
    char str[100], reversed[100];
    int length = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0') {
        length++;
    }
    if (str[length - 1] == '\n') {
        length--;
    }
    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0'; 
    printf("Reversed String: %s\n", reversed);
    return 0;
}
🖥️ Sample Output:
Enter a string: Hello, World!
Reversed String: !dlroW ,olleH





🔹 🧠7. C Program to Count Total Number of Alphabets, Digits, and Special Characters in a String

#include <stdio.h>
int main() {
    char str[100];
    int alphabets = 0, digits = 0, specials = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            specials++;
        }
    }
    printf("Alphabets: %d\nDigits: %d\nSpecial characters: %d\n", alphabets, digits, specials);
    return 0;
}
🖥️ Sample Output:
Enter a string: Hello123!
Alphabets: 5
Digits: 3
Special characters: 1






🔹 🧠8. C Program to Copy One String to Another String

#include <stdio.h>
int main() {
    char str1[100], str2[100];
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    int i = 0;
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0'; 
    printf("Copied String: %s", str2);
    return 0;
}
🖥️ Sample Output:
Enter a string: Hello, World!
Copied String: Hello, World!






🔹 🧠9. C Program to Sort a String Array in Ascending Order

#include <stdio.h>
#include <string.h>
#define MAX_STRINGS 100
#define MAX_LENGTH 100
int main() {
    char str[MAX_STRINGS][MAX_LENGTH];
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar(); 
    printf("Enter strings:\n");
    for (int i = 0; i < n; i++) {
        fgets(str[i], sizeof(str[i]), stdin);
  
        if (str[i][strlen(str[i]) - 1] == '\n') {
            str[i][strlen(str[i]) - 1] = '\0';
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                char temp[MAX_LENGTH];
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("Sorted strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}

🖥️ Sample Output:
Enter number of strings: 3
Enter strings:
Banana
Apple
Cherry
Sorted strings:
Apple
Banana
Cherry







🔹 🧠10. Program to Find the Frequency of Characters

#include <stdio.h>
int main() {
    char str[100];
    int count[256] = {0};  
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }
    printf("Character frequency:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("Character '%c' occurs %d times.\n", (char)i, count[i]);
        }
    }
    return 0;
}
🖥️ Sample Output:
Enter a string: Hello, World!
Character frequency:
Character ' ' occurs 1 times.
Character '!' occurs 1 times.
Character ',' occurs 1 times.
Character 'H' occurs 1 times.
Character 'W' occurs 1 times.
Character 'd' occurs 1 times.
Character 'e' occurs 1 times.
Character 'l' occurs 3 times.
Character 'o' occurs 2 times.
Character 'r' occurs 1 times.
Character 'o' occurs 2 times.
Character 'l' occurs 3 times.
Character 'l' occurs 3 times.
Character 'o' occurs 2 times.
