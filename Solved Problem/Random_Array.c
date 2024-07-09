#include<stdio.h>
int isSorted(int arr[], int n) {
    int i;
    for (i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            return 0;
    }
    return 1;
}

int main() {
    int T;
   
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int n;
 
        scanf("%d", &n);
        int array[n];

       
        for (int i = 0; i < n; i++) {
            scanf("%d", &array[i]);
        }

        if (isSorted(array, n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
return 0;
}