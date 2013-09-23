//// next_permutation example
//#include <iostream>     // std::cout
//#include <algorithm>    // std::next_permutation, std::sort
//
//int main () {
//	int myints[] = {1,2,3};
//
//	std::sort (myints,myints+3);
//
//	std::cout << "The 3! possible permutations with 3 elements:\n";
//	/*do {
//		std::cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
//	} while ( std::next_permutation(myints,myints+3) );
//*/
//	std::cout << "before: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
//	std::next_permutation(myints,myints+3);
//	std::cout << "after: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
//	std::next_permutation(myints,myints+3);
//	std::cout << "after2: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
//	system("pause");
//	return 0;
//}