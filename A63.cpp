#include <iostream>
using namespace std;

int getSum(int);
int main()
{
	int N;
	int num, result;
	
	cout << "Enter the number of inputs: ";
	cin >> N;

	for(int i=0; i<N; i++)
		{
			cout << "Enter your value: ";
			cin >> num;
			result = getSum(num);
		}
	cout << "Sum: " << result << endl;
}

int getSum(int val, int cnt)
{
	static int sum=0;
	static int min, max;
	if (sum == 0)
		min = max = val;
	min = (min > val)? val : min ;
	max = (max < val)? val : max ;
	// if (cnt == 0 || (min > val) )
	// 	min = val;
	// if (cnt == 0) || (max < val))
	// 	max = val
	sum += val;
	return sum;
}
