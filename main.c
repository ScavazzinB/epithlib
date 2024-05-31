#include "../include/epithlib.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Include stdlib.h for free and atoi functions

void test_my_strlen() {
    char *test_cases[3] = {
        "Hello, World!",
        "",
        "1234567890"
    };

    for (int i = 0; i < 3; i++) {
        if (my_strlen(test_cases[i]) != (int)strlen(test_cases[i])) { // Cast strlen to int
            printf("Test failed for my_strlen with input \"%s\"\n", test_cases[i]);
        }
    }
}


void test_my_strcpy() {
    char *test_cases[3] = {
        "Hello, World!",
        "",
        "1234567890"
    };
    char dest[50];

    for (int i = 0; i < 3; i++) {
        my_strcpy(dest, test_cases[i]);
        if (strcmp(dest, test_cases[i]) != 0) {
            printf("Test failed for my_strcpy with input \"%s\"\n", test_cases[i]);
        }
    }
}

void test_my_strcmp() {
    char *test_cases1[3] = {
        "abc",
        "abc",
        "abd"
    };
    char *test_cases2[3] = {
        "abc",
        "abd",
        "abc"
    };

    for (int i = 0; i < 3; i++) {
        if (my_strcmp(test_cases1[i], test_cases2[i]) != strcmp(test_cases1[i], test_cases2[i])) {
            printf("Test failed for my_strcmp with inputs \"%s\" and \"%s\"\n", test_cases1[i], test_cases2[i]);
        }
    }
}

void test_my_strncmp() {
    char *test_cases1[3] = {
        "abc",
        "abc",
        "abc"
    };
    char *test_cases2[3] = {
        "abc",
        "abd",
        "abc"
    };
    int n[3] = {3, 3, 2};

    for (int i = 0; i < 3; i++) {
        if (my_strncmp(test_cases1[i], test_cases2[i], n[i]) != strncmp(test_cases1[i], test_cases2[i], n[i])) {
            printf("Test failed for my_strncmp with inputs \"%s\", \"%s\" and %d\n", test_cases1[i], test_cases2[i], n[i]);
        }
    }
}

void test_my_strncpy() {
    char *test_cases1[3] = {
        "abc",
        "abc",
        "abc"
    };
    char *test_cases2[3] = {
        "def",
        "defg",
        "de"
    };
    int n[3] = {3, 3, 2};
    char dest[50];

    for (int i = 0; i < 3; i++) {
        my_strncpy(dest, test_cases1[i], n[i]);
        if (strncmp(dest, test_cases2[i], n[i]) != 0) {
            printf("Test failed for my_strncpy with inputs \"%s\", \"%s\" and %d\n", test_cases1[i], test_cases2[i], n[i]);
        }
    }
}

void test_my_strstr() {
    char *test_cases1[3] = {
        "Hello, World!",
        "Hello, World!",
        "Hello, World!"
    };
    char *test_cases2[3] = {
        "World",
        "Hello",
        "Hello"
    };
    char *expected_results[3] = {
        "World!",
        "Hello, World!",
        "Hello, World!"
    };

    for (int i = 0; i < 3; i++) {
        if (my_strstr(test_cases1[i], test_cases2[i]) != expected_results[i]) {
            printf("Test failed for my_strstr with inputs \"%s\" and \"%s\"\n", test_cases1[i], test_cases2[i]);
        }
    }
}

void test_my_strcat() {
    char *test_cases1[3] = {
        "Hello, ",
        "Hello, ",
        "Hello, "
    };
    char *test_cases2[3] = {
        "World!",
        "World!",
        "World!"
    };
    char expected_results[3][50] = {
        "Hello, World!",
        "Hello, World!",
        "Hello, World!"
    };
    char dest[50];

    for (int i = 0; i < 3; i++) {
        strcpy(dest, test_cases1[i]);
        my_strcat(dest, test_cases2[i]);
        if (strcmp(dest, expected_results[i]) != 0) {
            printf("Test failed for my_strcat with inputs \"%s\" and \"%s\"\n", test_cases1[i], test_cases2[i]);
        }
    }
}

void test_my_strncat() {
    char *test_cases1[3] = {
        "Hello, ",
        "Hello, ",
        "Hello, "
    };
    char *test_cases2[3] = {
        "World!",
        "World!",
        "World!"
    };
    int n[3] = {3, 5, 2};
    char expected_results[3][50] = {
        "Hello, Wor",
        "Hello, World!",
        "Hello, Wo"
    };
    char dest[50];

    for (int i = 0; i < 3; i++) {
        strcpy(dest, test_cases1[i]);
        my_strncat(dest, test_cases2[i], n[i]);
        if (strcmp(dest, expected_results[i]) != 0) {
            printf("Test failed for my_strncat with inputs \"%s\", \"%s\" and %d\n", test_cases1[i], test_cases2[i], n[i]);
        }
    }
}

