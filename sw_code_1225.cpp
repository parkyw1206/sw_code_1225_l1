#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T,temp, sub;
    vector<int> answer;

    T = 10;

    for(test_case = 1; test_case <= T; ++test_case)
	{
		cin >> temp;
		answer.clear();
        sub = 1;
        for(int i = 0 ; i < 8 ; i++){
        	cin >> temp;
            answer.push_back(temp);
        }
        while(answer[0] - sub> 0){
            answer[0] -= sub;
	        rotate(answer.begin(),answer.begin() + 1, answer.end());   
            sub++;
           	if(sub == 6) sub = 1;
        }
        
        answer[0] -=sub;
        if(answer[0] < 0 ) answer[0] = 0;
        rotate(answer.begin(),answer.begin() + 1, answer.end());        
        cout << "#" << test_case << " " ;
        for(int i = 0 ; i < 8 ; i++){
        	cout << answer[i] << " ";
        }
        cout << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}