⭐⭐⭐⭐⭐⭐⭐ CODECRAFT BY ASHIKA ⭐⭐⭐⭐⭐⭐⭐
   
🟢 Language ➡ C
🟢 Topic ➡ Handling Multiple Strings (2D-Strings)


🧩 01. Write a program to read and display a 2D array of strings in C language.

#include <stdio.h>
int main() {
    char arr[3][20]; 
    printf("Enter 3 strings:\n");
    for (int i = 0; i < 3; i++) {
        fgets(arr[i], sizeof(arr[i]), stdin);
    }
    printf("\nYou entered the following strings:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s", arr[i]); 
    }
    return 0;
}
📤 Sample Output:
Enter 3 strings:
Hello
World
C Programming

You entered the following strings:
Hello
World
C Programming








🧩 02. Write a program to search a string in the list of strings.

#include <stdio.h>
#include <string.h>
int main() {
    char arr[5][20] = {"apple", "banana", "grapes", "orange", "melon"};
    char search[20];
    printf("Enter the string to search: ");
    scanf("%s", search);
    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (strcmp(arr[i], search) == 0) {
            printf("Found '%s' at position %d\n", search, i+1);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("String not found.\n");
    return 0;
}
📤 Sample Output:
Enter the string to search: banana
Found 'banana' at position 2






🧩 03. Write a program to find the number of vowels in each of the N strings stored in two-dimensional arrays, taken from the user.

#include <stdio.h>
#include <string.h>
int countVowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar(); 

    char arr[n][100];
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(arr[i], sizeof(arr[i]), stdin);
    }

    printf("\nNumber of vowels in each string:\n");
    for (int i = 0; i < n; i++) {
        int vowels = countVowels(arr[i]);
        printf("String %d: %d vowels\n", i + 1, vowels);
    }

    return 0;
}
📤 Sample Output:
Enter number of strings: 3
Enter 3 strings:
Hello
Programming
World

Number of vowels in each string:
String 1: 2 vowels
String 2: 3 vowels
String 3: 1 vowel






🧩 04. Write a program to sort N city names stored in two-dimensional arrays, taken from the user.

#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("Enter number of city names: ");
    scanf("%d", &n);
    getchar(); 

    char cities[n][30];
    
    printf("Enter %d city names:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(cities[i], sizeof(cities[i]), stdin);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(cities[i], cities[j]) > 0) {
                char temp[30];
                strcpy(temp, cities[i]);
                strcpy(cities[i], cities[j]);
                strcpy(cities[j], temp);
            }
        }
    }
    printf("\nSorted city names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s", cities[i]);
    }
    return 0;
}
📤 Sample Output:
Enter number of city names: 3
Enter 3 city names:
New York
Tokyo
Paris

Sorted city names:
New York
Paris
Tokyo




🧩 05. Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.

#include <stdio.h>
#include <string.h>
int main() {
    char emails[5][50] = {"example@domain.com", "user@website.com", "invalidemail.com", "hello@world.com", "contact@domain.org"};
  
    for (int i = 0; i < 5; i++) {
        if (strchr(emails[i], '@') == NULL) {
            printf("Invalid email: %s\n", emails[i]);
        }
    }
    return 0;
}
📤 Sample Output:  Invalid email: invalidemail.com







🧩 06. Write a program to print the strings which are palindrome in the list of strings.

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0; /
        }
    }
    return 1; 
}
int main() {
    char arr[5][20] = {"madam", "racecar", "hello", "world", "level"};
    printf("Palindrome strings:\n");
    for (int i = 0; i < 5; i++) {
        if (isPalindrome(arr[i])) {
            printf("%s\n", arr[i]);
        }
    }

    return 0;
}
📤 Sample Output:

Palindrome strings:
madam
racecar
level





🧩 07. From the list of IP addresses, check whether all IP addresses are valid.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isValidIP(char ip[]) {
    int num, dots = 0;
    char *ptr = strtok(ip, ".");

    while (ptr) {
        if ((num = atoi(ptr)) > 255 || num < 0) {
            return 0;
        }
        dots++;
        ptr = strtok(NULL, ".");
    }

    return dots == 4;
}
int main() {
    char ips[3][16] = {"192.168.0.1", "255.255.255.0", "999.999.999.999"};
    
    for (int i = 0; i < 3; i++) {
        if (isValidIP(ips[i])) {
            printf("%s is a valid IP address\n", ips[i]);
        } else {
            printf("%s is not a valid IP address\n", ips[i]);
        }
    }
    return 0;
}
📤 Sample Output:
192.168.0.1 is a valid IP address
255.255.255.0 is a valid IP address
999.999.999.999 is not a valid IP address





