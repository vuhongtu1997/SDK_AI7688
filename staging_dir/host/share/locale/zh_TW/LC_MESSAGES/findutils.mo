??    C      4  Y   L      ?  )   ?  ?   ?     d  $        ?  "   ?     ?  ,   ?     (  %   F  ,   l  -   ?      ?  &   ?          (     D     d  )   ?  *   ?     ?     ?  !   ?     	  5   !	  7   W	  ?   ?	  ?   G
  ?   1     ?  [   ?     4  q   I     ?     ?     ?  ?   ?     ?     ?     ?               $  !   +     M     b     ?     ?     ?     ?  P   ?  )   7     a     ?  %   ?      ?  ?   ?  	  ?  6   ?     ?  )  ?  W   !  I  y  q   ?  >   5  "   t  l  ?  0     ?   5     ?     ?     ?  !        2  0   O     ?  "   ?  0   ?  1   ?  "   &     I     i     ?  #   ?  #   ?  +   ?  .        B     F  "   W     z  .   ?  0   ?  ?   ?  ?   ?  ~   ?       `   (     ?  s   ?                 ?   #     !     ?     L     X     w     {  $        ?     ?  1   ?        &   *      Q   8   a   )   ?   !   ?      ?      !     !!  ?   :!    "  )   6#     `#  1  d#  s   ?$  @  
%  e   K&  @   ?&  C   ?&     3       /            %   -          .   8   &      
   :       <   C       B      ,       >                '   9   +      2   1   5   ?                =             *       @   6                             	   !                  7          #   ;         A       0                )              "   (   $          4          
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
 ambiguous argument %s for %s argument line too long cannot fork cannot get current directory days double environment is too large for exec error waiting for %s error waiting for child process invalid -size type `%c' invalid argument %s for %s invalid argument `%s' to `%s' invalid expression invalid expression; I was expecting to find a ')' somewhere but did not see one. invalid expression; you have too many ')' invalid null argument to -size missing argument to `%s' oops -- invalid expression type (%d)! oops -- invalid expression type! operators (decreasing precedence; -and is implicit where no others are given):
      ( EXPR )   ! EXPR   -not EXPR   EXPR1 -a EXPR2   EXPR1 -and EXPR2
      EXPR1 -o EXPR2   EXPR1 -or EXPR2   EXPR1 , EXPR2
 positional options (always true): -daystart -follow -regextype

normal options (always true, specified before other expressions):
      -depth --help -maxdepth LEVELS -mindepth LEVELS -mount -noleaf
      --version -xdev -ignore_readdir_race -noignore_readdir_race
 sanity check of the fnmatch() library function failed. single tests (N can be +N or -N or N): -amin N -anewer FILE -atime N -cmin N
      -cnewer FILE -ctime N -empty -false -fstype TYPE -gid N -group NAME
      -ilname PATTERN -iname PATTERN -inum N -iwholename PATTERN -iregex PATTERN
      -links N -lname PATTERN -mmin N -mtime N -name PATTERN -newer FILE unmatched %s quote; by default quotes are special to xargs unless you use the -0 option warning: Unix filenames usually don't contain slashes (though pathnames do).  That means that '%s %s' will probably evaluate to false all the time on this system.  You might find the '-wholename' test more useful, or perhaps '-samefile'.  Alternatively, if you are using GNU grep, you could use 'find ... -print0 | grep -FzZ %s'. warning: the -d option is deprecated; please use -depth instead, because the latter is a POSIX-compliant feature. warning: the locate database can only be read from stdin once. warning: unrecognized escape `\%c' Project-Id-Version: findutils 4.2.26
Report-Msgid-Bugs-To: bug-findutils@gnu.org
POT-Creation-Date: 2009-05-12 09:47+0100
PO-Revision-Date: 2005-12-06 11:30+0800
Last-Translator: Abel Cheung <abelcheung@gmail.com>
Language-Team: Chinese (traditional) <zh-l10n@linux.org.tw>
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
 
請向 <bug-findutils@gnu.org> 報告錯誤。
 
