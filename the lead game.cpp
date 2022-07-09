#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int rounds;
	int *player1;
	int *player2;
	cin >> rounds;
	player1 = new int[rounds];
	player2 = new int[rounds];
	int acc1,acc2;
	int currwinner=0;
	int currtopdiff=-1;
	acc1=acc2=0;
	
	for(int i=0;i<rounds;i++){
	    cin >> player1[i] >> player2[i];   
	    acc1 += player1[i];
	    acc2 += player2[i];
	    if (acc1 >= acc2 && acc1-acc2 > currtopdiff){
	        currtopdiff = acc1-acc2;
	        currwinner = 1;
	    } else if (acc1 <= acc2 && acc2-acc1 > currtopdiff) {
	        currtopdiff = acc2-acc1;
	        currwinner=2;
	    }
	 }
	 cout << currwinner <<" "<< currtopdiff <<endl;
	return 0;
}
