#include <iostream>
#include <vector>

int main()
{
    std::vector< int > vec;
    for (int i = 0; i < 100; i++) {
        vec.push_back(18);
        std::cout << "i: " << i << "\tsize: " << vec.size() << " \tcapacity: " << vec.capacity()
                  << " \t&vec[0]: " << &vec[0] << std::endl;
    }
}

/* 
Przy każdej zmianie capacity adres pierwszego elementu się zmienia.
Jest to spowodowane tym, że przy zmianie capacity pamięć jest ponownie alokowana.

Po uruchomieniu otrzymano:
  i: 0    size: 1     capacity: 1     &vec[0]: 0x563db2b45e70
  i: 1    size: 2     capacity: 2     &vec[0]: 0x563db2b462a0
  i: 2    size: 3     capacity: 4     &vec[0]: 0x563db2b45e70
  i: 3    size: 4     capacity: 4     &vec[0]: 0x563db2b45e70
  i: 4    size: 5     capacity: 8     &vec[0]: 0x563db2b462c0
  i: 5    size: 6     capacity: 8     &vec[0]: 0x563db2b462c0
  i: 6    size: 7     capacity: 8     &vec[0]: 0x563db2b462c0
  i: 7    size: 8     capacity: 8     &vec[0]: 0x563db2b462c0
  i: 8    size: 9     capacity: 16    &vec[0]: 0x563db2b462f0
  i: 9    size: 10    capacity: 16    &vec[0]: 0x563db2b462f0
  i: 10   size: 11    capacity: 16    &vec[0]: 0x563db2b462f0
  i: 11   size: 12    capacity: 16    &vec[0]: 0x563db2b462f0
  i: 12   size: 13    capacity: 16    &vec[0]: 0x563db2b462f0
  i: 13   size: 14    capacity: 16    &vec[0]: 0x563db2b462f0
  i: 14   size: 15    capacity: 16    &vec[0]: 0x563db2b462f0
  i: 15   size: 16    capacity: 16    &vec[0]: 0x563db2b462f0
  i: 16   size: 17    capacity: 32    &vec[0]: 0x563db2b46340
  i: 17   size: 18    capacity: 32    &vec[0]: 0x563db2b46340
  i: 18   size: 19    capacity: 32    &vec[0]: 0x563db2b46340
  i: 19   size: 20    capacity: 32    &vec[0]: 0x563db2b46340
  i: 20   size: 21    capacity: 32    &vec[0]: 0x563db2b46340
  i: 21   size: 22    capacity: 32    &vec[0]: 0x563db2b46340
  i: 22   size: 23    capacity: 32    &vec[0]: 0x563db2b46340
  i: 23   size: 24    capacity: 32    &vec[0]: 0x563db2b46340
  i: 24   size: 25    capacity: 32    &vec[0]: 0x563db2b46340
  i: 25   size: 26    capacity: 32    &vec[0]: 0x563db2b46340
  i: 26   size: 27    capacity: 32    &vec[0]: 0x563db2b46340
  i: 27   size: 28    capacity: 32    &vec[0]: 0x563db2b46340
  i: 28   size: 29    capacity: 32    &vec[0]: 0x563db2b46340
  i: 29   size: 30    capacity: 32    &vec[0]: 0x563db2b46340
  i: 30   size: 31    capacity: 32    &vec[0]: 0x563db2b46340
  i: 31   size: 32    capacity: 32    &vec[0]: 0x563db2b46340
  i: 32   size: 33    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 33   size: 34    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 34   size: 35    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 35   size: 36    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 36   size: 37    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 37   size: 38    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 38   size: 39    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 39   size: 40    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 40   size: 41    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 41   size: 42    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 42   size: 43    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 43   size: 44    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 44   size: 45    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 45   size: 46    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 46   size: 47    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 47   size: 48    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 48   size: 49    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 49   size: 50    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 50   size: 51    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 51   size: 52    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 52   size: 53    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 53   size: 54    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 54   size: 55    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 55   size: 56    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 56   size: 57    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 57   size: 58    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 58   size: 59    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 59   size: 60    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 60   size: 61    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 61   size: 62    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 62   size: 63    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 63   size: 64    capacity: 64    &vec[0]: 0x563db2b463d0
  i: 64   size: 65    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 65   size: 66    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 66   size: 67    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 67   size: 68    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 68   size: 69    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 69   size: 70    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 70   size: 71    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 71   size: 72    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 72   size: 73    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 73   size: 74    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 74   size: 75    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 75   size: 76    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 76   size: 77    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 77   size: 78    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 78   size: 79    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 79   size: 80    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 80   size: 81    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 81   size: 82    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 82   size: 83    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 83   size: 84    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 84   size: 85    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 85   size: 86    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 86   size: 87    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 87   size: 88    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 88   size: 89    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 89   size: 90    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 90   size: 91    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 91   size: 92    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 92   size: 93    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 93   size: 94    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 94   size: 95    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 95   size: 96    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 96   size: 97    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 97   size: 98    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 98   size: 99    capacity: 128   &vec[0]: 0x563db2b464e0
  i: 99   size: 100   capacity: 128   &vec[0]: 0x563db2b464e0
*/