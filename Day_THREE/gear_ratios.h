/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gear_ratios.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 12:06:25 by mbernard          #+#    #+#             */
/*   Updated: 2023/12/03 22:22:03 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GEAR_RATIOS_H
# define GEAR_RATIOS_H
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

char *test = "467..114..N...*......N..35..633.N......#...N617*......N.....+.58.N..592.....N......755.N...$.*....N.664.598..";

char *gear = ".....487.599...........411...........................................574..679.136..........................30......255.......432............N....*......*............*..........&586..........................375...@..*....../.....835.............610*........./...............582.....N...833........304...&.862...............203..........922.125...............819.............@....563.....................722..775............N..............+...994..........#.........*..244.457.....*...........867.........829.....469.....#...........................*...............N313.....753.....................596............*................270..../........*........................38.......836..850..914......942*215N........*............10.525.515.......417$........976...........*..............878.613/.......*247.......*........+.........................N.......725.............*......................848*......236....25.........#605............................602.352...+............505#.619...N741........872...........899...........596..........824..*............542......#....893........299&...........*......389.....176.......*....N..........*....691...165....*../.........@...........#..973...........%.....207............435.........296...269...&........*....$..112.....N...707..311.............@.522.561..........470.................152......524.......964*853.....*...........+......541....578...871...........N..................*805..................................774...*.....397*....$261..............74............956.........*............451....N....328..+907..665.............872.=744..745=....../...........21...................-.560..................*.........332....135.......+.....N......*..........................*................96.................754.........750....@.......803...*..163.....475.........*..............N...309.......51*................658...633..769..........%426............*191......................./.598.....685*....898......685...........N.......-.........972%.................*............................39.........220......@....366..........................257...........@....N.......532.............149..968.......86...690.....933.........800....91*545.*........65..........633..17*609.863*.......&...40....485.185..N............63........./.......*.426.........*................*..............639............+.....@...............191.......................N..801.......................425..%.....420..615.816...186*614..783..........................583...............*........&.417...248*.........N........292.....%.................................+................147.....933........+.......................31....260............563......N...539...=.......553.....$.....=331.........89.........................688.............586...264........80%.................................N...*....................964.$...........836*......&./22...#.962.........*../934.625..........*.................$543...284.%...821=.959......N........285.206..............363..#.............311.....501....=......676.........&.557.........#....................*....713...............N....................%.............659....493........698...........719.................@.539..810...................119......................N...................305..554.....................164*........989=.=.....885...46...........*.............426................276..............N........602................%.849..595...877..........389...................................322.............*...................../...%.930..N....115...*.........67....................*.......79*....................422.......843................859...771.......355.1...404..103......N......*..836...94.........758.....90...306....210...........921............$...115..$.......892..923....*..............*....................N.....806.......*..............................................*................*......809......=.......592.....894...884...152......%.......N...$.........299.......189..412...142..........................908.........-.891........*....%.............859*...........*.......910.......N..667.............+457../....*..........................................532......333..418....958.648*889.............%728..99.863.......-...N...............73............958.....650.....127........=........*480............./..........................99.221.............#...171..532N.................*......*831.......-...@........*151.901...723.16............113....209......39-.........130*......&...796..........*.......N.............838.621.985..........588......................%....................=....#.........................../........*380.810.720......N..317..$304..-...........+.................../851..................93.....846........................+........744........................398N....*..........156*....614.......134...&18...........109.360.........-.......*....301..=..............509........./206...*349...861.........N...717.206@..................1=......3...................*....37/.......104..449........599...............$......................%..........N...............808..............287..-..........724....781..........443*........................&91........485....433..516..............995.N.....42*254..........706#........&..........................656...............9.........*916.....................&.................$....%...N.................311.................*........308...................901..............615..........114*10...47*.....875..............593.....N616*97..&............679*..........657.819...*.....61................*......@....@...........=................375..@...378.718*.............N.......901...182.695.........47........$...227....$....163............786..217..836..577....151......958...............*.......398..242.....N.....*..........*.....709.....*..........................*.....182..................+..................*.-....910....106............*....532N..682.104................*65..941..536..277..............60...%......438.420..254...............97..126...761..@.....................924....N................$.............................353....8*.................*......../................-..............+..........351.............N.............893...................801*........#.......246................#.974.........712..................662..594..898...*..958*..324.49N........899............................731.................#.......225..152...#........*......*403.%...................$...738......6.......N............821....171............477...........996........556....*..................837...998.....35.............................#.....*...N.............$.....*.................*............/................19.....614+.891..............................+..............183.......303N....916.15.......172......#.447*348.823.@....475....381.................................925....432...#.........795..........................N.......*...183..........578..............94.*......&....305............294....470.443.............+.435.197.................................N...113....*.....159................783......325...............769-........-..@.....*....249.............*...........993........487.599..719.N...*.......827...*........179#.........=855........................129............988..........=568...998.715......*......235.....*.....*...N.991.....+........340............380...............645.*....78........*................929.448..............%.....337.......*........871....N.....479..273.250...................-..=...............293..$..40.....602...297........*....*.....422.........*..............341............N...&.............*..........721.839.....455..302.................*.............*.....706....158............742.885...............441........N.931.....306*499.965.........&...&...........*..........950@....438..515...41..205......................................+....%...%......860.N.....................301....................182.......................#.....*..........846.......869..624......746...689....677.............N..143.729.638...%910...*.980..45.................215.539*346.-............651...714......*.......#...*.........=.................45.........N.....*.......*.......274....%.*......361........*............852.960........../....*539.....390*......31...........................#........N..........949.................813.33....*612.357..........+.......%..=211...114.................495................200................367...N.......................434..............................771..849..................................................*...............128*......N.......865...830..........*..=34...=124..........281............=....*........10.791.........437..................760......*536.............N.......*....*...........641................144....-....180.........506.139.....@...#.............148....................135.................N...727..344.972.....573...............418..*.............*.540*.........*.............185....79.*.......241-.272................271.720.....N......*................*..877..251....#.....170........906.....716..........414..............@...235.........%.....................*........N.......458.....*362.846...*.....$..................................=....=..*.........407...#...................................441..........N.....+......334.........995...........690....639.................119.777...674....-...#....974.93........335............816.....*..654......N..270.......................%............%......*.....475........................910...............................462.........586...*..317.N........................218..605...856.......894.....-.......%771........288%........632..352.......410........314.&...............952......N825.64..392.834.......2*............$....164.....540....94..........................*......*........+..........*.........914................N.....*.....*.................*..........*.......*..........@...........461..678.681.599..906....188.........510............@..398...........N..991....*.......223.....846.460........814....47..721..113......*257......#.....*....................440.............154......*............N......225.518...*.....................%...............&.......549......../....28..133............338.....*554.7.............................N..745............996.....75....@.....88....*...%....*...................772.....*....................618..............44*573................N..........107@...........*....245........606...949...817.....................114....*944................*........../.................694....N......128...............269.................................556..................892...........99.....960...608..577............1......#....N...=....*....*....598...............716.959...763...........*...378........736.........526%..........................309..........559.......N300...963...345....................*.....@......*..........28..#...............676........../....327................*.....301.........727...N................457..926.....856..553.........480.@181............912...982.....*........./..40....*......701....843.........*....379.......N.244*.............*......364...*.........................*........*.....*.......943..=...768....660......*................489...........994.N.....664...........839.....*.37.............360.......536..379.........872...........623..............122.....*.....-94.......108...320*....N...........401*710........37.......-..........*..............*..............53*.................$..........868.698........171*..............N...................#.............572...........943..931...592..................192...91*381......638....................................335.N398@...728%.....661.....#541.............$363..........*.......701..921.......................&......*416............490*..337-.............N......................$............531.........54...205.........#.......739.669=..621..488*....6..894...........#.................%.174.....N..........776........185....97.....*.......$./............................*..........*.....688..............253.998....223......610....*890.N....#.....*..............&.*........546.270..713............379............797....$............212...275......$.............................N...399....828.........962...137......................384....*....................599..181......*......%.........228.630/.............504....N................26*.......................=...........*..820..........982................#.764..79................*.........&........*......N.....845...........338..277...$..461.#....603.804=.262.......969....................*.......*...............681.212.......782..857..814.....N...........357*155.....*....486.@....439.....................*...................553.395.....901.................................*..........N....................210..................../....748*.671......448....+283.................................321.408...............483...+.....N.....169*95......................449%.....16..........&..........................55.......$....781...579...-...........534...........274....N690...........154..........239....................883....903.....701.838.............$...467......*...=..................=..................N.........699....*.........=............15*619.......................*......515....487........................808...............*.....611*121N.....369.*.....................813..21.................630...................#.................$....................153........11...........N.358*.....30.......514...........=.%....624......&942.....+....831.....669.......142.282#......835......632.175..$.....*...855..............N......212..........*........................*148..............*.................#.......................&.....-...382..239...=........486...N......*........734.211.*...65............696................459......90.&847..#......+..621.....18*251.............................../......N...684....@............384...*..................650.............957-.*.........12..669....#.................53........618..246..............N.......249..476...621.........78..243..........*....864...............374.......................389...43..............@...*.........737.....N...........*.........................*304.220.......*......162................455.&.............................307........895......*...898.N....=......642.........878..@.............@...883...816...@.......$................273.......210...........235.....*470................*....N.537...........+........*...135...98..........*..............202.445.......................+..*....907................................78....N..............102...998.6./........./....853.545.481............................*........56..449...*.........&3..501.13..195......&.........N.....................*.....442...........*...................................928.111...............428............./....*.........11........N..319..954...........................52...867...........25............716....................@..............775.......711...................N....%....%.......286.....313.....116.*...........245.....*.269....520*.............*507...878..............*....520........*648.............N..............16*......../......@..................*...328.-...........@........919...........419*640...378......*......933.......980.......N......643....................38...........414.................559....&.612.144*......181........................946.571.....................N.74...*.....+.........566......*.........-................882*.....249.........504.....=...........34.833...518......*.......276.../177.....N...*..241..236...........*...93....*.600......924..420.........822........4........&...............#..+........*708...201.......%...........N.63.................*...531.....685.............*.....*.825...*....&............658...........220..........813.....................426......N......*98........520.41..................-387.260...51....+...156..601......136.......*......+............*........./......161.....@........N...862.....96........................297..........%...........................&.786.789...........776.+...528....271........................N........../.....446...890..%....393....*......43=.178...................519..................-...*....967.............213..796..614.#441....N..847*87....@........=....704......-..235..............193.......279*......@........*37...535..414..........234.......*.......@...*.........N...........963............................................@.861......360......@..906....*...............564.=.......85....285...564.........N....845...............*....469........+...460*989..............=...........884.......877.....738*505.....*.............................500..N.....*...214...825..18.917...........651...........248.............&....&.......&../......................342....271........644.........+...N....988...*.....*...........289+.423......287.....*........547&.9..163...613..605..447....73...817..$...........$......=....................N...............80......900............464*.........729...................................&........=..972.923.........654...852.......150....N837.174*671.............*.....147.............70...........................170%..............640*........*................=......615*.......N............878.......282........*............+....................120...........................987..636..950*.$...........................N...........*.....................731...................-....6.162....@......753.105.678.........................1.........992.......708.....N...*296.....821...817.....#...........29...-............588..*............@......$..*...202.........+212...2=.......8........*.........+....N660.....403............579.....873.....*....521..167.......................321......598...........%......%.....721.....825..440.928.........N.....37........................*.....964........*....622..........402#..........315................626.488.702*...........%.....*...........N..............783...........71..66..............460...*..+838...........*911....%................................................537...343..N..........625*...............&.......-......866.....989...............12................950.......................*912......................N...............121=.&886........=....351........................808........604...898.....*..199...913....433............@....121/...........N..........................362...120........464...................=.........*....*.......287..@...*........*..........828....................N..619..815.213......982...$.................*......588...165........544.805...136...870.........964..$....345.............829.......909.....N...-.../...*.......$..........273-.234....979.617.....=.*..........=...................*..............320.....324.%..........=......../.....N...........475......................./..........*............718........*......963%....994...................*.....109...644............116.N...../...............*133.......132..............41.........-...........506........................415.....585............*.................N.....304..873*633.382.....+............179.............410.......572.........................999...$...106.....+543.....421..887............N..........................997....925....*........153......*.383...*..50*.............585.102..........@........................*......199...N.......................................645.1.......+...622.....$.720....518...........*...*.................#........@303.......286.........N......696..................................................753......................957.715.............396..159...........338.......806....N";

int			ft_isdigit(int c);
int			ft_check_line(char *matrix, int y, int num_len);
int			ft_atoi(const char *str);
char		**ft_split(char const *s, char c);
void		ft_putnbr_fd(int n, int fd);

#endif
