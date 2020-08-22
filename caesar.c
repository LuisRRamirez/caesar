//  1. when typing ./ceasar an integer will be addded next to it 
//  2. argc counts how many "words" are in the input argc1 = ./caesar & the integer is argc2 
//  3. I want to make sure the user inputs a number. Each "word" inputted is a string array "argv[]"
//  4. ./caesar is argv[0] and argv[1] is our integer
//  5.  // Our integer is a considered a string so we need to change it to a number using atoi command



#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
// when typing ./ceasar an integer will be addded next to it 
int main(int argc, string argv[])
{

// trying to see something
    // argc counts how many "words" are in the input argc1 = ./caesar & the integer is argc2 
    if (argc != 2)
        {
            printf("./caesar key \n");
            return 1; 
        }
        
      for (int i=0, n = strlen(argv[1]); i<n; i++)
        {
            if (isalpha(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }    
    // I want to make sure the user inputs a number. Each "word" inputted is a string array "argv[]"
    // ./caesar is argv[0] and argv[1] is our integer
    // Our integer is a considered a string so we need to change it to a number using atoi command
 

        
    string text = get_string ("plaintext:"); 
    printf("ciphertext:");
    
    for (int i=0, n = strlen(text); i<n; i++)
       {
           if  ( (text[i] > 64 && text[i] < 91) )
            {
                text[i] = text[i] - 65; 
                int integer = atoi(argv[1]);
                char c = ( text[i] + integer) % 26;
                printf("%c", c+65);
            }
            if ((text[i] > 96 && text[i] < 123) )
            {
                text[i] = text[i] - 97;
                int integer = atoi(argv[1]);
                char c = ( text[i] + integer) % 26;
                printf("%c", c+97);
            }
            else 
            { 
                char c = text[i];
                printf ("%c", c);
            }
        }
        
        printf("\n");
        return 0;
     
    

     }
     
