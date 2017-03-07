#include<cstdio>
using namespace std;

int main(){

	int num;

	scanf("%d",&num);
	while(num!=1){
		printf("%d ",num);
		if(num%2==0)    num/=2;
                else    num=3*num+1;
	}
	printf("%d\n",num);

	return 0;
	
}
