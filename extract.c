#include <stdio.h>
#include <conio.h>
#include "libxl.h"
// #include "chatbot.h"
// void compare(char* sheet_data,char *user_data){

// }

const char* read_sheet(){

    BookHandle book = xlCreateBook();
    const char* s;
    
    if(book) 
    {
        if(xlBookLoad(book, "example.xls")) 
        {
            SheetHandle sheet = xlBookGetSheet(book, 0);
            if(sheet)
            {
                for(int i = 1; i< 2; i++) {
                s = xlSheetReadStr(sheet, i,1,0);
                }
                
            }
        }     
    }
        return s;
        xlBookRelease(book);
        
}

int main(){
    printf("MAIN\n");
    puts(read_sheet());
}