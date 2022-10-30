bool bin_search(int*& a, int& n, int x) {
	bool flag = false;
	int l = 0; 
	int r = n; 
	int mid;

	while ((l < r) && (flag != true)) {
		mid = (l + r) / 2; 

		if (a[mid] == x) return true;
		if (a[mid] > x) r = mid - 1; 
		else l = mid + 1;
	}
	return false;
}