#include <stdio.h>
int main(){
	int a[2];
    int ans;
    scanf("%d%d",&a[0],&a[1]);
    if(a[0]<0){
    ans=(a[1]-1)*2+1;
	}else{
		ans = a[1]-a[0]-1;
	}
    printf("%d",ans);
}