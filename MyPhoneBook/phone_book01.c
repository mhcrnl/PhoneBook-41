/*
 *  PhoneBook aplication
 */
#include <stdio.h>
#include <string.h>

typedef struct phonebook {
    char name[30];
    char email[40];
    int ph_no;
} PhoneBook;
/*
 *  Declararea functiilor aplicatiei.
 */
int adaugaContact(void);
int addContact(PhoneBook *contact, char *nume, char *email, int nrtel);
void runProgram();

/*
 *  Implemantarea functiilor aplicatiei
 */
int adaugaContact(void){
    char nume[30];
    char email[40];
    int nrtel;
    int i;
    // Array-ul de contacte
    PhoneBook contacte[20];
    // Initializarea array
    for(i=0; i<20; i++){
        contacte[i].name[0]=0;
        contacte[i].email[0] =0;
        contacte[i].ph_no=0;
    }
    printf("Introduceti numele complet: ");
    scanf("%s", nume);
    printf("Introduceti adresa de email: ");
    scanf("%s", email);
    printf("Introduceti numarul de telefon: ");
    scanf("%d", &nrtel);
    addContact(contacte, nume, email, nrtel);
}
int addContact(PhoneBook *contact, char *nume, char *email, int nrtel){
    strcpy(contact->name, nume);
    strcpy(contact->email, email);
    contact->ph_no=nrtel;
    return 1;
}

void runProgram(){
    // Variabile locale
    int optiune;
    // Meniul aplicatiei
    while(1){
        printf("Aveti la dispozitie urmatoarele optiuni:\n"
                "1. - Adaugati un contact.\n"
                "2. - Editati contactul.\n"
                "3. - Stergeti contactul.\n"
                "4. - Exit.\n"
                "5. - Afisati contactele.\n"
                "6. - GitHub push code.\n"
                "Introduceti optiunea dvs: ");
        scanf("%d", &optiune);

        switch(optiune){
            case 1:
                adaugaContact();
              break;
            case 2:
              break;
            case 3:
              break;
            case 4:
              exit(0);
            case 5:
              break;
            case 6:
                //system("./gitpush");
              break;
            default:
              printf("Optiunea dvs nu a fost gasita ...");
              break;
        }
    }
}

int main(int argv, char *args[]){
    runProgram();
}
