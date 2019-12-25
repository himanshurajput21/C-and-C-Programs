int factorial(int num)
{
	int i,f;
	for(i=num;i>=2;i--)
	{
		num=num*(i-1);
	}

	return(num);
}

