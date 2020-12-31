  #include <stdio.h>

int main(){
	int a=0, b=0;
    int ans=0;
	scanf("%d %d", &a,&b );
    if(b<=0){
        ans=0;
    }
    if(b>0&&a<0){
        ans=(b-1)*2+1;
    }
    if(b>0&&a>=0){
        ans=(b-a-1)*2;
    }
    printf("%d",ans);
}