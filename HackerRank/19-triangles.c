/*
Problem: Small Triangles, Large Triangles
Link: https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem?isFullScreen=true
Description: You are given n triangles, specifically, their sides a_i, b_i and c_i. Print them in the same style but sorted by their areas from the smallest one to the largest one. It is guaranteed that all the areas are different.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
    
    //dynamically allocating an array storing all the areas
    float *areas = malloc(n * sizeof(float));
    
    //finding area of triangles using heron's formula
    float p_factor, heron_area;
    for(int i=0; i<n; i++) {
        p_factor = (float)(tr[i].a + tr[i].b + tr[i].c)/2;
        heron_area = sqrtf(p_factor * (p_factor - tr[i].a) * (p_factor - tr[i].b) * (p_factor - tr[i].c));
        areas[i] = heron_area;
    }
    
    //bubble sorting both arrays together for final result
    for (int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(areas[j] > areas[j+1]) {
                float temp = areas[j];
                areas[j] = areas[j+1];
                areas[j+1] = temp;
                
                triangle tempTri = tr[j];
                tr[j] = tr[j+1];
                tr[j+1] = tempTri;
            }
        }
    }
    free(areas);
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}