/*
	@Author
		Name : Halil İbrahim Bestil
		Web-site : http://www.hibestil.com
		E-Mail Adress : hibestil [at] gmail [.] com
		School: Yildiz Technical University - Computer Engineering
	@About
		This program creates a simple Binary tree. 
		
	@Simple
	There is a basic Binary tree 
	
	      (60)					<====== This line is tree root
             /    \
            /      \
        (50)        (80)			<====== This are tree's branchs
        /   \       /   \
      (40) (55)   (75)  (90)			
      / \   /\    /\	  /\
    (0)(0) /  \	 (0)(0) (0)(0)		
         (52)(57) 					<====== This are tree's leaves
	      
		
		
		
*/

#include <stdio.h>
int main(){
	/* 
		@param eleman : gets element for to put elements to their location . 
		@param N  :	Number of elements
	*/
	static int A[20];
	int I,i,j,eleman,N;

	printf("What is your Array lenght ? :\n");
	scanf("%d",&N); // get number of elements	
	printf("Enter elements of array : \n");
		// In this part program gets elements . Then puts elements to their location  
		for( i=0 ;i<N; i++){
			I=1;
			printf("	*What is %d. element? :\n	*** :",i+1);
			scanf("%d",&eleman); // gets a new element 
			while((I<=N)&&(A[I]!=0)){ // puts the element to its location  
				if(eleman>A[I]) I=2*I+1;
				else I=2*I;	
			}
			A[I]=eleman;
			printf("	*****A[%d] = %d \n",I,A[I]);
		}
	
	// Write Array
	for(i= 1 ; i<=I;i++)
		printf("%d , ",A[i]);
		
	
	
	getch();
	return 0;

	
}
