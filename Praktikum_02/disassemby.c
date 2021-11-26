void Light(char* string) {
  char answer[] = "I'm Good At Everything, Except The Things I Can't Do.";

  if (strings_not_equal(answer, string)) {
    illegal_move();
  }
}

void Sugar_Honeycombs(char* string) {
  int arr[] = read_six_numbers(string);

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

void Marbles(char* string) {
  int var1, var2;
  int val = sscanf(string, "%d %d", &var1, &var2);

  if (val != 2 || (unsigned)var1 > 0xe) {
    illegal_move();
  }

  int res = func4(var1, 0, 0xe);

  if (res != 0xd && var2 != 0xd) {
    illegal_move();
  }
}

int func4(int a, int b, int c) {
  int var = (c - b) >> 1;

  if (var == a) {
    return var;
  } else if (var > a) {
    return func(a, b, var) + var;
  } else {
    return func(a, var, c) + var;
  }
}
