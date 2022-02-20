#include<iostream>
#include<cstring>
#define N 10000
using namespace std;
int main(){
	char space = 32;
	int cnt = 1;
	char s[N];
	cout << "Enter a text: ";
	cin >> s;
	for(int i = 0; i < strlen(s); i++){
		if(s[i] == space){
			cnt++;
		}
	}
	cout << "Words numbers: " << cnt ;
}
