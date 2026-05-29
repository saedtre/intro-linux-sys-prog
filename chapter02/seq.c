#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        perror("Usage: {./seq <n> <m:optional>}  prints the sequence of numbers from 1..N if only N provided, or N..M if both provided.");
        return 1;
    } else if (argc == 2)  {
        int nconv = strtol(argv[1], &argv[2], 10);
        for(int i = 1; i <= nconv; ++i) {
            printf("%d\n", i);
        }
    } else if (argc == 3) {
        int nconv = strtol(argv[1], NULL, 10);
        int mconv = strtol(argv[2], NULL, 10); 
        if (nconv <= mconv) {
            for(int i = nconv; i <= mconv; ++i) {
                printf("%d\n", i);
            }    
        } else {
            perror("Error: numbers do not produce positive sequence, usage: ./seq n m where n <= m");
        }
    }

    return 0;
}

