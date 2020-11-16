// TODO 
//  1. import custom header files

#include<stdio.h>

void menu(){
    int choice;
    printf("Choose an option :\n");
    printf("1. About Me\n");
    printf("2. Start\n");
    printf("3. Exit\n");
    scanf("%d", &choice);
    printf("Your choice : %d\n", choice);

    switch (choice)
    {
    case 1:
        /* code */
        printf("ABOUT ME\n \n");
        printf("Get assisted while making daily life decisions. \nEnter your requirements and specifications in simple yes and no, and get your desired output.");
        break;
    case 2:
        printf("Starts the Chatbot");
        break;
    case 3:
        printf("Thank you! \n Bye!");
        break;

    default:

        break;
    }

}

int main()
{
    printf("WELCOME TO THE INTELLIGENT DECISION MAKING CHATBOT...\n\n");
    menu();
    return 0;
}