#include <bits/stdc++.h>
using namespace std;

class circles
{
public:
	int radius;
	int centre;
	int start;
	int end;	
};

bool mycompare(circles a, circles b){
	
	return a.end < b.end;
}

int main()
{
	int n;
	cin>>n;
	circles c[n];
	
	for (int i = 0; i < n; ++i){
		cin>>c[i].centre>>c[i].radius;	
	}

	for (int i = 0; i < n; ++i){
		c[i].start = c[i].centre - c[i].radius;
		c[i].end = c[i].centre + c[i].radius;
	}

	sort(c, c+n, mycompare);

	// for (int i = 0; i < n; ++i){
	// 	cout<<c[i].radius<<" "<<c[i].centre<<" "<<c[i].start<<" "<<c[i].end<<endl;
	// }

	int count = 1, last = c[0].end;
	for (int i = 1; i < n; ++i){
		
		if (c[i].start >= last){
			count++;
			last = c[i].end;
		}
	}

	cout<<n-count<<endl;
	return 0;
}