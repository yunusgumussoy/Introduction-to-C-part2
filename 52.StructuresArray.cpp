#include <stdio.h>
#include <string.h>

struct Album
{
	char title[35];
	char artist[35];
	char no_of_tracks[5];
	char year[5];
};

int main ()
{
	struct Album album[2];
	int i,j;
	for(i=0;i<2;i++)
	{
		printf("Enter Title:");
		gets(album[i].title);
		printf("Enter Artist:");
		gets(album[i].artist);
		printf("Enter number of tracks:");
		gets(album[i].no_of_tracks);
		printf("Enter Year:");
		gets(album[i].year);
		printf("\n*********************\n");
	}
	printf("\nDisplaying Information...\n");
	
	for(j=0;j<2;j++)
	{
		printf("Enter Title:");
		puts(album[j].title);
		printf("Enter Artist:");
		puts(album[j].artist);
		printf("Enter number of tracks:");
		puts(album[j].no_of_tracks);
		printf("Enter Year:");
		puts(album[j].year);
		printf("\n*********************\n");
	}
}
