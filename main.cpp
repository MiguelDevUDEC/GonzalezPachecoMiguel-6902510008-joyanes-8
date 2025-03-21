#include <iostream>
#include <map>
using namespace std;


// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
   int student;
   cout << "Enter the student qualification" << endl;
   cin >> student;

   if (student > 100 || student < 0) throw std::invalid_argument("The qualification is invalidate");

   if (student >= 90 ) {
      cout << "Student qualification is: A" << endl;
   }else if (student >= 80) {
      cout << "Student qualification is: B" << endl;
   }else if (student >= 70) {
      cout << "Student qualification is: C" << endl;
   }else if (student == 69) {
      cout << "Student qualification is: D" << endl;
   }else  {
      cout << "Student qualification is: F" << endl;
   }




}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.