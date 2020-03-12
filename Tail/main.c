#include "Tail.h"
int main(void) {
struct Tail * q;
		initialize_Tail(&q);
		printf("%i\n",add_Tail(&q,1));
		printf("%i\n",add_Tail(&q,2));
		printf("%i\n",add_Tail(&q,3));
		printf("%i\n",add_Tail(&q,4));
		printf("%i\n",add_Tail(&q,9));
	//	Tail_print(&q);
		int value;
		printf("%i\n", remove_Tail(&q,&value));
		printf("%i\n",value);
		printf("%i\n", remove_Tail(&q,&value));
		printf("%i\n",value);	
		printf("%i\n", remove_Tail(&q,&value));
		printf("%i\n",value);
		printf("%i\n", remove_Tail(&q,&value));
		printf("%i\n",value);
		printf("%i\n", remove_Tail(&q,&value));
		printf("%i\n",value);
}

