## vscode extentions
- C/C++
- CodeLLDB

## Memo
C(Udemy)

### basic
32bits —> 4bytes(8 * 4)
64bits —> 8bytes

### address treatment
*value = アドレス(int func(const char *value))
*value = 実際の値(destructuring)
value = アドレス(plain)


### C’s Benefits
Fast and effecient
Portable
Function rich and libraries
Modularity
Easy to extend
Variety of data types and porwerful operators

### .vscode setting
cpp_properties.json —> define the compiler
tasks.json —> define how to built
launch.json —> specify how to debug


### Data type
int  <— contain integer
float <— contain decimal number(4bytes) & have to append 「f」to the end of the number(12.5f)
double <— container larger decimal number than float(8bytes)
_Bool <— true(=1) or false(=0) & just store the value 0 or 1
bool <— able to use with 「#include <stdbool.h>」
enum <— declear to be of the type
——————————————————————————————
enum month {Jan, Feb, Mar……}
enum month myMonth
myMonth = Feb (will be 1)
enum direction {up, down=10, left……}
enum direction myDirection
myDirection = down (will be 10)
myDirection = left(will be 11 which is continued with 10)
——————————————————————————————
char <— contains single character
—————————
‘’ <— character
   <— variable
“” <— string
—————————
short int <— used for short 
long int <— used for long constant & have to append 「l」to the end of the number(12.5e+7l)
unsigned int <— means positive number
signed int <— means positive and negative


### Format specifier
%i —> int
%f —> float
%e/%g —> double
%c —> char
%i —> bool

%s —> means string
%d —> means int(I think this is better than %i)
%lf —> means double (I think this is better than %e/%g)
& —> means address
%u —> use with sizeof
%p —> means pointer


### Bitwise operators
   result = a & b; // 0000 1100 - 8+4=12
  0011 1100
  0000 1101
  ---------
  0000 1100

  result = a | b; // 0011 1101 - 32+16+8+4+1=61
  0011 1100
  0000 1101
  ---------
  0011 1101

  result = a ^ b; // 0011 0001 - 32+16+1=49
  0011 1100
  0000 1101
  ---------
  0011 0001

  result = ~a; // 1100 0011 - -32-16-8-4-1=-61
  1100 0011 -1 (reversed 0=true 1=false)

  result = a << 2; // 1111 0000 - 128+64+32+16=240
  1111 0000 (move left 2)

  result = a << 4; // 0011 1100 0000 - 492+246+128+64=960
  0011 1100 0000 (move left 4)

  result = a >> 2; // 0000 1111 - 8+4+2+1=15
  0000 1111 (move right 2)

  result = a >> 4; // 0000 0011 - 2+1=3
  0000 0011 (move right 4 & drop off overhanged numbers)


### Size of data (m1)
データタイプ			メモリサイズ
———————————————————————————————————————
char 		—> 		1 bytes
short  		—> 		2 bytes
int  		—> 		4 bytes
float 		—> 		4 bytes
double  	—> 		8 bytes
long  		—> 		8 bytes
long long  	—> 		8 bytes
long double  	—> 		8 bytes


### Array
long numbers[10] —> contains 10 elemets
long numbers[2][3] = {{10, 20, 30}, {11, 21, 31}}


### String
char myString[20] —> contain 19 words because of \0
char word[10] = “Hello!” —> empty parts are allocated empty
char word[] = “Hello!” —> automatic sizing
I can’t use == to compare strings


### Constant
#define TAXRATE 0.015
#define CHARECTER “naya”
or
const int MONTH=12
I can use define anywhere because preprocessor doesn’t have a scope 


### Character strings
strchr / strstr / strtok returns address

 □ □ □ □ □ □ □ <—  □ means an address
 T   h  i   s        i   s 


### const pointer
able to change the address(this means the value pointed can’t change)

long value = 9999L;
const long *pvalue = &value;
long number = 8888L;
pvalue = &number;

(if I put the astarisc before const, I can’t replace address, But able to change the value)
int *const pcount = &value;
*pcount = 345

(can’t change anything)
const int *const pcount = &value;


### pointer array
valuesPtr = values
means
valuesPtr = &values[0]


### array loop
Section12 - 98 & 99
values[10] = 27;
*(valuesPtr + 10); 「= 27」
or 
valuesPtr += 10; 「= 27」

values[0]	  values[1]	  values[2]
     □ 			□ 		□ 
  ptr=1		     ptr=2	     ptr=3


### malloc, calloc, realloc
malloc return address <— allocate memory without initializing
int *pNumber = (*int)malloc(25*sizeof(int)); <— memory for 25 ints
[finish pNumbers role]
free(pNumber);
pNumber=NULL; <— should be null because there is no memory allocated for

calloc return address <— allocate memory with initializing
int *pNumber = (*int)calloc(75, sizeof(int)); 	first arg is number of data items, second arg is size of each data

realloc return address	<— expand the memory
str = (char*) malloc(8);
strcpy(str, “”jason”);
str = (char*)realloc(str, 15);
strcat(stc, “.com”).\;

malloc [0]:0xcdcdcdcd, [1]:0xcdcdcdcd, [2]:0xcdcdcdcd
calloc [0]:0x00000000, [1]:0x00000000, [2]:0x00000000


### structure
[when I use a structure many times]
struct data
{
	int month = 5; <— able to assign initial value
	int date;
	int year;
} today;	<— able to declare the vatiable 

[when I use a structure one time]
struct <— no name
{
	int month;
	int date;
	int year;
} today;

[when initialize the structure]
data tommorow = {6, 1, 2010}
or
data tommorow = {.month = 6, .day = 1, .year = 2010}

[when specify values]
today = (struct date) {6, 1, 2010}
or
today = (struct date) {.month = 6, .day = 1, .year = 2010}


### structure with pointer
if ((*datePtr).month == 12)
=
if (dataPrt -> month == 12)


### Accessing file
They just look for files in same directory
・file = fopen( text.txt, ‘w’ ) 
“w” —> write / create
“a” —> add / create (can’t update, just append)
“r” —> read only

・file = rename( old-file-name, new-file-name ) 

・fclose(file)
    file = NULL;

 ・remove(“text.txt”)


### Reference
注意: Macのターミナル上で実行できるgccは名前こそgccですが，
裏側ではApple ClangというLLVMプロジェクトのCコンパイラであるLLVM Clangを用いているため，
デバッグする際には，GDBではなくLLDBを使います.
