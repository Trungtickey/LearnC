#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Hàm loại bỏ dấu cách thừa
void removeExtraSpaces(char *str) {
    int i, j;
    for (i = 0; str[i] == ' ' ; i++); // Bỏ qua dấu cách ở đầu chuỗi
    for (j = 0; str[i]; i++) {
        if (str[i] != EOF || (i > 0 && str[i - 1] != EOF )) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

// Hàm chuẩn hóa tên
void standardizeName(char *name) {
    int i;
    // Chuyển tất cả các ký tự về dạng in thường
    for (i = 0; name[i]; i++) {
        name[i] = tolower(name[i]);
    }
    // Chuyển ký tự đầu mỗi từ thành in hoa
    name[0] = toupper(name[0]);
    for (i = 1; name[i]; i++) {
        if (name[i - 1] == ' ') {
            name[i] = toupper(name[i]);
        }
    }
    // Loại bỏ dấu cách thừa
    removeExtraSpaces(name);
}

int main() {
    FILE *inputFile, *outputFile;
    int n, i;

    inputFile = fopen("sinhvien.txt", "r");
    if (inputFile == NULL) {
        fprintf(stderr, "Khong the mo file sinhvien.txt.\n");
        return 1;
    }
    fscanf(inputFile, "%d", &n);

    // Đọc và chuẩn hóa từng tên sinh viên, sau đó lưu vào file đầu ra
    outputFile = fopen("sinhvien_out.txt", "w");
    if (outputFile == NULL) {
        fprintf(stderr, "Khong the mo file sinhvien_out.txt.\n");
        fclose(inputFile);
        return 1;
    }

    char buffer[100]; // Dung để đọc tên từ file đầu vào
    fgets(buffer, sizeof(buffer), inputFile); // Đọc dòng thừa sau số lượng sinh viên

    for (i = 0; i < n; i++) {
        fgets(buffer, sizeof(buffer), inputFile);
        standardizeName(buffer);
        fprintf(outputFile, "%s", buffer);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Da chuan hoa va luu vao file sinhvien_out.txt.\n");
    return 0;
}
