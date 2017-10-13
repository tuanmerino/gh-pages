#include <stdio.h>
#include <math.h>
int check(int n ,int c,int d,int s){
	int x=0;
	if(d==-1){
		return 0;
	}
	x=pow(10,d);
	if(c!=1){
		if(n%x != n){
			return check(n,0,d+1,s);
		}
		else{
			return check(n,1,d,0);
		}
	}
	else{
		return ((int)n/x)*(pow(10,s))+  check(n%x,1,d-1,s+1);
	} 
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",check(n,0,0,0));
}
