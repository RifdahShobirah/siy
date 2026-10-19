#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char *nama1 = "Rifdah";
    char *nama2 = "Rief";

    if (argc < 3) {
        printf("Argumen program kurang\n");
        printf("Tambahkan argumen %s %s %s\n", argv[0], nama1, nama2);
        return -1;
    }

    printf("Halo %s\n", argv[1]);
    printf("Halo juga %s\n", argv[2]);
    return 0;
}