#include<Stdio.h>
int main(){
	
	int n; 
	printf("Nhap n=");
	scanf("%d",&n);
	if(n < 0){
		printf("n=\n");
    }else{
    	int i;
    	printf("in ra so chan:");
    for (i=0;i<n;i+=2){   
	    printf("%d",i);
		}
    }
    return 0;
}

