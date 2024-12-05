/*Task
To complete this challenge, you must save a line of input from stdin to a variable, print Hello, World.
on a single line, and finally print the value of your variable on a second line.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char input_string[105]; 
    
   
    scanf("%[^\n]", input_string); 
    
    
    printf("Hello, World.\n");
    
    printf("%s",input_string);
    return 0;
}
