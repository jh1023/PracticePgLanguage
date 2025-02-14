#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    map<char, int> m1;

	for (int i = 0; i < keymap.size(); i++) {
		for (int j = 0; j < keymap[i].size(); j++) {
			if (m1.find(keymap[i][j]) == m1.end()) {
				m1.insert(pair<char, int>(keymap[i][j], j+1));
			}
			else {
				if (m1[keymap[i][j]] > j + 1) {
					m1[keymap[i][j]] = j + 1;//더작은 값으로 바꾼다
				}
			}
		}
	}

	int cnt;

	for (int i = 0; i < targets.size(); i++) {
		cnt = 0;
		for (int j = 0; j < targets[i].size(); j++) {
			if (m1.find(targets[i][j]) == m1.end()) {
				cnt = -1;
				break;
			}
			auto temp = targets[i][j];
			cnt += m1[temp];
		}
		answer.push_back(cnt);
	}

    
    return answer;
}