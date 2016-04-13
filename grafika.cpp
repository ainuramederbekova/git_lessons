/************************************************************/
/*                     ¹3  Lobarortorduk ish                                             */
/*                        Sharttuu operator                                                  */
/*                           3-variant                                                             */
/************************************************************/
#include<iostream.h>
#include<iomanip.h>
#include<math.h>
main()
{
 double x,y; /*chekittin koordinatalari */
/* koordinattardi kirgizuu */
cout<<"x koordinatin>>";
cin>>x;
cout<<"y koordinatin>>";
cin>>y;
/* kirgizilgen maanilerdi chigaruu */
cout<<"x="<<x<<setw(10)<<" y="<< y<<endl;
/* sharttardi teksheruu */
if((x*x+y*y>-1)&&((x<1)&&(y<=1)&&(x>-1)))
     cout<<" Chekit aimaktin ichinde\endl";
else cout<<" Chekit aimaktin sirtinda\endl";
}