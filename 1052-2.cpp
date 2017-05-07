#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string hands, eyes, mouths;
    vector<string> hands_v(1), eyes_v(1), mouths_v(1); //先放一个占位置
    //input hands
    int i = 0;
    getline(cin, hands);
    int end = hands.find(']', i);
    while(end != -1){
        int start = hands.find('[', i);
        hands_v.push_back(hands.substr(start + 1, end - start - 1));
        i = end + 1;
        end = hands.find(']', i);
    }
    cin.sync();
    cin.clear();
    //input eyes
    i = 0;
    getline(cin, eyes);
    end = eyes.find(']', i);
    while(end != -1){
        int start = eyes.find('[', i);
        eyes_v.push_back(eyes.substr(start + 1, end - start - 1));
        i = end + 1;
        end = eyes.find(']', i);
    }
    cin.sync();
    cin.clear();
    //input mouths
    i = 0;
    getline(cin, mouths);
    end = mouths.find(']', i);
    while(end != -1){
        int start = mouths.find('[', i);
        mouths_v.push_back(mouths.substr(start + 1, end - start - 1));
        i = end + 1;
        end = mouths.find(']', i);
    }
    cin.sync();
    cin.clear();
    int n;
    scanf("%d", &n);
    int tmp;
    for(int j = 0; j < n; ++j){
        string result = "";
        //左手
        scanf("%d", &tmp);
        if(tmp > 0 && tmp < hands_v.size()){
            result += hands_v[tmp];
        }
        else{
            printf("Are you kidding me? @\\/@\n");
            continue;
        }
        //左眼
        scanf("%d", &tmp);
        if(tmp > 0 && tmp < eyes_v.size()){
            result += ("(" + eyes_v[tmp]);
        }
        else{
            printf("Are you kidding me? @\\/@\n");
            continue;
        }
        //口
        scanf("%d", &tmp);
        if(tmp > 0 && tmp < mouths_v.size()){
            result += mouths_v[tmp];
        }
        else{
            printf("Are you kidding me? @\\/@\n");
            continue;
        }
        //右眼
        scanf("%d", &tmp);
        if(tmp > 0 && tmp < eyes_v.size()){
            result += (eyes_v[tmp] + ")");
        }
        else{
            printf("Are you kidding me? @\\/@\n");
            continue;
        }
        //右手
        scanf("%d", &tmp);
        if(tmp > 0 && tmp < hands_v.size()){
            result += hands_v[tmp];
        }
        else{
            printf("Are you kidding me? @\\/@\n");
            continue;
        }
        cout << result << endl;
    }
    return 0;
}
