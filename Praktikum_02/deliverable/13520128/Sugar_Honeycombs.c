/**
 * Nama   : Bayu Samudra
 * NIM    : 13520128
 */
int* read_six_numbers(char* string);
void illegal_move();

void Sugar_Honeycombs(char* string) {
  int* arr = read_six_numbers(string);

  if (arr[0] == 0 && arr[1] == 1) {
    for (int i = 0; i < 4; i++) {
      if (arr[i] + arr[i + 1] != arr[i + 2]) {
        illegal_move();
      }
    }
  } else {
    illegal_move();
  }
}