
	/*	S T R  C A S E
	 * Display a strign in each of several presentation
	 * formats :
	 *	- all uppercase
	 *	- all lower-case
	 *	- initial capital letter
	 */

	 #include<stdio.h>
	 #include<ctype.h>

	 #define MAXSTRING 20

	 char *Stringupper( char * ) ;
	 char *Stringlower( char * ) ;
	 char *Stringcapitalize( char * ) ;

	 int main(void)
	 {
		char buffer[MAXSTRING+1] ;

		printf("Type a string(%d characters max.) + Enter : ", MAXSTRING ) ;
		gets(buffer) ;
		printf("%s\n", Stringupper(buffer) ) ;
		printf("%s\n", Stringlower(buffer) ) ;
		printf("%s\n", Stringcapitalize(buffer) ) ;
		return (0) ;
	 }

	 char *Stringupper( char *string )
	 {
		char *cp ;

		cp = string ;
		while( *cp != '\0' )
		{
			*cp = toupper(*cp) ;
			++cp ;
		}
		return ( string ) ;
	 }

	 char *Stringlower( char *string )
	 {
		char *cp ;

		cp = string ;
		while( *cp != '\0' )
		{
			*cp = tolower(*cp) ;
			++cp ;
		}
		return ( string ) ;
	 }

	 char *Stringcapitalize( char *string )
	 {
		char *cp ;

		cp = string ;
		*cp = toupper(*cp) ;
		++cp ;
		while( *cp != '\0' )
		{
			*cp = tolower(*cp) ;
			++cp ;
		}
		return ( string ) ;
	 }



