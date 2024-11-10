#include <stdio.h>
#include <stdlib.h>

void read_and_display_map(const char *filename, int width, int height) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(EXIT_FAILURE);
    }

    char line[width + 2]; // +2 pour '\n' et '\0'
    for (int i = 0; i < height; i++) {
        if (fgets(line, sizeof(line), file) != NULL) {
            printf("%s", line);
        } else {
            break;
        }
    }

    fclose(file);
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Usage: %s <filename> <width> <height>\n", argv[0]);
        return EXIT_FAILURE;
    }

    const char *filename = argv[1];
    int width = atoi(argv[2]);
    int height = atoi(argv[3]);

    read_and_display_map(filename, width, height);

    return EXIT_SUCCESS;
}