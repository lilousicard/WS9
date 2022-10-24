#include<stdio.h>
#include <string.h>

int main(void) {

    char user_input[30] = {0};
    //Part 1: prompt the user for a string
    printf("Enter input string:\n");
    fgets(user_input, 30, stdin);
    user_input[strlen(user_input)-1]=0;

    while (strcmp(user_input,"q") != 0){//Part 4: Repeat the process until q is entered
	//Part 2: verify that the input string contains a comma    
        int index = 0;
        while (index<strlen(user_input)&& user_input[index] != ',') index++;

        if (index != strlen(user_input)){//The input string does contain a comma
            char argument_list[2][30];    
	    int i=0;
            int s=0;
	    //Part 3: store the word into two different variable 
	    //Resonable Assumption: Two string variables = 2D char array 
            while(user_input[i]!=','){//Copy the first word into the array
		if(user_input[i] ==' '){//skip space
			i++;
			continue;
		}
                argument_list[0][s]=user_input[i];
                i++;    
		s++;
            }//The first input word is now stored at index 0 
	    argument_list[0][s]=0;//put a null character at the end
            i++;
            s = 0;
            while(i<strlen(user_input)){//Write the second word into the array
		if(user_input[i] ==' '){//skip space
                        i++;
                        continue;
                }
                argument_list[1][s]=user_input[i];
                i++;
                s++;
            }//the second input word is now store at index 1
            argument_list[1][s]=0;//put a null character at the end of the string


            i=0;
	    //output the strings
            printf("First word: ");
            while(i<strlen(argument_list[0])){
                if(argument_list[0][i]==' '){//skip space
                    i++;
                    continue;
                }

                printf("%c", argument_list[0][i]);
                i++;
            }
            printf("\n");//start at a new line
            i=0;
            printf("Second word: ");
            while(i<strlen(argument_list[1])){
                if(argument_list[1][i]==' '){//skip space
                    i++;
                    continue;
                }
                printf("%c", argument_list[1][i]);
                i++;
            }
            printf("\n");//start at a new line
        } else {//Part 2 error message
            printf("Error: No comma in string.\n");
        }
	//Part 1 and part 4 combine (ask the user for input inside a loop)
        printf("\nEnter input string:\n");
        fgets(user_input, 30, stdin);
        user_input[strlen(user_input)-1]=0;

    }//End of main while loop



    return 0;
}
