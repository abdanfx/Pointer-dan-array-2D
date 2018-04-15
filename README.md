# Pointer-dan-array-2D
Contoh program sederhana C++. Mengakses nilai variabel array 2D menggunakan Pointer.
Pada contoh ini, nilai array sudah ditentukan pada saat pendeklarasian variabel matrix[3][4].
Sebelumnya saya pribadi sempat bingung akan hal ini.
Syntax yang biasa digunakan untuk menunjuk sebuah variabel ke pointer adalah :

int var;
int *Pointer;
Pointer = &var;

Syntax yang saya gunakan sebelumnya pada matrix[3][4].

int matrix[3][4] = {.........};
int *Ptr_matrix;
Ptr_matrix = &matrix[3][4];

Dan pada saat code compile, hasilnya Error.
Saya sudah coba berbagai cara untuk mengatasi masalah ini sendiri seperti menambahkan syntax : *(matrix)[*xpointer][*ypointer]; //
pada bagian cout.
Tetapi hasilnya selalu error dan saya tidak menemukan syntax yang tepat.
Akhirnya saya memutuskan untuk meminta bantuan melalui internet. Referensi :

[percakapan forum bahasa Inggris]
http://www.cplusplus.com/forum/beginner/114553/

Dan syntax yang benar untuk menunjukkan variabel array 2D ke pointer adalah :

int matrix[3][4] = { ......... };
int *(Ptr_matrix)[3][4];
Ptr_matrix = &matrix;

kode saya upload di file array dan pointer.cpp
