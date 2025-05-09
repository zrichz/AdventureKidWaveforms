/* Adventure Kid Waveforms (AKWF) converted for use with Teensy Audio Library 
*  
*  Adventure Kid Waveforms(AKWF) Open waveforms library
*  https://www.adventurekid.se/akrt/waveforms/adventure-kid-waveforms/
*  
*  This code is in the public domain, CC0 1.0 Universal (CC0 1.0)
*  https://creativecommons.org/publicdomain/zero/1.0/
*
*  Converted by Brad Roy, https://github.com/prosper00
*/

/* AKWF_stereo_0011 256 samples
                                                                                                                        
  +-----------------------------------------------------------------------------------------------------------------+   
  |***                                                                                                              |   
  |* *                                                                                                              |   
  |*  *                                                                                                             |   
  |   **                                                                                                            |   
  |    ****                                                                                                         |   
  |       *                                                                                                         |   
  |       *                                                                                                         |   
  |       *     ******                                                                                              |   
  |       *    **    ***                                                                                            |   
  |       *    *       ***                                                                                          |   
  |       *   *          ***                                                  **************************************|   
  |       *   *            *****                          *********************                                     |   
  |        * *                 ****************************                                                         |   
  |        * *                                                                                                      |   
  |        ***                                                                                                      |   
  +-----------------------------------------------------------------------------------------------------------------+   
                                                                                                                        
                                                                                                                        
*/


const uint16_t AKWF_stereo_0011 [] = {
33807, 34988, 54387, 59181, 63682, 61389, 62138, 50309, 65535, 56968, 64310, 57028, 62818, 55797, 60755, 55057,
58029, 51800, 56275, 51292, 54375, 49443, 53019, 48727, 52037, 48263, 51011, 47407, 50741, 47619, 50188, 46891,
50443, 47252, 50309, 46794, 49774, 45807, 28489, 21285, 18666, 18054, 21348, 29943, 17532, 22698, 19880, 23194,
22104, 24145, 25513, 25414, 29084, 28368, 31964, 29179, 34513, 30768, 36886, 31701, 38334, 31857, 40165, 32830,
40837, 32321, 42003, 32924, 42254, 32336, 42745, 32390, 42767, 31970, 42728, 31602, 42563, 31298, 42183, 30747,
41826, 30464, 41192, 29981, 40646, 29715, 39906, 29289, 39268, 29017, 38478, 28641, 37800, 28392, 36978, 28028,
36320, 27842, 35532, 27526, 34908, 27370, 34203, 27042, 33703, 26939, 33067, 26667, 32553, 26525, 31986, 26306,
31507, 26172, 31008, 26002, 30562, 25875, 30137, 25752, 29743, 25641, 29369, 25536, 29012, 25433, 28690, 25347,
28374, 25251, 28100, 25183, 27821, 25093, 27587, 25036, 27344, 24951, 27145, 24904, 26933, 24828, 26761, 24786,
26611, 24755, 26471, 24722, 26321, 24668, 26201, 24635, 26080, 24595, 25980, 24569, 25882, 24540, 25800, 24521,
25726, 24509, 25662, 24497, 25611, 24497, 25561, 24497, 25534, 24520, 25540, 24577, 25517, 24595, 25507, 24631,
25502, 24666, 25505, 24711, 25514, 24762, 25532, 24822, 25552, 24887, 25585, 24962, 25617, 25038, 25660, 25126,
25699, 25213, 25772, 25339, 25858, 25477, 25911, 25580, 25980, 25701, 26045, 25818, 26118, 25950, 26180, 26068,
26258, 26203, 26336, 26342, 26421, 26484, 26504, 26627, 26592, 26780, 26676, 26927, 26794, 27114, 26903, 27291,
26987, 27442, 27083, 27605, 27173, 27765, 27267, 27929, 27357, 28087, 27450, 28251, 27541, 28413, 27636, 28580,
27725, 28741, 27818, 28905, 27906, 29069, 28024, 29262, 28117, 29431, 28200, 29589, 28289, 29750, 28374, 29908,
28457, 30067, 28541, 30223, 28624, 30380, 28704, 30532, 28785, 30686, 28864, 30837, 28941, 30987, 29021, 31140,
29116, 31311, 29190, 31457, 29263, 31602, 29334, 31745, 29408, 31889, 29479, 32027, 29549, 32167, 29618, 32305,
29688, 32442, 29756, 32577, 29824, 32711, 29889, 32842, 29959, 32979, 30036, 33122, 30098, 33248, 30165, 33376,
30227, 33498, 30294, 33631, 30349, 33746, 30405, 33860, 30469, 33983, 30530, 34101, 30591, 34218, 30650, 34330,
30713, 34447, 30775, 34561, 30836, 34675, 30893, 34782, 30951, 34886, 31007, 34990, 31065, 35093, 31119, 35191,
31174, 35290, 31227, 35383, 31282, 35479, 31334, 35570, 31386, 35657, 31438, 35745, 31487, 35830, 31537, 35911,
31584, 35989, 31632, 36065, 31679, 36139, 31725, 36209, 31769, 36277, 31812, 36343, 31855, 36408, 31896, 36466,
31937, 36523, 31978, 36581, 32017, 36633, 32050, 36676, 32084, 36720, 32120, 36763, 32154, 36803, 32188, 36841,
32221, 36877, 32251, 36907, 32282, 36936, 32311, 36962, 32340, 36987, 32366, 37004, 32393, 37024, 32419, 37040,
32435, 37043, 32457, 37049, 32480, 37056, 32501, 37059, 32521, 37059, 32541, 37059, 32559, 37053, 32576, 37046,
32593, 37036, 32610, 37024, 32624, 37008, 32640, 36994, 32646, 36963, 32654, 36937, 32668, 36912, 32678, 36886,
32689, 36854, 32699, 36824, 32709, 36788, 32717, 36753, 32723, 36711, 32730, 36672, 32737, 36625, 32742, 36583,
32746, 36532, 32741, 36473, 32742, 36419, 32747, 36366, 32748, 36310, 32751, 36253, 32751, 36195, 32752, 36129,
32751, 36072, 32751, 36001, 32750, 35943, 32748, 35864, 32746, 35807, 32743, 35722, 32731, 35654, 32730, 35566,
32725, 35505, 32722, 35413, 32717, 35354, 32712, 35256, 32707, 35194, 32704, 35097, 32694, 35029, 32693, 34935,
32684, 34859, 32677, 34768, 32674, 34684, 32654, 34591, 32656, 34496, 32640, 34436, 32640, 34286, 32622, 34329,
};
