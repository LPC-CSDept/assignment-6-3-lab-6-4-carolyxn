#include <iostream>
using namespace std;

int getSum(int);
int main()
{
	int N;
	int num, result;
	
	cout << "Enter the number of inputs: ";
	cin >> N;
	result = getSum(N);
	cout << "Sum: " << result << endl;
}

int getSum(int N)
{
	int sum=0;
	int min, max, num;

	for(int i=0; i<N; i++)
		{
			cout << "Enter your value: ";
			cin >> num;
			sum += num;
			if ( i == 0)
				min = max = num;
			min = (min > num)? num : min ;
			max = (max < num)? num : max ;
		}
	sum = sum - min - max;
	return sum;
}
