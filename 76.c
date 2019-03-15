int dr(int x)
{
	int div=1,s=0;
	do{div*=10;}while(div<x);
	while(div!=0)
	{
		s+=x/div;
		x=x%div;
		div=div/10;
	}
	if(s<10) return s;
	else dr(s);
}
int main()
{   int n;
scanf("%d",&n);
	printf("%d",dr(n));
	return 0;}
