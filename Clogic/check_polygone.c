/*Q7. Problem: Given the length of four sides of a figure, determine whether they can be used to create a polygon and determine if that polygon
is a square. 
A polygon can be created if no single side is greater than the sum of the other three sides. Display a ONE when the status (for polygon or square) is confirmed and ZERO when the status cannot be confirmed.
Example Execution #1:
Enter the length of the four sides: 4 3 2 9
Length of sides: 4, 3, 2, 9
Polygon status: 1
Square status: 0
Example Execution #2:
Enter the length of the four sides: 5 5 5 5
Length of sides: 5, 5, 5, 5
Polygon status: 1
Square status: 1
Example Execution #3:
Enter the length of the four sides: 84 25 20 15
Length of sides: 84, 25, 20, 15
Polygon status: 0
Square status: 0*/

//#include<stdio.h>
//int main()
//{
//	int s1,s2,s3,s4;
//	printf("\n please enter 4 sides of the polygon=\n");
//	scanf("%d%d%d%d", &s1,&s2,&s3,&s4);
//	printf("\n Length of the sides:\t%d\t%d\t%d\t%d\t",s1,s2,s3,s4);
//	if(s1>(s2+s3+s4)||s2>(s1+s3+s4)||s3>(s1+s2+s4)||s4>(s1+s2+s3))
//		printf("\n Polygon status: 0\n");
//	else
//		printf("\n Polygon status:1\n");
//
//	if(s1==s2&&s1==s3&&s1==s4)
//		printf("\nSquare status:1\n");
//	else
//		printf("\n Squarestatus:0\n");
//	return 0;
//}