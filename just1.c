#include<stdio.h>
#include<math.h>

int i, n, j, k, fac;
float x0, xn, h, z, z1, mu, a1, a2, sigma, sum=1;
float x[20], y[20], so, se, ans, mu1, sigma1;

float function(float, float, float);

int main()
{
	printf("enter the mean and standard eviation of the distribution\n");
	
	printf("the mean::");
	scanf("%f",&mu);
	getchar();
	printf("\n");
	
	printf("the standard deviation::");
	scanf("%f",&sigma);
	getchar();
	printf("\n");
	
	printf("x0::");
	scanf("%f",&x0);
	getchar();
	printf("\n");
	
	printf("xn::");
	scanf("%f",&xn);
	getchar();
	printf("\n");
	
	printf("nuber of interval::");
	scanf("%f",&n);
	getchar();
	printf("\n");
	
	h=(xn-x0)/n;
	for(i=0; i<=n; i++)
	{
		x[i]=x0+(i*h);
		y[i]=function(x[i],mu,sigma);
	}
	so=0.0;
	se=0.0;
	for(i=1; i<n; i++)
    	{
        if(i%2==1)
        {
            so=so+y[i];
        }
        else
        {
            se=se+y[i];
        }
 
    	}
    	ans=h/3*(y[0]+y[n]+4*so+2*se);
    	printf("\n Final integration is %f",ans);
    
    	return 0;  
	 
}

float function(float xi, float mu1, float sigma1)
{
	z= (xi-mu1)/sigma1;
	z1= (-0.5)*(pow(z,2));
        sum= pow(2.7183,z1);
	a1= sigma1*2.506;
	a2= sum/a1;
	return(a2);	
	
}
