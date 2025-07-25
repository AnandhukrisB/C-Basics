#include <stdio.h>

int main() {

    // BASICS

    // Q) Declare an array of 5 integers and print all the elements.

    // int a[5];

    // for(int i = 1; i <= 5; i++) {
    //     a[i - 1] = i;
    // }

    // for(int i = 0; i < 5; i++) {
    //     printf("%d\n", a[i]);
    // }

    // Q) Read 10 integers from the user and print them in reverse order.

    // int a[10];

    // printf("Enter 10 numbers: \n");
    // for(int i = 0; i < 10; i++) {
    //     scanf("%d", &a[i]);
    // }

    // for(int j = 9; j >= 0; j--) {
    //     printf("%d ", a[j]);
    // }

    // Q) Find the sum of elements in a 1D array.

    // int a[5] = {1, 2, 3, 4};
    // int sum = 0;

    // for(int i = 0; i < 5; i++) {
    //     sum += a[i];
    // }

    // printf("Sum: %d", sum);

    // Q) Count how many positive, negative, and zero values are in an array.

    // int a[] = {1, -2, 0, 4, -5, 0, 0};
    // int positive = 0, negative = 0, zero = 0;

    // for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
    //     if(a[i] > 0) {
    //         positive++;
    //     }
    //     else if(a[i] < 0) {
    //         negative++;
    //     }
    //     else {
    //         zero++;
    //     }
    // }

    // printf("Positive numbers: %d\n", positive);
    // printf("Negative numbers: %d\n", negative);
    // printf("Zeroes: %d\n", zero);

    // Q) Find the maximum and minimum element in an array.

    // int a[10] = {1, 2, 3, 4, 8, 3, 11};
    // int max, min;

    // for(int i = 0; i < (sizeof(a)/sizeof(a[0])) - 1; i++) {
    //     if(a[i + 1] > a[i]) {
    //         max = a[i + 1];
    //     }
    //     else if(a[i + 1] > a[i]) {
    //         min = a[i + 1];
    //     }
    // }

    // printf("Max: %d\n", max);
    // printf("Min: %d", min);

    // INTERMEDIATE

    // Q) Check if a given number is present in the array (linear search).

    // int a[5] = {1, 3, 4, 2, 5};
    // int element = 5, isFound = 0;

    // for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
    //     if(element == a[i]) {
    //         isFound = 1;
    //         break;
    //     }
    // }

    // if(isFound) {
    //     printf("Element found!\n");
    // }
    // else {
    //     printf("Element not found!\n");
    // }

    // Q) Count how many times a particular number appears in the array.

    // int a[7] = {1, 3, 1, 3, 1, 1, 1};
    // int element = 1, count = 0;

    // for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
    //     if (element == a[i]) {
    //         count++;
    //     }
    // }

    // printf("Element %d found %d times in the array.", element, count);

    // Q) Find the second largest element in an array.

    // int a[7] = {7, 6, 5, 4, 3, 2, 1};
    // int temp;

    // for(int i = 0; i < (sizeof(a)/sizeof(a[0])) - 1; i++) {
    //     for(int j = 0; j < (sizeof(a)/sizeof(a[0])) - i - 1; j++) {
    //         if(a[j + 1] < a[j]) {
    //             temp = a[j + 1];
    //             a[j + 1] = a[j];
    //             a[j] = temp;
    //         }
    //     }
    // }
    // for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
    //     printf("%d\n", a[i]);
    // }
    
    // printf("Second largest element is: %d", a[(sizeof(a)/sizeof(a[0])) - 2]);

    // Q) Reverse the array without using a second array.

    // int a[7] = {1, 2, 3, 4, 5, 6, 7};
    // int temp;
    // int n = sizeof(a) / sizeof(a[0]);

    // for(int i = 0; i < n / 2; i++) {
    //     temp = a[i];
    //     a[i] = a[(n - 1) - i];
    //     a[n - 1 - i] = temp;
    // }

    // printf("Reversed array: ");
    // for(int i = 0; i < n; i++) {
    //     printf("%d ", a[i]);
    // }

    //  Q) Copy one array into another.

    // int a[7] = {1, 2, 3, 4, 5, 6, 7};
    // int b[7];
    // int temp;

    // for(int i = 0; i < 7; i++) {
    //     b[i] = a[i];
    // }

    // printf("A: ");
    // for(int i = 0; i < 7; i++) {
    //     printf("%d ", a[i]);
    // }

    // printf("\nB: ");
    // for(int i = 0; i < 7; i++) {
    //     printf("%d ", b[i]);
    // }

    // Q) Sort the array in ascending and descending order (Bubble Sort or Selection Sort).

    // int a[7] = {4, 5, 3, 1, 2, 7, 6};
    // int temp;

    // for(int i = 0; i < 7; i++) {
    //     for(int j = 0; j < 7 - i - 1; j++) {
    //         if(a[j] > a[j + 1]) {
    //             temp = a[j];
    //             a[j] = a[j + 1]; 
    //             a[j + 1] = temp;
    //         }
    //     }
    // }

    // for(int i = 0; i < 7; i++) {
    //     printf("%d ", a[i]);
    // }

    // Q) Find the most frequent element in the array.

    // int a[10] = {2, 4, 4, 1, 4, 4, 4, 1, 1, 1};
    // int mf, count;

    // for(int i = 0; i < 10; i++) {
    //     count = 0;
    //     for(int j = 0; j < 10; j++) {
    //         if(a[i] == a[j]) {
    //             count++;
    //         }
    //     }
    //     if(most < count) {
    //         mf = a[i];
    //     }
    // }
    // printf("Most frequent element is: %d\n", mf);

    // Q) Remove all duplicate elements from the array.

    // int a[7] = {2, 1, 1, 2, 2, 4, 5};
    // int count = 0;
    // int n = sizeof(a) / sizeof(a[0]);

    // for(int i = 0; i < n; i++) {
    //     for(int j = i + 1; j < n;) {
    //         if(a[i] == a[j]) {
    //             count++;
    //             for(int k = j + 1; k < n; k++) {
    //                 a[k - 1] = a[k];
    //             }
    //             n--;
    //         }
    //         else {
    //             j++;
    //         }
    //     }
    // }

    // printf("The array without duplication is: ");
    // for(int i = 0; i <  n; i++) {
    //     printf(" %d ", a[i]);
    // }

    // Q) Merge two arrays into one third array.

    // int a[] = {1, 2, 3};
    // int b[] = {4, 5, 6, 7};
    // int na = sizeof(a) / sizeof(a[0]);
    // int nb = sizeof(b) / sizeof(b[0]);
    // int nc = na + nb;
    // int c[nc];

    // int i;

    // for(i = 0; i < na; i++) {
    //     c[i] = a[i];
    // }

    // for(int j = i; j < nb + i; j++) {
    //     c[j] = b[j - i];
    // }

    // printf("A: ");
    // for(int k = 0; k < na; k++) {
    //     printf("%d ", a[k]);
    // }
    // printf("\n");

    // printf("B: ");
    // for(int k = 0; k < nb; k++) {
    //     printf("%d ", b[k]);
    // }
    // printf("\n");

    // printf("Merged Array: ");
    // for(int k = 0; k < nc; k++) {
    //     printf("%d ", c[k]);
    // }
    // printf("\n");

    // Q) Count and print how many even and odd numbers are in an array.

    // int a[10] = {1, 2, 3, 4, 2, 3, 6, 2, 63, 6};
    // int even = 0, odd = 0;

    // for(int i = 0; i < 10; i++) {
    //     if(a[i] % 2 == 0) {
    //         even++;
    //     }
    //     else {
    //         odd++;
    //     }
    // }

    // printf("Even: %d\n", even);
    // printf("Odd: %d", odd);

    // ADVANCED

    // Q) Shift all elements one position to the left (circular shift).

    // int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
    // int na = sizeof(a) / sizeof(a[0]);
    // int first = a[0];

    // printf("Array: ");
    // for(int i = 0; i < na - 1; i++) {
    //     a[i] = a[i + 1];
    // }

    // a[na - 1] = first;
    // for(int i = 0; i < na; i++) {
    //     printf("%d ", a[i]);
    // }

    // Q) Shift all elements one position to the right (circular shift).

    // int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
    // int na = sizeof(a) / sizeof(a[0]);
    // int last = a[na - 1];

    // printf("Array: ");
    // for(int i = na; i > 0; i--) {
    //     a[i] = a[i - 1];
    // }

    // a[0] = last;
    // for(int i = 0; i < na; i++) {
    //     printf("%d ", a[i]);
    // }

    // Q) Check if the array is palindromic (reads same forwards and backwards).

    // char s[] = "malayalam";
    // int isPal = 1;
    // int size = (sizeof(s) / sizeof(s[0])) - 1;
    // char first[(size/2) + 2];
    // char second[(size/2) + 2];

    // for(int i = 0; i < size / 2; i++) {
    //     if(s[i] != s[size - 1 - i]) {
    //         isPal = 0;
    //     }
    // }

    // if(isPal)
    //     printf("Given string is palindrome.");
    // else 
    //     printf("Given number is not palindrome.");

    // Q) Check if the array is sorted in ascending or descending order.

    // int a[] = {1, 2, 3, 4, 5};   
    // int desc = 0, asc = 0;  
    // int size = sizeof(a) / sizeof(a[0]);

    // for(int i = 0; i < size; i++) {
    //     for(int j = i + 1; j < size - i - 1; j++) {
    //         if(a[j] > a[j + 1]) {
    //             desc = 1;
    //         }
    //         else if(a[j] < a[j + 1]) {
    //             asc = 1;
    //         }
    //     }
    // }

    // if(desc) {
    //     printf("Given array is in descending order.");
    // }
    // else if(asc) {
    //     printf("Given array is in ascending order.");
    // }

    // Q) Find the difference between sum of even-position and odd-position elements.

    int a[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(a) / sizeof(a[0]);
    int evenSum = 0, oddSum = 0;

    for(int i = 0; i < size; i++) {
        if((i + 1) % 2 == 0) {
            evenSum += a[i];
        }
        else if((i + 1) % 2 != 0) {
            oddSum += a[i];
        }
    }

    printf("Difference of sum of odd numbers and even numbers is: %d\n", evenSum - oddSum);

    return 0;
}