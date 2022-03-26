// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
int res = 0;
for (int i = 0; i < len;i++) {
for (int j = i + 1; j < len; j++) {
if (arr[i] + arr[j] == value) {
res++;
}
}
}
return res;
}
int countPairs2(int *arr, int len, int value) {
int res = 0;
for (int i = 0; i < len; i++) {
if (arr[i] <= value) {
for (int j = i + 1; j < len; j++) {
if (arr[i] + arr[j] == value) {
res++;
}
}
}
}
return res;
}
int countPairs3(int *arr, int len, int value) {
int res = 0;
for (int i = 0; i < len; i++) {
int  l = i + 1, r = len;
while (l < r) {
int ser = (l + r) / 2;
if (arr[ser] < (value - arr[i])) {
l = ser + 1;
}else {
r = ser;
}
}
while (arr[l] + arr[i] == value) {
res++;
l ++;
}
}
return res;
}
