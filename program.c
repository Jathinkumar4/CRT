#include<stdio.h>

int main(){
    int n;
       
    for(n=-1;n<=10;n++){
    	if(n<5){
    	continue;
    	}
		else{
    		break;
    	}
		printf("hi");
    	n++;
	}
    return 0; //no output will return
}
