#include "Tail.h"


void initialize_Tail(struct Tail *q) {
	int i=0;
	for(i;i<N;i++){
		q->array[i]=0;
		q-> index=-1;
	}
}
int Tail_empty(struct Tail * q) {
	return q -> index ==-1;
}
int Tail_full(struct Tail * q) {
	return q -> index == N-1;
}
int add_Tail( struct Tail * q, int value) {
	if(!Tail_full(q)){
		(q -> index)++;
			q -> array[q -> index] = value;
		return 0;
	}
	else
		return -1;
}
/*void Tail_print(struct Tail *q, int * value) {
for(int i=0; i<q ->index; i++)
{
	printf("%i\n", array[i]);
}
}
*/
int remove_Tail(struct Tail *q, int * value) {

if(!Tail_empty(q)) {
	*value = q -> array [0];
for(int i=0; i< q->index; i++)
{
q->array[i] = q->array [i+1];
q->array[q->index] = 0;
	(q-> index)--;
}
return 0;
}
else
return -1;

}


