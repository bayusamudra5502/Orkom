/**
 * Nama   : Bayu Samudra
 * NIM    : 13520128
 */
void illegal_move();

void Tug_of_War(char* string) {
  int i1, i2, numkey;
  char ch, charkey;

  if (sscanf(string, "%d %c %d", &i1, &ch, &i2) <= 2) {
    illegal_move();
  }

  switch (i1) {
    case 0:
      charkey = 'x';
      numkey = 0xd1;
      break;
    case 1:
      charkey = 'i';
      numkey = 0xe1;
      break;
    case 2:
      charkey = 'i';
      numkey = 0x168;
      break;
    case 3:
      charkey = 'i';
      numkey = 0x209;
      break;
    case 4:
      charkey = 'p';
      numkey = 0x232;
      break;
    case 5:
      charkey = 'e';
      numkey = 0x3a;
      break;
    case 6:
      charkey = 'b';
      numkey = 0x330;
      break;
    case 7:
      charkey = 'd';
      numkey = 0x35b;
      break;
    default:
      illegal_move();
  }

  if (ch != charkey) {
    illegal_move();
  }

  if (i2 != numkey) {
    illegal_move();
  }
}