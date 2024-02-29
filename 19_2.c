#include<stdio.h>
void triple(int * x);   // use pointer as argument

void double_value(int array[], int n);   // use array as argument

void square_value (int * pt, int n){
	for (int i = 0; i < n; i++){
		pt[i]*= pt[i];
	}
}

int main(){
	/*pointer (Con tr?): variable poiting to address of another variable
	declare : datatype * variable_name;
	EX: int * pointer;
	*/
	int a = 3;
	int *pn;
	pn = &a;
	printf("The address of variable of a: %u\n",pn);
	//access the variable's value using pointer
	printf ("The value of the variable a: %d\n",a);
	printf ("The value of the variable a(using pointer): %d\n", *pn);
	*pn = 5;
	printf ("The value of the variable a: %d\n",a);
	int b = 7;
	int *p2 = &b;
	*pn = *p2 + a; 
	printf ("The value of the variable a: %d\n",a);
	*p2 = *pn + b;
	printf ("The value of the variable b: %d\n",b);
	
	/*
	relation between pointer and array
	*/
	int arr[3]={1,2,3};
	int * pt3;
	pt3 = arr;
	printf ("the value of the pointer pointing to arr :%u\n", pt3);
	printf ("the value as using arr: %u\n", arr);
	printf ("the address of the first element of the arr: %u\n", &arr[0]);
	
	//access the array's elements usning pointer 
	printf ("The valuse of the first element: %d\n", arr[1]);
	printf ("The valuse of the first element(using pointer): %d\n", pt3[1]);
	
	// traverse the array using pointer
	printf ("the elements in the array: ");
	for (int i = 0; i < 3; i++){
		printf ("%d   ", pt3[i]);
	}
	printf ("\n");
	
	pt3[1]= 4;
	for (int i = 0; i < 3; i++){
		printf ("%d   ", pt3[i]);
	}
	printf ("\n");
	
	pt3 = &arr[1];
	printf("The value of arr[2]: %d\n", arr[2]);
	printf("The value of arr[2](using pointer): %d\n", pt3[1]);
	
	/*
	utilization of pointer and funtion
	*/
	
	// cal lthe function: no return value, argument
	printf ("The value of the variable a(before calling the function): %d\n",a);
	triple(&a);
	printf ("The value of the variable a(after calling the function): %d\n",a);
	
	//pointer can help to change the value of a variable outside of a function
	
	//call a function
	printf ("the elements in the arr before calling the function: ");
	for (int i = 0; i < 3; i++){
		printf ("%d   ", arr[i]);
	}
	printf ("\n");
	
	double_value(arr, 3);
	printf ("the elements in the arr after calling the function: ");
	for (int i = 0; i < 3; i++){
		printf ("%d   ", arr[i]);
	}
	printf ("\n");
	
	//call the function
	square_value(arr, 3);
	printf ("the elements in the arr after calling the function: ");
	for (int i = 0; i < 3; i++){
		printf ("%d   ", arr[i]);
	}
	printf ("\n");
	
	
	//using array or pointer can change
	//the value of multiple variables outside of the function
	
	//write a function to double and triple two first elements of an array
	
	//Write a funtcion to convert the number of minutes to hours and minutes
	//Ex: m = 75 --> h = 1, m = 15
	
	//Write a function to solve the square equation
	return 0;
}
void triple(int *x){
	*x *= 3; // *x = *x * 3
}

void double_value(int array[], int n){
	array[0] *= 2;
	array[1] *= 2;
	array[2] *= 2;
}