/**
 * Nama   : Bayu Samudra
 * NIM    : 13520128
 */
unsigned strings_not_equal(char* answer, char* string);
void illegal_move();

void Light(char* string) {
  char answer[] = "I'm Good At Everything, Except The Things I Can't Do.";

  if (strings_not_equal(answer, string)) {
    illegal_move();
  }
}