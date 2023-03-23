#include<stdio.h>
#include<string.h>
char s1[200],s2[200],s[400]; int n;
int xuly(){
	int i,buoc,d=0; char tmp[400];
	for(buoc=1;buoc<=2*n;buoc++){
		d=0;
		for(i=0;i<n;i++){
			tmp[d++] = s2[i];
			tmp[d++] = s1[i];
		}
		tmp[d] = '\0';
		if(strcmp(s,tmp)==0) return buoc;
		for(i=0;i<n;i++){
			s1[i] = tmp[i];
			s2[i] = tmp[i+n];
		}
	}
	return -1;
}
main(){
	while(1){
		scanf("%d",&n);
		if(n==0) break;
	
		scanf("%s%s%s",&s1,&s2,&s);
		printf("%d\n",xuly());
	}
	
}
