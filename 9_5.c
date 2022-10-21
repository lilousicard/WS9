#include<stdio.h>
#include <string.h>

int main(void) {

    char user_input[30] = {0};
    printf("Enter input string:\n");
    fgets(user_input, 30, stdin);
    user_input[strlen(user_input)-1]=0;

    while (strcmp(user_input,"q") != 0){

        //if (strcmp(user_input,"q") == 0) break;

        int index = 0;
        while (index<strlen(user_input)&& user_input[index] != ',') index++;

        if (index != strlen(user_input)){
            char argument_list[2][30];    
            int i=0;

            while(user_input[i]!=','){
                argument_list[0][i]=user_input[i];
                i++;    
            }
            i++;
            int s = 0;
            while(i<strlen(user_input)){
                argument_list[1][s]=user_input[i];
                i++;
                s++;
            }



            i=0;
            printf("First word: ");
            while(i<strlen(argument_list[0])){
                if(argument_list[0][i]==' '){
                    i++;
                    continue;
                }

                printf("%c", argument_list[0][i]);
                i++;
            }
            printf("\n");
            i=0;
            printf("Second word: ");
            while(i<strlen(argument_list[1])){
                if(argument_list[1][i]==' '){
                    i++;
                    continue;
                }
                printf("%c", argument_list[1][i]);
                i++;
            }
            printf("\n");
        } else {
            printf("Error: No comma in string.\n");
        }
        printf("\nEnter input string:\n");
        fgets(user_input, 30, stdin);
        user_input[strlen(user_input)-1]=0;

    }



    return 0;
}
