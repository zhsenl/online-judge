//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//int lower[4];
//int upper[4];
//int rate[4];
//
//void cal(int weight){
//    int price = (1 << 30);
//    int added = 0;
//    for(int i = 0; i < 4; i++){
//        if(lower[i] <= weight && weight <= upper[i]){
//            if(weight * rate[i] < price){
//                price =  weight * rate[i];
//                added = 0;
//            }
//        }
//        if(weight < lower[i]){
//            if(lower[i] * rate[i] < price){
//                price = lower[i] * rate[i];
//                added = lower[i] - weight;
//            }
//        }
//    }
//    cout << "Weight (" << weight << ") has best price $" << price << " (add "<< added <<" pounds)" << endl;
//}
//
//bool init(){
//
//    lower[0] = 0;
//    if((scanf("%d", &upper[0])) != EOF){
//        cin >> rate[0];
//        lower[1] = upper[0] + 1;
//        cin >> upper[1] >> rate[1];
//        lower[2] = upper[1] + 1;
//        cin >> upper[2] >> rate[2];
//        lower[3] = upper[2] + 1;
//        upper[3] = 10000;
//        cin >> rate[3];
//        return true;
//    }
//    return false;
//
//}
//
//int main(){
//    /*freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);*/
//    while(init()){
//        static int id = 1;
//        int n;
//        cout << "Set number " << id++ << ":" << endl;
//        while((scanf("%d",&n)) && n != 0){
//            cal(n) ;
//        }
//        cout << endl;
//    }
//    //system("pause");
//}