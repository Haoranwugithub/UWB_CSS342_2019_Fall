#include <iostream>
#include <cstdlib>

void dream(int level) {

	printf("dreaming at level %d\n\n", level);

	if (level > 0) {
		dream(level-1);
	}
	
	printf("leaving dream at level %d\n\n", level);
}

int main(int argc, char* argv[]) {
	int levelToDream = 0;
	if (argc>1) {
		levelToDream = atoi(argv[1]);
		if (levelToDream<0) {
			printf("invalid levelToDream %d\n", levelToDream);
			return -1;
		}
	}

	printf("started dream for %d levels\n\n", levelToDream);
	printf("===========================\n\n");

	dream(levelToDream);
}

