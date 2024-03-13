int main() {
  int Age = 30;
  int DogAge = 0;

  int* pInteger = &Age;

  pInteger = &DogAge;

  return 0;
}
