#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* pFile;
    int n = 0;
    pFile = fopen("myfile.txt", "rb");

    if (pFile == NULL) {
        perror("Error opening file");
    } else {
        while (fgetc(pFile) != EOF) {
            ++n;
        }

        if (feof(pFile)) {
            puts("End-of-File reached.");
            printf("Total number of bytes read: %d\n", n);
        } else {
            puts("End-of-File was not reached.");
        }

        fclose(pFile);
    }

    _getch();
    return 0;
}