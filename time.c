#include<stdio.h>
void main(){
	int minutes=135;
	int hours,rm;
	hours = minutes/60;
	rm = minutes % 60;
	printf("Hours=%d\n",hours);
	printf("Remaining Minutes=%d\n",rm);
}
