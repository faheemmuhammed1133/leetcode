class Solution {
public:
    int i = 0 ;
    unordered_map<int, std::string> map;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string str = "http://tinyurl.com/";
        map.insert({i,longUrl});
        str = str + to_string(i);
        cout<<str<<" ";
        return str ;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string str = "http://tinyurl.com/";
        string sub = shortUrl.substr(str.length());
        int index = stoi(sub);
        string answer = map[index];
        return answer;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));