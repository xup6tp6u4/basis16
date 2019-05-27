#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define INPUT_MAX 5
void NTC(char * );  
char *map(int);     
int main(void){
	
	int i,j=0;      
	char *input;   
	char num[INPUT_MAX];
	int L;    
	 
	printf("請輸入一串阿拉伯數字:");
	scanf("%s",num);
	
	input=num;
	L=strlen(num);
	for(i=0;i<L;i++){
		NTC(input);
		if(*(input)!='0'){
			printf("%s",(map(L))+j);
		}
		input++;
		j+=3;
	}
	printf("\n");
	system("pause");
	return 0;
} 
char *map(int D){
	int i,j=0;
	char *result[4];
	char C[5][3]={"萬","千","百","拾"," "}; 
	
	for(i=D;i>1;i--){
		result[j]=C[5-i];
		j++;
	}
	return *result;
}
void NTC(char *input){
	
	char C_map[10][4]={"零","壹","貳","參","肆","伍","陸","柒","捌","玖"};
	
	switch(*input){
	case '0':{
		printf("%s",C_map[0]);
		break;
	}
	case '1':{
		printf("%s",C_map[1]);
		break;
	}
	case '2':{
		printf("%s",C_map[2]);
		break;
	}
	case '3':{
		printf("%s",C_map[3]);
		break;
	}
	case '4':{
		printf("%s",C_map[4]);
		break;
	}
	case '5':{
		printf("%s",C_map[5]);
		break;
	}
	case '6':{
		printf("%s",C_map[6]);
		break;
	}
	case '7':{
		printf("%s",C_map[7]);
		break;
	}
	case '8':{
		printf("%s",C_map[8]);
		break;
	}	
	case '9':{
		printf("%s",C_map[9]);
		break;
	}			
	}
}
