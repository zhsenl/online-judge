//#include <iostream>
//#include <queue>
//using namespace std;
//
//struct Node{
//	int priority;
//	bool mark;
//};
//
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		int job_num, my_job_index;
//		cin >> job_num >> my_job_index;
//		queue<Node> unsorted;
//		priority_queue<int> sorted;
//		for(int i = 0; i < job_num; i++){
//			int priority;
//			cin >> priority;
//			sorted.push(priority);
//			Node temp;
//			temp.priority = priority;
//			if(i == my_job_index){
//				temp.mark = true;
//			}else{
//				temp.mark = false;
//			}
//			unsorted.push(temp);
//		}
//		int count = 0;
//		while(1){
//			int top_priority = sorted.top();
//			Node current = unsorted.front();
//			if(current.priority == top_priority){
//				count ++;
//				if(current.mark == true){
//					break;
//				}
//				sorted.pop();
//				unsorted.pop();
//			}else{
//				unsorted.pop();
//				unsorted.push(current);
//			}
//		}
//		cout << count << endl;
//	}
//	//system("pause");
//}