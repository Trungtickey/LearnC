#include <stdio.h>
#include <string.h>
  struct Contact {
    int id;
    char name[50];
    char phone[12];
    char address[50];
    int status;
};
void printfContact(struct Contact contact){
      printf(" %d\t  %s  %s\t %s\t  %d\n", contact.id, contact.name, contact.phone, contact.address, contact.status);
  }
void printfContactList(struct Contact contactList[], int size){
printf("ID\tName\t  Phone\t\t Address\tStatus\n");
     for(int i = 0; i < size; i++ ){
         printfContact(contactList[i]);
     }
}
void addContact(struct Contact contactList[], int *size) {
    struct Contact newContact;

    printf("Nhap ten : ");
    getchar();
    gets( newContact.name);
    printf("Nhap so dien thoai: ");
    scanf("%s", newContact.phone);

    printf("Nhap dia chi: ");
    scanf("%s", newContact.address);

    printf("Nhap status: ");
    scanf("%d", &newContact.status );

    newContact.id = *size + 1;
    contactList[*size] = newContact;
    (*size)++;
}


void updateContact(struct Contact contactList[], int size) {
    char searchName[50];

    printf("Nhap ten can nang cap: ");
    fflush(stdin);
    gets( searchName);
    int found = 0;
    for (int i = 0; i < size; ++i) {
        if (strcmp(contactList[i].name, searchName) == 0) {
            printf("Nhap thong tin moi cho %s:\n", searchName);

            printf("Nhap so dien thoai moi: ");
            scanf("%s", contactList[i].phone);

            printf("Nhap dia chi moi: ");
            scanf("%s", contactList[i].address);

            printf("Nhap status moi: ");
            scanf("%d", &contactList[i].status);

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay Contact.\n");
    }
}
void deleteContact(struct Contact contactList[], int *size) {
    char deleteName[50];

    printf("Nhap ten can xoa: ");
    fflush(stdin);
    gets( deleteName);


    int found = 0;
    for (int i = 0; i < *size; ++i) {
        if (strcmp(contactList[i].name, deleteName) == 0) {

            for (int j = i; j < *size - 1; ++j) {
                contactList[j] = contactList[j + 1];
            }
            (*size)--;
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay Contact.\n");
    }
}

void sortContactList(struct Contact contactList[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (strcmp(contactList[j].name, contactList[j + 1].name) > 0) {

                struct Contact temp = contactList[j];
                contactList[j] = contactList[j + 1];
                contactList[j + 1] = temp;
            }
        }
    }
}

void searchContactByName(struct Contact contactList[], int size) {
    char searchName[50];

    printf("Nhap ten can tim: ");
    fflush(stdin);
    gets( searchName);

    sortContactList(contactList, size);

    int left = 0, right = size - 1, found = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (strcmp(contactList[mid].name, searchName) == 0) {
            // Contact found
            printfContact(contactList[mid]);
            found = 1;
            break;
        } else if (strcmp(contactList[mid].name, searchName) < 0) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!found) {
        printf("Khong tim thay Contact.\n");
    }
}

void searchContactByStatus(struct Contact contactList[], int size) {
    int searchStatus;

    printf("Nhap status can tim: ");
    scanf("%d", &searchStatus);

    int found = 0;
    for (int i = 0; i < size; ++i) {
        if (contactList[i].status == searchStatus) {
            printfContact(contactList[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("Khong tim thay Contact thong qua status.\n");
    }
}

int main(){
    struct Contact contactList[100];
    int contactSize = 3;
    contactList[0] = (struct Contact){1, "Ho Trung", "0357007083", "59/39/18H", 7};
    contactList[1] = (struct Contact){2, "Tam Anh", "0000000000", "59/39/18A", 0};
    contactList[2] = (struct Contact){3, "Dinh Kha", "1010101010", "59/39/18B", 10};
    int choice;

    do {
        printf("********************MENU********************\n ");
        printf("1. In toan bo danh sach contact:\n ");
        printf("2. Them moi contact vao vi tri cuoi cung:\n ");
        printf("3. Cap nhat thong tin cua 1 Contact:\n ");
        printf("4. Xoa mot Contact:\n ");
        printf("5. Xap xep va in ra danh sach Contact duoc sap xep:\n ");
        printf("6. Tim kiem va in ra thong tin cua Contact tren cung mot hang (Theo ten cua Contact):\n ");
        printf("7. Tim kiem va in ra toan bo thong tin Contact (Theo Status):\n ");
        printf("8. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                printfContactList(contactList, contactSize);
                break;
            case 2:
                addContact(contactList, &contactSize);
                break;
            case 3:
                updateContact(contactList, contactSize);
                break;
            case 4:
                deleteContact(contactList, &contactSize);
                break;
            case 5:
                sortContactList(contactList, contactSize);
                printfContactList(contactList, contactSize);
                break;
            case 6:
                searchContactByName(contactList, contactSize);
                break;
            case 7:
                searchContactByStatus(contactList, contactSize);
                break;
            case 8:
                printf("Thoat.\n");
                break;
            default:
                printf("Lua chon khong hop le vui long chon lai tu 1 den 7.\n");
        }
    } while (choice != 8);

    return 0;
}