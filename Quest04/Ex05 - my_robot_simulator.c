#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char* cardinais(int direction){

    char* cardinal; 

    if (direction == 0) {
        cardinal = "'north'"; 
    }
    else if (direction == 1) {
        cardinal = "'east'";
    }
    else if (direction == 2) {
        cardinal = "'south'";
    }
    else if (direction == 3) {
        cardinal = "'west'";
    }
    return cardinal;
}

char result[100];

char* my_robot_simulator(char* instructions)
{    
    char* facing; 
    int x = 0;
    int y = 0; 
    int direction = 0;
    
    while (*instructions != '\0')
    {
        if (direction == 0) {
            if (*instructions == 'L') {
                direction = 3;
            } 
            else if (*instructions == 'R') {
                direction = 1;
            }
            else if (*instructions == 'A') {
                y -= 1;
            }                         
        }
        else if (direction == 1) {
            if (*instructions == 'L') {
                direction = 0;
            } 
            else if (*instructions == 'R') {
                direction = 2;
            }
            else if (*instructions == 'A') {
                x +=1;
            }                      
        }
        else if (direction == 2) {
            if (*instructions == 'L') {
                direction = 3;
            } 
            else if (*instructions == 'R') {
                direction = 1;
            }
            else if (*instructions == 'A') {
                y +=1;
            }           
        }
         else if (direction == 3) {
            if (*instructions == 'L') {
                direction = 2;
            } 
            else if (*instructions == 'R') {
                direction = 0;
            }
            else if (*instructions == 'A') {
                x -=1;
            }                       
        }
        instructions++;       
    }
    facing = cardinais(direction);  
    snprintf(result, 100, "{x: %d, y: %d, bearing: %s}", x, y, facing);
    return result;
}
/*
int main(){
    char coordenadas[] = "RAARA";
   
    //printf("%s", instructions);
    my_robot_simulator(coordenadas);
    return 0;
}*/
