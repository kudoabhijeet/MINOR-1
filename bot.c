#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <process.h>

char *get();
char input[120];
void main()
{
    printf("Bot : hello sir Bot at your service\n");
    while(1)
    {
        get();
        printf("Bot : What is your name?\n");
        get();
        printf("Bot : I'd like to call you %s from now\n");
        printf("Bot : I can help you with certain topics such as Health Care and Mobile Data\n");
        printf("from the above two topics you are interested in which one?\n 1. Health care\n 2. Mobile Data\n");
        get(); 
        
        if(strcmp(get(),"health care")==0)
        {
            printf("Bot : Yess, sure i can help you with mobile data..");
            printf("Bot : what do you are looking for the health care ?");
            get();
            if(strcmp(get(),"which is goog for fever")==0)  //suppose this question is asked from the user
            {
                printf("Bot : Paracetamol is good for fever as well as cold");    // so this can be the direct answer
            }                        
                    
        }
        else if(strcmp(get(),"mobile data")==0)
        {
            printf("Bot : Yess, sure i can help you with mobile data..");
            printf("Bot : what do you are looking for the mobile manufacturing ?");
            get();
            if(strcmp(get(),"which is the best mobile under 10000")==0)
            printf("Bot : Here is a list of mobiles which have amazing features under 10000");
        }
        

    }
}

char *get(void){
    gets(input);
    return input;
}