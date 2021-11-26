/* Praktikum 1 IF2130 - Organisasi dan Arsitektur Komputer
 *             II2130 - Arsitektur dan Sistem Komputer
 *
 * NAMA  : Bayu Samudra
 * NIM   : 13520128
 * KELAS : IF3
 *
 * BACA INSTRUKSI BERIKUT SEBELUM MEMULAI
 *
 * Aturan Coding Soal Integer
 *
 * Ubah statement "return" pada setiap fungsi dengan satu atau
 * lebih baris kode C yang mengimplementasikan fungsi tersebut.
 * Kode harus mengikuti style:
 *
 * int fungsi(arg1, arg2, ...) {
 *     int var1 = Expr1;
 *     ...
 *     int varX = ExprX;
 *
 *     varY = ExprY;
 *     ...
 *     varZ = ExprZ;
 *     return ExprR;
 * }
 *
 * Setiap "Expr" adalah ekspresi HANYA menggunakan:
 * 1. Konstanta integer 0 hingga 255 (0xFF), inklusif. Anda tidak
 *     diperbolehakn untuk menggunakan konstanta besar seperti
 *     0xffffffff.
 * 2. Argumen fungsi dan variabel lokal (tidak ada variabel global).
 * 3. Operasi integer uner ! ~
 * 4. Operasi integer biner & ^ | + << >>
 *
 * Beberapa soal merestriksi jumlah operator. Setiap "Expr" terdiri
 * dari beberapa operator. Anda tidak dibatasi oleh 1 operator per baris.
 *
 * Anda sangat dilarang untuk:
 * 1. Menggunakan control constructs apapun, seperti if, do, while, for,
 *     switch, dll.
 * 2. Menggunakan macro.
 * 3. Membuat fungsi baru di file ini.
 * 4. Memanggil fungsi lain.
 * 5. Menggunakan operasi lain, seperti &&, ||, -, atau ?:
 * 6. Menggunakan bentuk casting apapun.
 * 7. Menggunakan tipe data selain int. Ini berarti Anda tidak boleh
 *     menggunakan array, struct, atau union.
 *
 * Anda dapat berasumsi mesin Anda:
 * 1. Menggunakan 2s complement, representasi bilangan 32-bit.
 * 2. Mengeksekusi right shift secara aritmetik.
 * 3. Memiliki perilaku unpredictable ketika menggeser integer
 *     lebih dari ukuran word.
 *
 * Aturan Coding Soal Float
 *
 * Untuk soal yang membutuhkan operasi floating-point, style koding lebih
 * lenient. Anda diperbolehkan menggunakan ints dan unsigneds.
 * Anda dapat menggunakan arbitrary integer dan konstanta unsigned.
 *
 * Anda sangat dilarang untuk:
 * 1. Menggunakan macro.
 * 2. Membuat fungsi baru di file ini.
 * 3. Memanggil fungsi lain.
 * 4. Menggunakan bentuk casting apapun.
 * 5. Menggunakan tipe data selain int atau unsigned.
 *     Ini berarti Anda tidak dapat menggunakan array, struct, ataupun union.
 * 6. Menggunakan floating point apapun untuk tipe data, operasi,
 *     atau konstanta.
 *
 * Notes:
 * Setiap fungsi memiliki jumlah operator maximum (! ~ & ^ | + << >>)
 * yang boleh digunakan untuk mengimplementasikan fungsi.
 * NB: '=' tidak dihitung. Anda dapat menggunakan ini sebanyak
 * apapun tanpa penalti.
 */
/*
 * amber - ~(x^y) hanya dengan menggunakan ~ and &
 *   Contoh: amber(4, 5) = -2
 *   Legal ops: ~ &
 *   Max ops: 7
 *   Rating: 1
 */
