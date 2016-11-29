/* bill.c */
#include <curses.h>
#include "includes/bill.h"
#include "includes/larncons.h"
#include "includes/larndata.h"
#include "includes/larnfunc.h"
#include "includes/help.h"
#include "includes/io.h"

static int letter1 (int);
static int letter2 (void);
static int letter3 (void);
static int letter4 (void);
static int letter5 (void);
static int letter6 (void);




/*
*  function to create the tax bill for the user
*/
static int
letter1 (int gold)
{
  resetscroll ();
  screen_clear();

  lstandout ("From:");
  printw("the LRS (Larn Revenue Service)");
  lstandout ("\nSubject:");
  printw("undeclared income\n");

  printw ("\n   We heard you survived the caverns of Larn.  Let me be the");
  printw
    ("\nfirst to congratulate you on your success.  It is quite a feat.");
  printw ("\nIt must also have been very profitable for you.");
  printw ("\n\n   The Dungeon Master has informed us that you brought");

  lprintf ("\n%d gold pieces back with you from your journey.  As the", gold);

  printw
    ("\ncounty of Larn is in dire need of funds, we have spared no time");
  lprintf ("\nin preparing your tax bill.  You owe %d gold pieces as",
	   gold * TAXRATE);

  printw ("\nof this notice, and is due within 5 days.  Failure to pay will");
  printw ("\nmean penalties.  Once again, congratulations, We look forward");
  printw ("\nto your future successful expeditions.\n");

  retcont ();

  return (1);
}



static int
letter2 (void)
{
  resetscroll ();
  screen_clear();

  lstandout ("From:");
  printw ("  His Majesty King Wilfred of Larndom\n");
  lstandout ("\nSubject:");
  printw ("  a noble deed\n");

  printw ("\n   I have heard of your magnificent feat, and I, King Wilfred,");
  printw
    ("\nforthwith declare today to be a national holiday.  Furthermore,");
  printw ("\nhence three days, Ye be invited to the castle to receive the");
  printw
    ("\nhonour of Knight of the realm.  Upon thy name shall it be written. . .");
  printw ("\nBravery and courage be yours.");
  printw ("\nMay you live in happiness forevermore . . .\n");

  retcont ();

  return (1);
}



static int
letter3 (void)
{
  resetscroll ();
  screen_clear();

  lstandout ("From:");
  printw ("  Count Endelford\n");
  lstandout ("\nSubject:");
  printw ("  You Bastard!\n");

  printw ("\n   I heard (from sources) of your journey.  Congratulations!");
  printw ("\nYou Bastard!  With several attempts I have yet to endure the");
  printw (" caves,\nand you, a nobody, makes the journey!  From this time");
  printw (" onward, bewarned\nupon our meeting you shall pay the price!\n");

  retcont ();

  return (1);
}



static int
letter4 (void)
{
  resetscroll ();
  screen_clear();

  lstandout ("From:");
  printw ("  Mainair, Duke of Larnty\n");
  lstandout ("\nSubject:");
  printw ("  High Praise\n");

  printw
    ("\n   With a certainty a hero I declare to be amongst us!  A nod of");
  printw ("\nfavour I send to thee.  Me thinks Count Endelford this day of");
  printw ("\nright breath'eth fire as of dragon of whom ye are slayer.  I");
  printw ("\nyearn to behold his anger and jealously.  Should ye choose to");
  printw ("\nunleash some of thy wealth upon those who be unfortunate, I,");
  printw ("\nDuke Mainair, Shall equal thy gift also.\n");

  retcont ();

  return (1);
}



static int
letter5 (void)
{
  resetscroll ();
  screen_clear();

  lstandout ("From:");
  printw ("  St. Mary's Children's Home\n");
  lstandout ("\nSubject:");
  printw ("  these poor children\n");

  printw ("\n   News of your great conquests has spread to all of Larndom.");
  printw ("\nMight I have a moment of a great man's time.  We here at St.");
  printw ("\nMary's Children's Home are very poor, and many children are");
  printw ("\nstarving.  Disease is widespread and very often fatal without");
  printw
    ("\ngood food.  Could you possibly find it in your heart to help us");
  printw ("\nin our plight?  Whatever you could give will help much.");
  printw ("\n(your gift is tax deductible)\n");

  retcont ();

  return (1);
}



static int
letter6 (void)
{
  resetscroll ();
  screen_clear();

  lstandout ("From:");
  printw ("  The National Cancer Society of Larn\n");
  lstandout ("\nSubject:");
  printw ("  hope\n");

  printw
    ("\nCongratulations on your successful expedition.  We are sure much");
  printw
    ("\ncourage and determination were needed on your quest.  There are");
  printw ("\nmany though, that could never hope to undertake such a journey");
  printw ("\ndue to an enfeebling disease -- cancer.  We at the National");
  printw ("\nCancer Society of Larn wish to appeal to your philanthropy in");
  printw ("\norder to save many good people -- possibly even yourself a few");
  printw
    ("\nyears from now.  Much work needs to be done in researching this");
  printw
    ("\ndreaded disease, and you can help today.  Could you please see it");
  printw ("\nin your heart to give generously?  Your continued good health");
  printw ("\ncan be your everlasting reward.\n");

  retcont ();

  return (1);
}


/* 
* Page the mail to the terminal    - dgk
*/
void
readmail (int gold)
{
  letter1 (gold);
  letter2 ();
  letter3 ();
  letter4 ();
  letter5 ();
  letter6 ();
}