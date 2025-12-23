#include<stdio.h>

int main(){
	int h,m,s,nm,temp;
	scanf("%d %d %d",&h,&m,&s);
	printf("hour:%d\nminute:%d\nsecond:%d\n",h,m,s);
	scanf("%d",&nm);
	m = m + nm;
    h = h + (m / 60);
    m = m % 60;
    h = h % 24;

    printf("hour:%d\nminute:%d\nsecond:%d", h, m, s);

}
