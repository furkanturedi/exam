#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc == 1) {
        write(1, "\n", 1);
    }
    else {
        int i = 0;
        while (argv[1][i] != '\0') {
            // Karakterin ASCII değerini al
            int ascii_degeri = (int)argv[1][i];
            
            // ASCII değeri tek ise karakteri yazdır
            if (ascii_degeri % 2 != 0) {
                write(1, &argv[1][i], 1);
            }
            i++;
        }
        write(1, "\n", 1);
    }
    
    return 0;
}
