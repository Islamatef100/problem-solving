//9A - Die Roll
 #include <iostream>
 #include <string>
 using namespace std;
 int main()
 {
 int x, y;
 cin >> x >> y;
 const string all_probability[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
 int z = max(x, y);
 cout << all_probability[z] << endl;
 return 0;
 }
