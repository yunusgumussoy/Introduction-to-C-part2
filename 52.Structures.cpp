#include <stdio.h>
#include <string.h>

struct Album
{
	char title[30];
	char artist[30];
	int no_of_tracks;
	int year;
};

int main ()
{
	struct Album album1, album2;
	
	strcpy(album1.title, "Dark Side of the Moon");
	strcpy(album1.artist, "Pink Floyd");
	album1.no_of_tracks=9;
	album1.year=1973;
	
	strcpy(album2.title, "Wish You Were Here");
	strcpy(album2.artist, "Pink Floyd");
	album2.no_of_tracks=5;
	album2.year=1975;
	
	printf("***ALBUM ONE INFORMATION***\n");
	printf("Title: %s\n",album1.title);
	printf("Artist: %s\n",album1.artist);
	printf("Number of Tracks: %d\n",album1.no_of_tracks);
	printf("Year: %d\n",album1.year);
	
	printf("\n***ALBUM TWO INFORMATION***\n");
	printf("Title: %s\n",album2.title);
	printf("Artist: %s\n",album2.artist);
	printf("Number of Tracks: %d\n",album2.no_of_tracks);
	printf("Year: %d\n",album2.year);
	
}
