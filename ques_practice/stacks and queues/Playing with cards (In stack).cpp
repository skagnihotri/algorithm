#include <bits/stdc++.h>
using namespace std;

void prime_array(int seive[], int pure_sieve[], int n){

	seive[2] = 1;
	for (int i = 3; i < n; i=i+2)
	{
		seive[i] = 1;
	}

	for (int i = 3; i*i < n; i =i+2){
		if (seive[i]){
			for (int j = i*i; j < n; j += i){
				seive[j] = 0;
			}
		}
	}

	int j=0;
	for (int i = 0; i < n; ++i){
		if (seive[i]){
			pure_sieve[j++] = i;
		}
	}

	return;
}

int main(int argc, char const *argv[])
{
	int n,q;
	cin>>n>>q;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	int seive[10000]={0};
	int pure_sieve[10000];
	for (int i = 0; i < 10000; ++i){
		pure_sieve[i] = -1;
	}

	prime_array(seive,pure_sieve,10000);

	stack<int> main_stack,stack_a,stack_b;

	for (int i = 0; i < n; ++i){
		main_stack.push(arr[i]);
	}

	for (int i = 0; i < q; ++i){
		
		while(!main_stack.empty()){
			int temp = main_stack.top();
			main_stack.pop();

			(temp%pure_sieve[i]==0)? stack_a.push(temp):stack_b.push(temp);
		}

		while(!stack_a.empty()){
			cout<<stack_a.top()<<endl;
			stack_a.pop();
		}

		main_stack = stack_b;

		while(!stack_b.empty()){
			stack_b.pop();
		}
	}

	while(!main_stack.empty()){
		cout<<main_stack.top()<<endl;
		main_stack.pop();
	}

	return 0;
}