/*
Q61 (Arrays (1D))
Search for an element in an array using linear search.
*/

#include <stdio.h>

int main() {
    int n, key, found = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }
    if(found) printf("Element found");
    else printf("Element not found");
    return 0;
}
