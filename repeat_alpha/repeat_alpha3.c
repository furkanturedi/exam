#include <unistd.h>

int main(int argc, char **argv) {
    if (argc != 2) {
        write(1, "\n", 1);
        return 0;
    }

    int i = 0;
    while (argv[1][i]) {
        char c = argv[1][i];
        int repeat = 1; // Varsayılan tekrar sayısı

        // Büyük harf kontrolü
        if (c >= 'A' && c <= 'Z') {
            repeat = c - 'A' + 1;
        }
        // Küçük harf kontrolü
        else if (c >= 'a' && c <= 'z') {
            repeat = c - 'a' + 1;
        }

        // Karakteri repeat kadar yazdır
        while (repeat-- > 0) {
            write(1, &c, 1);
        }
        
        i++;
    }
    
    write(1, "\n", 1);
    return 0;
}