#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * GCC V5.1.0
 * Shelter Zone Newbie Online Judge Q2
 * Author    : XO
 * Date      : 109.08.22
 */

void ToLower(char *src,const int len) {
    int i;
    for(i=0;i<len;i++) {
        if(src[i] >= 'A' && src[i] <= 'Z')
            src[i] += 32;
    }
}

char solve(char *src) {
    int count = strlen(src);
    ToLower(src,count);
    if(count == 8) {
        // count number
        int sum = 1, numcount = 0, i;
        for(i=0;i<count;i++) {
            if(src[i] >= '0' && src[i] <= '9') {
                sum *= (src[i] - '0');
                numcount++;
            }
        }
        if(((sum % 3) != 0 || (sum % 7) != 0) && numcount != 2)
            return 0;
        // count letter
        int letcount = 0,same_letter = 0,j;
        for(i=0;i<count;i++) {
            if(src[i] >= 'a' && src[i] <= 'z') {
                letcount++;
                for(j=i+1;j<count;j++) {
                    if(src[i] == src[j]) {
                        same_letter = 1;
                        break;
                    }
                }
            }
        }
        if(letcount == 6 && same_letter == 1)
            return 0;
        return 1;
    }
    return 0;
}

int main (void) {
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        char input[9] = ""; // initialize
        scanf("%s",input);
        char ans = solve(input);
        if(ans == 1)
            printf("True\n");
        else
            printf("False\n");
    }
    return 0;
}
