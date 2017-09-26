#include <math.h>
int main(){
    long long n;
    int i;
    int d;
    scanf("%lld",&n);
    for (i=2;i<n;i++){

        if (n%i==0){
            d=0;
            printf("%d khong phai so nguyen to",n);
            break;
        }

    }
    if (d==1){printf("%d la so nguyen to",n);

    }
}
