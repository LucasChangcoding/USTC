#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
	int input = 0;
	
	while(cin >> input){
		bool state = 0;
		int n = 1;
		int M[1001][1000]={0};
		M[0][0] = 1;
		if(input == 1){
			cout << 1 << '/' << 1 << endl;
			continue;
		}
		for(int i = 0,j = 0; ; ){
			n++;
			if(state == false){
				i--;
				j++;
				if(i<0){
					i=0;
					state = true;
				}
				M[i][j]=n;
				if(input == n){
					cout << i+1 << '/'<< j+1 << endl;
					break;
				}
			}
			else{
				i++;
				j--;
				if(j<0){
					j=0;
					state = false;
				}
				M[i][j]=n;
				if(input == n){
					cout << i+1 << '/'<< j+1 << endl;
					break;
				}
			}
		}
		
	}
	
	/*for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			cout << M[i][j] << ' ';
		}
		cout << endl;
	}*/
	return 0;
	
			

	
}