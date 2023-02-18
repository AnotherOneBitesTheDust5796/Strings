#include <iostream>
#include <string>

using namesapce std;

int main(){
	int k = 3;
	string text = "ab cd e";
	int i = 0;

		while(i < text.length()){
			if((i+1) % k ==0)
				text.erase(i);
			i++;
			}
	return 0;
}