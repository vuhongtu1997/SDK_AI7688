??    J      l  e   ?      P  )   Q  ?   {       $        D  "   ^     ?  ,   ?     ?  %   ?  ,     -   9      g  &   ?     ?     ?     ?     	  )   $	  *   N	     y	     {	  !   ?	     ?	  5   ?	  7   ?	  ?   /
  ?   ?
  ?   ?     c  [   x     ?  q   ?     [     a     g  ?   i     b          ?     ?     ?     ?  !   ?     ?          "     :     U     s  P   ?  )   ?                7  )   P  %   z      ?  ?   ?  	  ?  6   ?     ?  )  ?            W   %  I  }  +   ?  q   ?  >   e  "   ?  -   ?  ?   ?  \  ?  ?   8  ?   ?     h  )   ?     ?  %   ?     ?  )     #   7  $   [  )   ?  3   ?  &   ?  %        +     G      c      ?  .   ?  /   ?                     8  J   O  4   ?  d  ?  
  4  ?   ?      ?   n   ?      X!  ?   o!     ?!     ?!     "    "  #   #  %   *#     P#  $   h#     ?#     ?#  +   ?#     ?#  $   ?#     $     $  !   <$     ^$  L   o$  *   ?$  &   ?$     %     '%  C   F%  "   ?%     ?%  ?   ?%    ?&  <   ?'     ?'  (  (      .)     O)  p   X)  `  ?)  .   *+  z   Y+  \   ?+  2   1,  :   d,  ?   ?,                         $             D              ,       B      !       *   (   >      4   
           /   8   2      A   C           9   @      <   "   )       ;   #   ?              H             :   G   3   -                  +   	   E   .          5          =      I   1          J          6   F                       '         0   %       7                 &        
Report bugs to <bug-findutils@gnu.org>.
 
default path is the current directory; default expression is -print
expression may consist of: operators, options, tests, and actions:
 %s terminated by signal %d %s: exited with status 255; aborting %s: illegal option -- %c
 %s: invalid number for -%c option
 %s: invalid option -- %c
 %s: option `%c%s' doesn't allow an argument
 %s: option `%s' is ambiguous
 %s: option `%s' requires an argument
 %s: option `--%s' doesn't allow an argument
 %s: option `-W %s' doesn't allow an argument
 %s: option `-W %s' is ambiguous
 %s: option requires an argument -- %c
 %s: stopped by signal %d %s: terminated by signal %d %s: unrecognized option `%c%s'
 %s: unrecognized option `--%s'
 %s: value for -%c option should be < %ld
 %s: value for -%c option should be >= %ld
 ' < %s ... %s > ?  Database %s is in the %s format.
 Features enabled:  Maximum length of command we could actually use: %ld
 Only one instance of {} is supported with -exec%s ... + Report (and track progress on fixing) bugs via the findutils bug-reporting
page at http://savannah.gnu.org/ or, if you have no web access, by sending
email to <bug-findutils@gnu.org>. The current directory is included in the PATH environment variable, which is insecure in combination with the %s action of find.  Please remove the current directory from your $PATH (that is, remove "." or leading or trailing colons) The environment variable FIND_BLOCK_SIZE is not supported, the only thing that affects the block size is the POSIXLY_CORRECT environment variable Unknown system error Usage: %s [--version | --help]
or     %s most_common_bigrams < file-list > locate-database
 Valid arguments are: You may not use {} within the utility name for -execdir and -okdir, because this is a potential security problem. ^[nN] ^[yY] ` actions: -delete -print0 -printf FORMAT -fprintf FILE FORMAT -print 
      -fprint0 FILE -fprint FILE -ls -fls FILE -prune -quit
      -exec COMMAND ; -exec COMMAND {} + -ok COMMAND ;
      -execdir COMMAND ; -execdir COMMAND {} + -okdir COMMAND ;
 ambiguous argument %s for %s argument line too long cannot fork cannot get current directory days double environment is too large for exec error waiting for %s error waiting for child process invalid -size type `%c' invalid argument %s for %s invalid argument `%s' to `%s' invalid expression invalid expression; I was expecting to find a ')' somewhere but did not see one. invalid expression; you have too many ')' invalid null argument to -size invalid predicate `%s' missing argument to `%s' oops -- invalid default insertion of and! oops -- invalid expression type (%d)! oops -- invalid expression type! operators (decreasing precedence; -and is implicit where no others are given):
      ( EXPR )   ! EXPR   -not EXPR   EXPR1 -a EXPR2   EXPR1 -and EXPR2
      EXPR1 -o EXPR2   EXPR1 -or EXPR2   EXPR1 , EXPR2
 positional options (always true): -daystart -follow -regextype

normal options (always true, specified before other expressions):
      -depth --help -maxdepth LEVELS -mindepth LEVELS -mount -noleaf
      --version -xdev -ignore_readdir_race -noignore_readdir_race
 sanity check of the fnmatch() library function failed. single tests (N can be +N or -N or N): -amin N -anewer FILE -atime N -cmin N
      -cnewer FILE -ctime N -empty -false -fstype TYPE -gid N -group NAME
      -ilname PATTERN -iname PATTERN -inum N -iwholename PATTERN -iregex PATTERN
      -links N -lname PATTERN -mmin N -mtime N -name PATTERN -newer FILE unexpected extra predicate unknown unmatched %s quote; by default quotes are special to xargs unless you use the -0 option warning: Unix filenames usually don't contain slashes (though pathnames do).  That means that '%s %s' will probably evaluate to false all the time on this system.  You might find the '-wholename' test more useful, or perhaps '-samefile'.  Alternatively, if you are using GNU grep, you could use 'find ... -print0 | grep -FzZ %s'. warning: not following the symbolic link %s warning: the -d option is deprecated; please use -depth instead, because the latter is a POSIX-compliant feature. warning: the locate database can only be read from stdin once. warning: unrecognized escape `\%c' warning: unrecognized format directive `%%%c' warning: you have specified the %s option after a non-option argument %s, but options are not positional (%s affects tests specified before it as well as those specified after it).  Please specify options before other arguments.
 Project-Id-Version: findutils 4.2.24
Report-Msgid-Bugs-To: bug-findutils@gnu.org
POT-Creation-Date: 2009-05-12 09:47+0100
PO-Revision-Date: 2005-08-02 05:56+0200
Last-Translator: Marcel Telka <marcel@telka.sk>
Language-Team: Slovak <sk-i18n@lists.linux.sk>
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8-bit
 
Správy o chybách zasielajte na adresu <bug-findutils@gnu.org> (iba anglicky).
Komentáre k slovenskému prekladu zasielajte na adresu <sk-i18n@lists.linux.sk>.
 
implicitná cesta je aktuálny adresár; implicitný výraz je -print
výraz môže pozostávať z: operátorov, volieb, testov a akcií:
 %s ukončený signálom %d %s: ukončený so stavom 255; prerušujem %s: nepovolená voľba -- %c
 %s: neplatné číslo pre voľbu -%c
 %s: neplatná voľba -- %c
 %s: voľba `%c%s' neumožňuje parameter
 %s: voľba `%s' je nejednoznačná
 %s: voľba `%s' vyžaduje parameter
 %s: voľba `--%s' neumožňuje parameter
 %s: voľba `-W %s' neumožňuje použiť parameter
 %s: voľba `-W %s' je nejednoznačná
 %s: voľba vyžaduje parameter -- %c
 %s: zastavený signálom %d %s: ukončený signálom %d %s: nerozpoznaná voľba `%c%s'
 %s: nerozpoznaná voľba `--%s'
 %s: hodnota pre voľbu -%c by mala byť < %ld
 %s: hodnota pre voľbu -%c by mala byť >= %ld
 ' < %s ... %s > ?  Databáza %s je vo formáte %s.
 Povolené vlastnosti:  Maximálna dĺžka príkazu, ktorú môžeme momentálne používať: %ld
 Len jeden výskyt {} je podporovaný s -exec%s ... + Chyby môžete oznamovať (a sledovať postup ich odstraňovania) pomocou stránky
oznamovania chýb pre findutils na http://savannah.gnu.org/ (iba anglicky),
alebo, ak nemáte prístup k www, odoslaním elektronickej pošty na adresu
<bug-findutils@gnu.org> (iba anglicky).
Komentáre k slovenskému prekladu zasielajte na adresu <sk-i18n@lists.linux.sk>. Aktuálny adresár je súčasťou premennej prostredia PATH, čo nie je bezpečné v kombinácii s akciou %s vyhľadania. Prosím, odstráňte aktuálny adresár z vašej premennej $PATH (to znamená, že odstráňte "." alebo začiatočné alebo koncové dvojbodky) Premenná prostredia FIND_BLOCK_SIZE je nepodporovaná, jediná vec, ktorá ovplyvňuje veľkosť bloku je premenná prostredia POSIXLY_CORRECT Neznáma systémova chyba Použitie: %s [--version | --help]
alebo     %s most_common_bigrams < zoznam-súborov > databáza-umiestnení
 Platné parametre sú: Nemôžete použiť {} vo vnútri názvu nástroja pre -execdir a -okdir, pretože toto je potenciálny bezpečnostný problém. ^[nN] ^[yYaAáÁ] ` akcie: -delete -print0 -printf FORMÁT -fprintf SÚBOR FORMÁT -print 
      -fprint0 SÚBOR -fprint SÚBOR -ls -fls SÚBOR -prune -quit
      -exec PRÍKAZ ; -exec PRÍKAZ {} + -ok PRÍKAZ ;
      -execdir PRÍKAZ ; - execdir PRÍKAZ {} + -okdir PRÍKAZ ;
 nejednoznačný parameter %s pre %s riadok s parametrom je príliš dlhý nemôžem vykonať fork nemôžem zistiť aktuálny adresár dní dvojitý prostredie je príliš veľké na vykonanie chyba pri čakaní na %s chyba pri zápise do procesu potomka neplatný typ -size `%c' neplatný parameter %s pre %s neplatný parameter `%s' pre `%s' neplatný výraz neplatný výraz; očakával som, že niekde nájdem ')', ale nenašiel som. neplatný výraz; máte príliš veľa ')' neplatný prázdny parameter pre -size neplatný predikát `%s' chýbajúci parameter pre `%s' chyba -- neplatné implicitné vloženie logického súčinu (and)! ach -- neplatný typ výrazu (%d)! ach -- neplatný typ výrazu! operátory (klesajúca priorita; -and je implicitný, ak nie je zadaný iný):
      ( VÝRAZ )  ! VÝRAZ  -not VÝRAZ VÝRAZ1 -a VÝRAZ2  VÝRAZ1 -and VÝRAZ2
      VÝRAZ1 -o VÝRAZ2  VÝRAZ1 - or VÝRAZ2   VÝRAZ1 , VÝRAZ2
 pozičné voľby (vždy pravda): -daystart -follow -regextype

obyčajné voľby (vždy pravda, zadané pred ostatnými výrazmi):
      -depth --help -maxdepth ÚROVNE -mindepth ÚROVNE -mount -noleaf
      --version -xdev -ignore_readdir_race -noignore_readdir_race
 kontrola správnosti knižničnej funkcie fnmatch() zlyhala. jednoduchý testy (N môže byt +N alebo -N alebo N): -amin N -anewer SÚBOR -atime N -cmin N
      -cnewer SÚBOR -ctime N -empty -false -fstype TYP -gid N -group NÁZOV
      -ilname VZOR -iname VZOR -inum N -iwholename VZOR -iregex VZOR
      -links N -lname VZOR -mmin N -mtime N -name VZOR -newer SÚBOR neočakávaný predikát navyše neznámy nezodpovedajúce úvodzovky %s; štandardne sú úvodzovky špeciálne pre xargs, pokiaľ nepoužijete voľbu -0 upozornenie: Unixové názvy súborov väčšinou neobsahujú lomky (hoci názvy ciest áno). To znamená, že '%s %s' bude pravdepodobne stále vyhodnotené ako zlyhanie v tomto systéme. Viac použiteľným testom môže byť '-wholename', alebo možno '-samefile'. Alebo, ak používate GNU grep, môžete použiť 'find ... -print0 | grep -FzZ %s'. upozornenie: nenasledujem symbolický odkaz %s upozornenie: voľby -d je neodporúčaná; prosím použite namiesto nej -depth, pretože táto spĺňa požiadavky POSIX. upozornenie: databáza umiestnení môže byť načítaná len raz zo štandardného vstupu. upozornenie: nerozlíšený prepínací znak `\%c' upozornenie: nerozpoznaná formátovacia direktíva '%%%c' upozornenie: zadali ste voľbu %s po parametri %s, ktorý nemá voľby, ale voľby nie sú pozičné (%s postihuje testy zadané predtým a tiež tie, ktoré sú zadané potom). Prosím, zadajte voľby pred ostatnými parametrami.
 