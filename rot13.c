#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char msg[100], ch;
	int i, key = 13;

	printf("------------\n");
        printf("ROT13 CIPHER\n");
        printf("------------\n\n");
	
	printf("Enter a message to encrypt or decrypt: ");
	fgets(msg, 100, stdin);
	
	for(i = 0; msg[i] != '\0'; ++i)
	{
		ch = msg[i];
		
		if(ch >= 'a' && ch <= 'm')
		{
			ch = ch + key;
			msg[i] = ch;
		}
		else if(ch >= 'n' && ch <= 'z')
		{
			ch = ch - key;
			msg[i] = ch;
		}
		
		else if(ch >= 'A' && ch <= 'M')
		{
			ch = ch + key;
			msg[i] = ch;
		}
		else if(ch >= 'N' && ch <= 'Z')
		{
			ch = ch - key;
			msg[i] = ch;
		}
	}
	
	printf("Message: %s", msg);

}

