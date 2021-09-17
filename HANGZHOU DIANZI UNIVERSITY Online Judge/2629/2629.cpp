/*#include<stdio.h>
int main(){
	int c,q,w,e,r,t;
	scanf("%d",&c);
	while(c--){
	scanf("%2d%4d%4d%2d%2d",&q,&w,&e,&r,&t);
	switch(q){
		case 33:printf("He/She is from Zhejiang,and his/her birthday is on %d,%d,%d based on the table.\n",t,r,e);break;
		case 11:printf("He/She is from Beijing,and his/her birthday is on %d,%d,%d based on the table.\n",t,r,e);break;
		case 71:printf("He/She is from Taiwan,and his/her birthday is on %d,%d,%d based on the table.\n",t,r,e);break;
		case 81:printf("He/She is from Hong Kong,and his/her birthday is on %d,%d,%d based on the table\n.",t,r,e);break;
		case 82:printf("He/She is from Macao,and his/her birthday is on %d,%d,%d based on the table.\n",t,r,e);break;
		case 54:printf("He/She is from Tibet,and his/her birthday is on %d,%d,%d based on the table.\n",t,r,e);break;
		case 21:printf("He/She is from Liaoning,and his/her birthday is on %d,%d,%d based on the table.",t,r,e);break;
		case 31:printf("He/She is from Shanghai,and his/her birthday is on %d,%d,%d based on the table.",t,r,e);break;
	}
	}
	return 0;
}*/
#include<stdio.h>
int main(){
    int n,a,b,c,d,e;
    char m[10];
    scanf("%d",&n);
    while(n--){
        scanf("%2d%4d%4d%2d%2d%s",&a,&b,&c,&d,&e,m);
        switch(a){
            case 33:printf("He/She is from Zhejiang,and his/her birthday is on %02d,%02d,%04d based on the table.\n",d,e,c);break;
            case 11:printf("He/She is from Beijing,and his/her birthday is on %02d,%02d,%04d based on the table.\n",d,e,c);break;
            case 71:printf("He/She is from Taiwan,and his/her birthday is on %02d,%02d,%04d based on the table.\n",d,e,c);break;
            case 54:printf("He/She is from Tibet,and his/her birthday is on %02d,%02d,%04d based on the table.\n",d,e,c);break;
            case 21:printf("He/She is from Liaoning,and his/her birthday is on %02d,%02d,%04d based on the table.\n",d,e,c);break;
            case 31:printf("He/She is from Shanghai,and his/her birthday is on %02d,%02d,%04d based on the table.\n",d,e,c);break;
            case 81:printf("He/She is from Hong Kong,and his/her birthday is on %02d,%02d,%04d based on the table.\n",d,e,c);break;
            case 82:printf("He/She is from Macao,and his/her birthday is on %02d,%02d,%04d based on the table.\n",d,e,c);break;            
        }
        //printf("and his/her birthday is on %02d,%02d,%04d based on the table.\n",d,e,c);
    }
}
