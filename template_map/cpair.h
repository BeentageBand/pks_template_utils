/*=====================================================================================*/
/**
 * cpair.h
 * author : puch
 * date : Oct 22 2015
 *
 * description : Any comments
 *
 */
/*=====================================================================================*/
#if !defined(CPAIR_H_) || defined(OBJECT_TEMPLATE)
#define CPAIR_H_
/*=====================================================================================*
 * Project Includes
 *=====================================================================================*/

/*=====================================================================================* 
 * Standard Includes
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Define Macros
 *=====================================================================================*/
#define Pair_Struct(f,s) _concat(Pair_,_concat(f,_concat(_,s)))

#ifdef __cplusplus
extern "C" {
#endif
/*=====================================================================================* 
 * Exported Type Declarations
 *=====================================================================================*/
typedef Pair_Struct(_g1,_g2)
{
  _concat(_g1,_T) first;
  _concat(_g2,_T) second;
}_concat(Pair_Struct(_g1,_g2),_T);
/*=====================================================================================* 
 * Exported Object Declarations
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Function Prototypes
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Function Like Macros
 *=====================================================================================*/
#ifdef __cplusplus
}
#endif
/*=====================================================================================* 
 * cpair.h
 *=====================================================================================*
 * Log History
 *
 *=====================================================================================*/
#endif /*CPAIR_H_*/