int amber(int x, int y)
{
    return ~ (~x & y) & ~( x & ~y);
}
/* 
 * kaeya - Berikan nilai terkecil dalam two's complement
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int kaeya(void) {
  return 1 << 31;
}
/* 
 * dvalin - berikan -x tanpa menggunakan - dan ~
 *   contoh: dvalin(1) = -1.
 *   Legal ops: ! & ^ + | << >>
 *   Max ops: 5
 *   Rating: 2
 */
int dvalin(int x) {
  return (((1 << 31) >> 31) ^ x) + 1;
}
/* 
 * handbook - Mengembalikan byte ke-n dari word x
 *   Byte diurutkan dari 0 (LSB) ke 3 (MSB)
 *   Contoh: handbook(0x12345678,1) = 0x56
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 6
 *   Rating: 2
 */
int handbook(int x, int n) {
  return (x >> (n << 3)) & 255;
}
/* 
 * medaka - Mengembalikan nilai mutlak dari x
 *   Contoh: medaka(-1) = 1.
 *   Asumsi: -TMax <= x <= TMax
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 4
 */
int medaka(int x) {
  return ((x >> 31) ^ x) + ((x >> 31) & 1);
}
/*
 * sayu - balik urutan byte pada x
 *   Contoh: sayu(0x01020304) = 0x04030201
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 25
 *   Rating: 3
 */
int sayu(int x) {
  return (x << 24) | ((x << 8) & (255 << 16)) | ((x >> 8) & (255 << 8)) | ((x >> 24) & 255);
}
/* 
 * kujou - geser x kekanan dengan aturan logical shift
 *   asumsikan 0 <= n <= 31
 *   contoh: kujou(0x87654321,4) = 0x08765432
 *   Legal ops: ~ & ^ | + << >>
 *   Max ops: 20
 *   Rating: 3
 */
int kujou(int x, int n) {
  return ((~((!!n << 31) >> (((~(1)) + 1) + n))) & (x >> n));
}
/*
 * azhdaha - kalikan dengan 3, Jadikan ke Tmin atau Tmax jika terjadi overflow
 *  Examples: azhdaha(0x10000000) = 0x30000000
 *            azhdaha(0x30000000) = 0x7FFFFFFF (Jadikan TMax)
 *            azhdaha(0x70000000) = 0x7FFFFFFF (Jadikan TMax)
 *            azhdaha(0xD0000000) = 0x80000000 (Jadikan TMin)
 *            azhdaha(0xA0000000) = 0x80000000 (Jadikan TMin)
 *  Legal ops: ! ~ & ^ | + << >>
 *  Max ops: 25
 *  Rating: 3
 */
int azhdaha(int x) {
    return ((x << 1) + x);
}
/* 
 * abyss - Hitung 2*f untuk suatu bilangan floating point f
 *   argumen f dan hasil merupakan representasi bit dari bilangan desimal
 *   dalam bentuk single-precision floating point
 *   jika f NaN, kembalikan f.
 *   Legal ops: Semua operasi integer/unsigned termasuk ||, &&. juga if, while
 *   Max ops: 30
 *   Rating: 4
 */
unsigned abyss(unsigned uf) {
  unsigned s;
  unsigned e;
  unsigned f;
  unsigned haha;
  unsigned res;

  haha = ((1 << 8) - 1) << 23;
  s = (uf & (1 << 31));
  e = haha & uf;
  f = ((1 << 23) - 1) & uf;

  res = uf;

  if(!e){
	res = s | (f << 1);
  }else if(haha != e){
    res = s | (e+ (1 << 23)) | f;
    if(e + (1 << 23) == haha){
	  res = res ^ f;
	}
  }

  return res;
}

/*
 * mondstadt - jika jumlah 1 dalam representasi bit ganjil, kembalikan 1
 *   Contoh: mondstadt(5) = 0, mondstadt(7) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 4
 */
int mondstadt(int x)
{
  int a,b,c,d;
  
  a = (x ^ (x >> 16));
  b = (a ^ (a >> 8));
  c = (b ^ (b >> 4));
  d = (c ^ (c >> 2));
  
  return (d ^ (d >> 1)) & 1;
}

