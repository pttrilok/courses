//Ques Link -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/promotion-1/

#include <bits/stdc++.h>
using namespace std;

// Function that returns true if it is
// possible to transport all the boxes
// in the given amount of time
bool isPossible(int box[], int truck[],
				int n, int m, int min_time)
{
	int temp = 0;
	int count = 0;

	while (count < m) {
		for (int j = 0; j < min_time
						&& temp < n
						&& truck[count] >= box[temp];
			j += 2)
			temp++;

		count++;
	}

	// If all the boxes can be
	// transported in the given time
	if (temp == n)
		return true;

	// If all the boxes can't be
	// transported in the given time
	return false;
}

// Function to return the minimum time required
int minTime(int box[], int truck[], int n, int m)
{

	// Sort the two arrays
	sort(box, box + n);
	sort(truck, truck + m);

	int l = 0;
	int h = 2 * n;

	// Stores minimum time in which
	// all the boxes can be transported
	int min_time = 0;

	// Check for the minimum time in which
	// all the boxes can be transported
	while (l <= h) {
		int mid = (l + h) / 2;

		// If it is possible to transport all
		// the boxes in mid amount of time
		if (isPossible(box, truck, n, m, mid)) {
			min_time = mid;
			h = mid - 1;
		}
		else
			l = mid + 1;
	}

	return min_time;
}

// Driver code
int main()
{
    int n, m;
    cin>>n>>m;
    int box[n], truck[m];
    for(int i=0;i<n;i++){
        cin>>box[i];
    }
    for(int i=0;i<m;i++) cin>>truck[i];

	printf("%d", minTime(box, truck, n, m));

	return 0;
}
