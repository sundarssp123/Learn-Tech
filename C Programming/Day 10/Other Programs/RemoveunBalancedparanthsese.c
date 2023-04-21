#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

/* structure of the stack */
struct stack
{
	int top;
	char items[MAX];
};

/* push function to push an element in the top of the stack */
void push(struct stack *s, char data)
{
	s->top++;
	s->items[s->top]=data;
}

/* pop function to pop an element from the top of the stack */
void pop(struct stack *s)
{
	s->top--;
}

int main(void) {
	char *str;
	int i,index=0;

	/* structure object */
	struct stack s;

	/* set the top of the stack as -1 initially */
	s.top=-1;

	/* allocate memory for the input string */
	str=(char*)malloc(sizeof(char)*256);

	/* get the input string from the user */
	scanf("%s",str);

	i=0;

	/* loop until we reach the end of the string */
	while(*(str+i))
	{

		/* Push all the characters onto the stack until we visit ')' character */
		if(*(str+i)!=')')
		{
			push(&s,*(str+i));
			index++;
		}
		else
		{
			/* If we see a ')' pop all the elements from the stack until we see '(' */
			while(s.items[s.top]!='(' && s.top!=-1)
			{
				pop(&s);
				index--;
			}

			/* pop the '(' character too */
			pop(&s);
			index--;
		}
		i++;
	}

	/* if stack is not empty, there must be an unbalanced parentheses left in the stack */
	if(s.top!=-1)
	{
		i=0;
		/* index pointing to the index of that unbalanced parentheses */
		while(*(str+i))
		{

			/* print all the characters of the string, except the one index pointing to */
			if(i==index)
			{
				i++;
				continue;
			}
			printf("%c",*(str+i));
			i++;
		}
	}

	return 0;
}