預設路徑為目前的目錄，預設的表達式是 -print
表達式可以包括運算子、選項、測試和操作模式：
 %s 因訊號 %d 而終止 %s: 回傳碼為 255；中止 %s：不合法的選項 ─ %c
 %s: -%c 選項後的數值無效
 %s：無效的選項 ─ %c
 %s：選項 ‘%c%s’ 不可配合參數使用
 %s：選項 ‘%s’ 不明確
 %s：選項 ‘%s’ 需要參數
 %s：選項 ‘--%s’ 不可配合參數使用
 %s：選項 ‘-W %s’ 不可配合參數使用
 %s：選項 ‘-W %s’ 不明確
 %s：選項需要參數 ─ %c
 %s: 因訊號 %d 而停止 %s: 因訊號 %d 而中止 %s：‘%c%s’ 選項無法辨識
 %s：‘--%s’ 選項無法辨識
 %s: -%c 選項後的數值必須小於 %ld
 %s: -%c 選項後的數值必須不小於 %ld
 ’ < %s ... %s > ?  資料庫 %s 使用了%s格式。
 啟用了的功能： 實際上可用的指令列長度上限：%ld
 在 -exec%s ... + 裡面只可以使用一次 {} 請在 http://savannah.gnu.org/ 有關錯誤報告的網頁中匯報錯誤 (或者跟進
問題修正的進度)。又或者如果您無法瀏覽網頁，可以選擇用電子郵件寄至
<bug-findutils@gnu.org>。 PATH 環境變數中包括了當前目錄，當配合 find 的 %s 操作模式時會令系統安全產生漏洞。請在 $PATH 變數中移除當前目錄 (即是 “.”，或者最前或最後的冒號) 環境變數 FIND_BLOCK_SIZE 已經不再支援，唯一一個能夠影響檔案區段大小的環境變數是 POSIXLY_CORRECT 不明的系統錯誤 用法: %s [--version | --help]
或     %s most_common_bigrams < 檔案清單 > locate資料庫
 有效的參數為： 您不應該在 -execdir 和 -okdir 中使用 {} 作為程式名稱，因為這樣做可能會造成安全漏洞。 ^[nN] ^[yY] ‘ 操作模式: -delete -print0 -printf FORMAT -fprintf FILE FORMAT -print 
      -fprint0 FILE -fprint FILE -ls -fls FILE -prune -quit
      -exec COMMAND ; -exec COMMAND {} + -ok COMMAND ;
      -execdir COMMAND ; -execdir COMMAND {} + -okdir COMMAND ;
 %2$s 的參數 %1$s 不明確 參數太長 fork 失敗 無法決定當前目錄位置 日 雙 執行 exec 時的環境變數太大 等待 %s 時出現錯誤 等待子進程時出現錯誤 -size 指定的檔案大小單位 ‘%c’ 無效 %2$s 的參數 %1$s 無效 ‘%2$s’ 的參數 ‘%1$s’ 無效 表達式無效 表達式無效；‘)’ 本應出現但實際上沒有 表達式無效；出現太多的 ‘)’ -size 後是無效的空白參數 ‘%s’ 後缺少了參數 表達式類型 (%d) 無效！ 表達式類型無效！ 以下的運算子優先次序由高至低排列；如果沒有運算子，則會假設為 -and :
      ( EXPR )   ! EXPR   -not EXPR   EXPR1 -a EXPR2   EXPR1 -and EXPR2
      EXPR1 -o EXPR2   EXPR1 -or EXPR2   EXPR1 , EXPR2
 位置選項 (邏輯值永遠為 true): -daystart -follow -regextype

一般選項 (邏輯值永遠為 true，必須加在其它表達式之前):
      -depth --help -maxdepth LEVELS -mindepth LEVELS -mount -noleaf
      --version -xdev -ignore_readdir_race -noignore_readdir_race
 測試 fnmatch() 是否可用時出錯。 單 測試 (N 可以有或沒有正負號): -amin N -anewer FILE -atime N -cmin N
      -cnewer FILE -ctime N -empty -false -fstype TYPE -gid N -group NAME
      -ilname PATTERN -iname PATTERN -inum N -iwholename PATTERN -iregex PATTERN
      -links N -lname PATTERN -mmin N -mtime N -name PATTERN -newer FILE %s引號不配合；除非使用 -0 選項，否則在預設模式下引號對於 xargs 來說是有特別意義的 警告：Unix 檔案名稱中一般上不會出現斜號 (雖然完整路徑會用斜號)。即是說，在本系統中 ‘%s %s’ 可能永遠是 false。在這情況下 ‘-wholename’ 或 ‘-samefile’可能會有用。又或者，如果您使用 GNU grep，可以嘗試使用 'find ... -print0 | grep -FzZ %s'。 警告：-d 選項已經過時，請改用 -depth，因為後者才是符合 POSIX 標準的選項。 警告：locate 資料庫只可以由標準輸入讀取一次。 警告：無效辨認轉義控制序列 (escape sequence) ‘\%c’ 