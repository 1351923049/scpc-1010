#include<stdio.h>
int a[1000005];
int main(){
	int n;scanf("%d",&n);
	while(n--){
		int x;
		scanf("%d",&x);
		a[x]++;
	}
	for(int i=0;i<=1000000;i++){
		if(a[i]==0)continue;
		else{
			while(a[i]--){
				printf("%d ",i);
			}
		}
	}
	return 0;
}
