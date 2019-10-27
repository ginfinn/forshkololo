void resheto()
{
	int n;
	int k = 1;
	int A[1000000];
	cin>>n;
	for(long long i = 2;i < n; i++)
	{
		for(long long j = i * i; j < n; j += i)
		{
			if (j > n)
				break;
			A[j] = 1;
		}
	}
	for(int i = 2; i < n ; i++)
	{
		if (A[i] == 0)
		{
			cout << i << "\t";
			k++;
		}
		if (k % 11 == 0)
		{
			cout<<endl;
			k=1;
		}
	}
	cout<<endl;
}
