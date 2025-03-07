#include <unistd.h>

int main(int argc, char **argv) {
    if (argc != 2) {
        write(1, "\n", 1);
        return 0;
    }

    int i = 0;
    while (argv[1][i]) {
        char c = argv[1][i];
        // Küçük harfler için ROT13
        if (c >= 'a' && c <= 'z') {
            if (c <= 'm') c += 13;
            else c -= 13;
        }
        // Büyük harfler için ROT13
        else if (c >= 'A' && c <= 'Z') {
            if (c <= 'M') c += 13;
            else c -= 13;
        }
        write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}