🧩 08. Given a list of words followed by two words, the task is to find the minimum distance between the given two words in the list of words.

#include <stdio.h>
#include <string.h>
int minDistance(char words[][20], int n, char word1[], char word2[]) {
    int last_pos_word1 = -1, last_pos_word2 = -1;
    int min_dist = n;

    for (int i = 0; i < n; i++) {
        if (strcmp(words[i], word1) == 0) {
            last_pos_word1 = i;
        }
        if (strcmp(words[i], word2) == 0) {
            last_pos_word2 = i;
        }
        if (last_pos_word1 != -1 && last_pos_word2 != -1) {
            int dist = abs(last_pos_word1 - last_pos_word2);
            if (dist < min_dist) {
                min_dist = dist;
            }
        }
    }

    return min_dist;
}

int main() {
    char words[5][20] = {"the", "quick", "brown", "fox", "quick"};
    printf("Minimum distance: %d\n", minDistance(words, 5, "the", "fox"));

    return 0;
}
📤 Sample Output: Minimum distance: 1








🧩 09. Write a program that asks the user to enter a username. If the username entered is one of the names in the list, then the user is allowed to calculate the factorial of a number. Otherwise, an error message is displayed.

#include <stdio.h>
#include <string.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main() {
    char usernames[3][20] = {"Alice", "Bob", "Charlie"};
    char input[20];
    int number;

    printf("Enter your username: ");
    scanf("%s", input);

    int isValid = 0;
    for (int i = 0; i < 3; i++) {
        if (strcmp(input, usernames[i]) == 0) {
            isValid = 1;
            break;
        }
    }
    if (isValid) {
        printf("Enter a number to calculate factorial: ");
        scanf("%d", &number);
        printf("Factorial of %d is %d\n", number, factorial(number));
    } else {
        printf("Error: Invalid username.\n");
    }

    return 0;
}
📤 Sample Output:
Enter your username: Alice
Enter a number to calculate factorial: 5
Factorial of 5 is 120







🧩 10. Write a C program that takes password as input from the user hiddenly. Display Asterisk '*' when the user enters the password.

#include <stdio.h>
#include <conio.h>

int main() {
    char password[20];
    int i = 0;
    
    printf("Enter password: ");
    while (1) {
        password[i] = getch();  
        if (password[i] == '\r') 
            break;
        printf("*");  
        i++;
    }
    password[i] = '\0'; 

    printf("\nPassword entered: %s\n", password);
    return 0;
}
📤 Sample Output:
Enter password: *****
Password entered: 12345







🧩 11. Create an authentication system that can manage 10 users. It should be menu-driven. Do not use Structure and Union.

#include <stdio.h>
#include <string.h>

int main() {
    char usernames[10][20] = {"user1", "user2", "user3", "user4", "user5", "user6", "user7", "user8", "user9", "user10"};
    char passwords[10][20] = {"pass1", "pass2", "pass3", "pass4", "pass5", "pass6", "pass7", "pass8", "pass9", "pass10"};
    
    char enteredUsername[20], enteredPassword[20];
    int attempt = 0, validUser = 0;
    
    while (attempt < 3) {
        printf("Enter username: ");
        scanf("%s", enteredUsername);
        printf("Enter password: ");
        scanf("%s", enteredPassword);
        
        for (int i = 0; i < 10; i++) {
            if (strcmp(enteredUsername, usernames[i]) == 0 && strcmp(enteredPassword, passwords[i]) == 0) {
                printf("Login successful!\n");
                validUser = 1;
                break;
            }
        }
        if (validUser) {
            break;
        } else {
            attempt++;
            printf("Invalid username or password. You have %d attempts left.\n", 3 - attempt);
        }
    }
    if (attempt == 3) {
        printf("You have been locked out due to too many failed login attempts.\n");
    }
    return 0;
}
📤 Sample Output:

Enter username: user1
Enter password: pass1
Login successful!
