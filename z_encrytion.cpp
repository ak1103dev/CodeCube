#include <stdio.h>
#include <string.h>

#define MAX 1010

int main() {
  int key;
  char encrypt[MAX];
  scanf("%d", &key);
  scanf("%s", encrypt);

  int col = strlen(encrypt) / key + 2;
  char box[key][col];
  int counter = 0;
  for (int i = 0; i < key; i++) {
    for (int j = 0; j < col; j++) {
      if (j % (key + 1) == key && i == 0) {
        box[i][j] = 0;
      } else if (i == key - 1) {
        box[i][j] = 0;
      }
      else {
        box[i][j] = encrypt[counter];
        counter++;
      }
    }
  }

  printf("strlen: %ld\n", strlen(encrypt));
  printf("key: %d\n", key);
  printf("e: %s\n", encrypt);
  return 0;
}
