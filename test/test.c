
#include <stdio.h>
#include <math.h>

int check1(int n,int d){
	int x;
	x=pow(10,d);
	if(n%x !=n){
		return check1(n,d+1);
	}
	return d-1;
}
int check2(int n,int d,int s){
	int x,du;

	if (d==-1){
		return 0;
	}
	x=pow(10,d);
	du=n%x;
	return ((int)n/x)*(pow(10,s))+check2(du,d-1,s+1);

}
int main(){
	int n;
	int dem;
	scanf("%d",&n);
	dem=check1(n,0);
	printf("%d\n",dem);
	printf("%d",check2(n,dem,0));
}
