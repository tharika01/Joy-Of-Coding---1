#include <stdio.h>
#include <stdlib.h>
typedef struct book_stack
{
	int bookId;
	char book_name[20];
	char book_author[20];
	float book_price;
}stack;
void push(stack new_book,int *top,stack books[]);
stack pop(int *top,stack books[]);
void display(int top,stack books[]);

int main()
{
	int top = -1,ch;
	stack books[5],new_book,del_book;
	for(;;)
	{
		printf("Enter 1.To insert\n2.To delete\n3.To display\n4.To exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(top == 5)
				{
					printf("Stack Full\n");
					break;
				}
				printf("Enter the book details\n");
				scanf("%d %s %s %f",&new_book.bookId,new_book.book_name,new_book.book_author,&new_book.book_price);
				push(new_book,&top,books);
				break;
			case 2:
				if(top == -1)
				{
					printf("Stack Empty\n");
					break;
				}
				del_book = pop(&top,books);
				printf("Details of the deleted book are:\n");
				printf("Book_ID:%d\nBook name:%s\n",del_book.bookId,del_book.book_name);
				printf("book author:%s\nBook price:%f",del_book.book_author,del_book.book_price);
				break;
			case 3:
				if(top == -1)
				{
					printf("Stack Empty\n");
					break;
				}
				display(top,books);
				break;
			case 4:
				exit(0);
		}
	}
	return 0;
}
void push(stack new_book,int *top,stack books[])
{
	books[++(*top)] = new_book;
	return;
}
stack pop(int *top,stack books[])
{
	stack del_book = books[(*top)--];
	return del_book;
}
void display(int top,stack books[])
{
	for(int i = top; i >= 0 ;i--)
	{
		printf("Book %d details:\n",i+1);
		printf("Book_ID:%d\nBook name:%s\n",books[i].bookId,books[i].book_name);
		printf("book author:%s\nBook price:%f\n",books[i].book_author,books[i].book_price);
	}
	return;
}
		
