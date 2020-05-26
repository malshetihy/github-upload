
	/* states.h : Header file for the STATES program
	 *
	 * Data structures declaration and initialization :
	 *
	 * initialize the states data in the array of data strctures .This
	 * list includes only those states the auther has called "home" . if
	 * your state is not included , simply add the required data .
	 */

	 #include<stdio.h>
	 #include<stdlib.h>
	 #include<string.h>
	// #include<states.h>

	 #define NSTATES sizeof States / sizeof( struct state_st )
	 #define SCBUFSIZE 2

	 struct state_st
	 {
		char *code , *name , *capital ;
		unsigned population , area ;
	 } States[] = {
			{ "CO" , "Colorado" , "Denver" , 2208 , 104247 } ,
			{ "MA" , "Massachausetts" , "Boston" , 5689 , 8257 } ,
			{ "MD" , "Maryland" , "Annapolis" , 3923 , 10577 } ,
			{ "RI" , "Rhode island" , "Providence" , 950 , 1214 }
		      } ;

	 int StateData( char * ) ;

	 int main(void)
	 {
		char statecode[ SCBUFSIZE + 1 ] ;

		printf("State code( CO , MA , etc.) : ") ;
		scanf("%2s", statecode ) ;
		if( StateData( statecode) )
		{
			fprintf( stderr , "%s : State not found\n", statecode ) ;
			exit(1) ;
		}
		return(0) ;
	 }

	 int StateData( char *code )
	 {
		int rc = 0 , index ;

		for( index = 0 ; index < NSTATES ; ++index )
			if( strcmp( strupr( code ) , States[index].code ) == 0 )
				break ;
		if( index == NSTATES )
			return( ++rc ) ;
		printf("State name : %s\n", States[index].name ) ;
		printf("Capital city : %s\n", States[index].capital ) ;
		printf("Population : %u (thousands)\n", States[index].population ) ;
		printf("Land area : %u sq.miles\n", States[index].area ) ;
		return (0) ;
	 }

