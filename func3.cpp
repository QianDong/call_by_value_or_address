int func3(int &a, int &b)   /* &a: to change value a direcly at a's address in RAM  */ 
{
	a=a+1;
	b=b+1;
	return a+b;
}
