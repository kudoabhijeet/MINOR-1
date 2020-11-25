#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include "libxl.h"
// #include "extract.h"
void healthcare(){
    printf("Healthcare Questions\n");
}

const char* mobile(){
    char ch;
    char answers[10];
    //fflush(stdin);
    //const char* sequence;
    
    printf("Please answer in Y or N. \n");
    printf("1. Do you want a Battery efficient device?\n");
    scanf(" %c",&ch);
    answers[0] = ch;
    printf("%c\n",answers[0]);


    printf("1. Do you want a process efficient device?\n");
    scanf(" %c",&ch);
    answers[1] = ch;
    printf("%c\n",answers[1]);

    printf("3. Do you want a expandable stoarage device?\n");
    scanf(" %c",&ch);
    answers[2] = ch;
    printf("%c\n",answers[2]);
    
    printf("4. Do you want 5G compatable device?\n");
    scanf(" %c",&ch);
    answers[3] = ch;
    printf("%c\n",answers[3]);
    
    printf("5. Do you want wireless charging in your device?\n");
    scanf(" %c",&ch);
    answers[4] = ch;
    printf("%c\n",answers[4]);
    
    printf("6. Do you want a devices embedded with In-Display fingerprint sensor?\n");
    scanf(" %c",&ch);
    answers[5] = ch;
    printf("%c\n",answers[5]);
    
    printf("7. Do you want Scene optimizer in a Device?\n");
    scanf(" %c",&ch);
    answers[6] = ch;
    printf("%c\n",answers[6]);
    
    printf("8. Do you want light weight device?\n");
    scanf(" %c",&ch);
    answers[7] = ch;
    printf("%c\n",answers[7]);
    
    printf("9. Do you want a high resolution camera in your device.?\n");
    scanf(" %c",&ch);
    answers[8] = ch;
    printf("%c\n",answers[8]);
    
    printf("10. Do you want a fast charging compatable device?\n");
    scanf(" %c",&ch);
    
    answers[9] = ch;
    printf("%c\n",answers[9]);

    //TERMINATE STRING
    answers[10] = '\0';


    printf("YOUR INPUT :");
    puts(answers);
    const char *p = &answers[0];
    return p;
} // Mobile 

void read_sheet(){

    BookHandle book = xlCreateBook();
    const char* s;
    const char* name;
    if(book) 
    {
        if(xlBookLoad(book, "example.xls")) 
        {
            SheetHandle sheet = xlBookGetSheet(book, 0);
            if(sheet)
            {
                for(int i = 1; i < 5; i++) {
                s = xlSheetReadStr(sheet, i,1,0);
                if(strcmp(s,mobile()) == 0){
                    printf("FOUND!\n");
                    // EXIT HERE 
                name = xlSheetReadStr(sheet,i,0,0);
                if(name) printf("%s\n", name);

                break;
                }
                else{
                    printf("NOT FOUND!\n");
                }
            } //for
                
            }
        }     
    }
    
        xlBookRelease(book);
        
}

void bot(){
    int choice;
    printf("Bot starting now...");
    printf("Select a category. \n 1. Mobile \n 2. Healthcare \n 3. Exit");
    scanf("%d",&choice);
    if(choice == 1){
        mobile();
    }
    else if(choice == 2){
        healthcare();
    }
    else {
        printf("Invalid Input!");
        exit(1);
    }
}

int main(){
    read_sheet();
}