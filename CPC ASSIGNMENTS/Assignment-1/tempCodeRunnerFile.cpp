void combination(string& digit ,vector<string>& keypad , vector<string>& ans ,string& temp ,int ind){
//     if(ind==digit.size()){
//         ans.push_back(temp);
//     }
//     string value = keypad[digit[ind]-'0'];
//     for(int i=0;i<value.size();i++){
//         temp.push_back(value[i]);
//         combination(digit,keypad,ans,temp,ind+1);
//         temp.pop_back();
//     }
// }