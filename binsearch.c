#include <stdio.h>

int binsearch( int x, int v[], int n );

	int main()
	{
		int i, x, n, v[]={ 1,1,1,1,1,1,1,1,1,1 };

		binsearch( 1,v,1);

		for( i = 1; i < 100; i++ )
		{
			printf("%d %d %d %d\t\t\t\t",x, n, v, binsearch(1,v,1) );
		}

	}

		int binsearch( int x, int v[], int n )
		{
			int low, high, mid;

				low = 0;
				high = n - 1;
				mid = ( low + high ) / 2;

					while( low <= high && x != v[mid] )
					{
						if( x < v[mid] )
							high = mid - 1;
						else
							low = mid + 1;
						mid = ( low + high ) / 2;
					}

					if ( x == v[mid] )
						return mid;
					else
						return -1;
		}
