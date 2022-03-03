#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	char word[20] = "racecar";
	
	int left, right;
	for (left = 0, right = strlen(word)-1; left < right && word[left] == word[right]; left++, right--);
	// while (left < right && word[left] == word[right]) {
	// 	left++;
	// 	right--;
	// }
	printf(left<right?"no\n":"yes\n");
	// if (left < right) printf("no\n");
	// else printf("yes\n");
	return 0;
}
