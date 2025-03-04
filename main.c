#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <linux/input.h>

// perche' ai primi indici ( rispettivamente 0 - 3 ) se non viene messo niente prende dei caratterei a caso?


#define INPUT_DEVICE "/dev/input/event2" // Use your input device
#define MAX_WORD_SIZE 30


int write_in_file(char word[MAX_WORD_SIZE])
{

	FILE* file = fopen("output.txt", "a");
	fprintf(file, "%s\n", word );
	fclose(file);
	
	return 0;
}


int tryToAddChar(char word[MAX_WORD_SIZE], int* i, char c)
{
	if (*i < MAX_WORD_SIZE)
	{
		
		word[*i] = c;
		*i += 1;
		return 0;
	}
	

	return 1;
}

void keyToChar(struct input_event* input, int* i, char* word)
{

	switch (input->code)
	{

		case KEY_A:
		 	if (tryToAddChar(word, i, 'a') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 			
		case KEY_B:
		 	if (tryToAddChar(word, i, 'b') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 

		case KEY_C:

		 	if (tryToAddChar(word, i, 'c') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 
		case KEY_D:
		 	if (tryToAddChar(word, i, 'd') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 
		case KEY_E:
		 	if (tryToAddChar(word, i, 'e') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 
		case KEY_F:
		 	if (tryToAddChar(word, i, 'f') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 
		case KEY_G:
		 	if (tryToAddChar(word, i, 'g') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 
		case KEY_H:
		 	if (tryToAddChar(word, i, 'h') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 
		case KEY_I:
		 	if (tryToAddChar(word, i, 'i') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break;  
		case KEY_J:
		 	if (tryToAddChar(word, i, 'j') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break;  
		case KEY_K:
		 	if (tryToAddChar(word, i, 'k') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 
		case KEY_L:
		 	if (tryToAddChar(word, i, 'l') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 
		case KEY_M:
		 	if (tryToAddChar(word, i, 'm') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 
		case KEY_N:
		 	if (tryToAddChar(word, i, 'n') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 
		case KEY_O:
		 	if (tryToAddChar(word, i, 'o') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 
		case KEY_P:
		 	if (tryToAddChar(word, i, 'p') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 
		case KEY_Q:
		 	if (tryToAddChar(word, i, 'q') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 
		case KEY_R:
		 	if (tryToAddChar(word, i, 'r') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 
		case KEY_S:
		 	if (tryToAddChar(word, i, 's') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 
		case KEY_T:
		 	if (tryToAddChar(word, i, 't') == 1)
		 	{
		 		printf("Max lenght");
		 		return;
		 	}
		 	break; 
		case KEY_U:
		 	if (tryToAddChar(word, i, 'u') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 
		case KEY_V:
		 	if (tryToAddChar(word, i, 'v') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 
		case KEY_W:
		 	if (tryToAddChar(word, i, 'w') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 
		case KEY_X:
		 	if (tryToAddChar(word, i, 'x') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break;  
		case KEY_Y:
		 	if (tryToAddChar(word, i, 'y') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break;  
		case KEY_Z:
		 	if (tryToAddChar(word, i, 'z') == 1)
		 	{
		 		printf("Max lenght\n");
		 		return;
		 	}
		 	break; 
		case KEY_SPACE:
			*i = 0;
			write_in_file(word);
						
			free(word);

			word = (char*)(malloc(sizeof(char) * MAX_WORD_SIZE));
			word[0] = '\0';
			word[1] = '\0';
			word[2] = '\0';
			word[3] = '\0';
			break;

		case KEY_ENTER:
			*i = 0;
			write_in_file(word);
						
			free(word);
			word = (char*)(malloc(sizeof(char) * MAX_WORD_SIZE));
			word[0] = '\0';
			word[1] = '\0';
			word[2] = '\0';
			word[3] = '\0';
			break;


    	default:
    		break;
	}
}

int main() {
    int fd = open(INPUT_DEVICE, O_RDONLY);
    struct input_event ev;
    int i = 0;

    char* word = (char*)(malloc(sizeof(char) * MAX_WORD_SIZE));

    if (fd < 0) {
        perror("Failed to open input device");
        return 1;
    }

    while (1) 
    {
    	read(fd, &ev, sizeof(ev));

    	if (ev.type == EV_KEY)
    	{
    		if (ev.value == 1)
    		{
    			keyToChar(&ev, &i, word);
    		}
    	}
    }

    close(fd);
    return 0;
}
