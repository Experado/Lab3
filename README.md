# Lab3
Sort的複雜度是n*logn
而 insertion_Sort的複雜度是n^2
也就是說 可以預期後者所花費的時間為前者的n/logn倍

size is :1000
sorting...
sort():0seconds
v1/v2 are different
insertion_sorting...
insertion_sort():0.01seconds
v1/v2 are the same
預期:333倍
實際:無限倍??

size is :10000
sorting...
sort():0.01seconds
v1/v2 are different
insertion_sorting...
insertion_sort():1.28seconds
v1/v2 are the same
預期:2500倍
實際:128倍

size is :100000
sorting...
sort():0.05seconds
v1/v2 are different
insertion_sorting...
insertion_sort():128.21seconds
v1/v2 are the same
預期:20000倍
實際:2560倍
size is :1000000
sorting...
sort():0.51seconds
v1/v2 are different
insertion_sorting...
預期:16667倍
實際:未知