void test_my_strdup() {
    char *test_cases[3] = {
        "Hello, World!",
        "",
        "1234567890"
    };

    for (int i = 0; i < 3; i++) {
        char *result = my_strdup(test_cases[i]);
        if (strcmp(result, test_cases[i]) != 0) {
            printf("Test failed for my_strdup with input \"%s\"\n", test_cases[i]);
        }
        free(result); // Now free is recognized
    }
}

void test_my_strndup() {
    char *test_cases1[3] = {
        "Hello, World!",
        "",
        "1234567890"
    };
    int n[3] = {5, 0, 3};

    for (int i = 0; i < 3; i++) {
        char *result = my_strndup(test_cases1[i], n[i]);
        if (strncmp(result, test_cases1[i], n[i]) != 0) {
            printf("Test failed for my_strndup with input \"%s\" and %d\n", test_cases1[i], n[i]);
        }
        free(result);
    }
}

void test_my_get_nbr() {
    char *test_cases[3] = {
        "123",
        "0",
        "1234567890"
    };
    int expected_results[3] = {123, 0, 1234567890};

    for (int i = 0; i < 3; i++) {
        if (my_get_nbr(test_cases[i]) != expected_results[i]) {
            printf("Test failed for my_get_nbr with input \"%s\"\n", test_cases[i]);
        }
    }
}

void test_is_alphanum() {
    char test_cases[3] = {'a', '1', ' '};
    int expected_results[3] = {1, 1, 0};

    for (int i = 0; i < 3; i++) {
        if (is_alphanum(test_cases[i]) != expected_results[i]) {
            printf("Test failed for is_alphanum with input %c\n", test_cases[i]);
        }
    }
}

void test_my_toupper() {
    char test_cases[3] = {'a', 'A', '1'};
    char expected_results[3] = {'A', 'A', '1'};

    for (int i = 0; i < 3; i++) {
        if (my_toupper(test_cases[i]) != expected_results[i]) {
            printf("Test failed for my_toupper with input %c\n", test_cases[i]);
        }
    }
}

void test_my_tolower() {
    char test_cases[3] = {'a', 'A', '1'};
    char expected_results[3] = {'a', 'a', '1'};

    for (int i = 0; i < 3; i++) {
        if (my_tolower(test_cases[i]) != expected_results[i]) {
            printf("Test failed for my_tolower with input %c\n", test_cases[i]);
        }
    }
}

void test_my_str_isnum() {
    char *test_cases[3] = {
        "123",
        "0",
        "1234567890"
    };
    int expected_results[3] = {1, 1, 1};

    for (int i = 0; i < 3; i++) {
        if (my_str_isnum(test_cases[i]) != expected_results[i]) {
            printf("Test failed for my_str_isnum with input \"%s\"\n", test_cases[i]);
        }
    }
}

void test_my_put_nbr() {
    // Redirect stdout to a file
    freopen("tmp.txt", "w", stdout);

    my_put_nbr(123);
    my_put_nbr(0);
    my_put_nbr(1234567890);

    // Redirect stdout back to the console
    freopen("/dev/tty", "w", stdout);

    // Read the content of the file
    FILE *file = fopen("tmp.txt", "r");
    char buffer[50];
    int expected_results[3] = {123, 0, 1234567890};

    for (int i = 0; i < 3; i++) {
        fgets(buffer, 50, file);
        if (atoi(buffer) != expected_results[i]) { // Now atoi is recognized
            printf("Test failed for my_put_nbr with input %d\n", expected_results[i]);
        }
    }
    fclose(file);
}

int main() {
    test_my_strlen();
    test_my_strcpy();
    test_my_strcmp();
    test_my_strncmp();
    test_my_strncpy();
    test_my_strstr();
    test_my_strcat();
    test_my_strncat();
    test_my_strdup();
    test_my_strndup();
    test_my_get_nbr();
    test_my_put_nbr();
    test_is_alphanum();
    test_my_toupper();
    test_my_tolower();
    test_my_str_isnum();

    // Remove the call to test_my_str_to_word_array if it's not defined
    // test_my_str_to_word_array();

    return 0;
}