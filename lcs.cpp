#include <iostream>

int max(int a, int b){
	return a>b? a:b;
}

int LCS(std::string s1, std::string s2){
	int x = s1.length(), y = s2.length();
	int L[x+1][y+1];
	for(int i = 0; i<=x; i++){
		for(int j = 0; j<=y; j++){
			if(!j || !i) L[i][j] = 0;
			else if(s1[i-1] == s2[j-1]) L[i][j] = L[i-1][j-1] + 1;
			else L[i][j] = max(L[i][j-1], L[i-1][j]);
		}
	}
	return L[x][y];
}

int main(int argc, char** argv){
	int n, x, y;
	std::string s1, s2;
	std::cin >> n;
	for(int i = 0; i<n; i++){
		std::cin >> x >> y;
		std::cin >> s1 >> s2;
		std::cout << LCS(s1,s2) << std::endl;
	}

}