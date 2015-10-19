void comb(vector<vector<int> >&v, vector<int> &mv, int n, int k, int cur) {
    if(mv.size() == k) { //终止条件或者收敛条件
        v.push_back(mv);
        return;
    }

    for(int i = cur; i < k; i++) {
        mv.push_back(i);
        comb(v, mv, n, k, cur + 1); //状态扩展
        mv.pop_back();
    }
}