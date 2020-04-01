#include "stack.h"

	void insert (int * stack, int dope, int * top){
	
		stack[++(* top)] = dope;
	
	}
	void show_delete (int * stack, int * top){
		if((* top) ==-1) printf("Stack has been showed");
		
		else {
		
		 int x = stack[(* top)--];
		 printf ("%d\n",x);

		}
	}

